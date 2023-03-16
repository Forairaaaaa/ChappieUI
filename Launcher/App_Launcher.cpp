/**
 * @file App_Launcher.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "App_Launcher.h"
#include "UI/ui.h"


struct AppManager_t {
    uint16_t totalNum = 0;
    uint16_t selected = 0;
    bool isRunning = false;
    bool onCreate = false;
    bool onDestroy = false;
};
static AppManager_t _app;


namespace App {

    void App_Launcher::state_bar_update(lv_timer_t * timer)
    {
        CHAPPIE* device = (CHAPPIE*)timer->user_data;

        static char label_buffer[10];

        /* Update clock */
        static I2C_BM8563_TimeTypeDef rtc_time;
        device->Rtc.getTime(&rtc_time);
        // snprintf(label_buffer, 10, "%d:%0d:%0d", rtc_time.hours, rtc_time.minutes, rtc_time.seconds);
        snprintf(label_buffer, 10, "%d:%0d", rtc_time.hours, rtc_time.minutes);
        lv_label_set_text(ui_LabelStateBarClock, label_buffer);

        /* Update battery */
        static float battery;
        battery = device->Pow.readBatVoltage();
        snprintf(label_buffer, 10, "%.2fV", battery);
        lv_label_set_text(ui_LabelStateBarBattery, label_buffer);
    }


    void App_Launcher::onCreate()
    {
        /* Into launcher */
        _device->lvgl.disable();
        ui_init();
        // lv_scr_load_anim(ui_ScreenLauncher, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, true);

        /* Read App register */
        _app.totalNum = sizeof(App::Register) / sizeof(AppRegister_t);
        /* Write all apps' name into roller options */
        std::string apps_name_buffer = "";
        for (int i = 0; i < _app.totalNum; i++) {
            apps_name_buffer += App::Register[i].appName();
            if (i != (_app.totalNum - 1))
                apps_name_buffer += "\n";
        }
        /* Update App list to roller */
        lv_roller_set_options(ui_RollerAppList, apps_name_buffer.c_str(), LV_ROLLER_MODE_NORMAL);

        /* Update App Icon */
        const lv_img_dsc_t* app_icon = (const lv_img_dsc_t*)App::Register[0].appIcon();
        if (app_icon == NULL) {
            app_icon = &ui_img_pic_appicon_default_png;
        }
        lv_img_set_src(ui_ImageAppIcon, app_icon);

        /* Create a timer to update state bar */
        _state_bar_update_timer = lv_timer_create(state_bar_update, 1000, (void*)_device);
        state_bar_update(_state_bar_update_timer);
        _device->lvgl.enable();
    }


    void App_Launcher::onLoop()
    {
        _device->lvgl.disable();

        /* If key home is pressed */
        if (_device->Button.B.pressed()) {
            if (_app.isRunning) {
                _app.onDestroy = true;
            }
        }

        /* App state manage, kind of like a FSM */
        if (_app.onCreate) {
            _app.onCreate = false;
            _app.isRunning = true;

            /* Wait until clicked animation finished */
            _device->lvgl.enable();
            delay(150);
            _device->lvgl.disable();

            /* Destroy launcher */
            onDestroy();
            /* Open App */
            App::Register[_app.selected].getBsp(_device);
            App::Register[_app.selected].onCreate();
        }
        if (_app.isRunning) {
            App::Register[_app.selected].onLoop();
        }
        if (_app.onDestroy) {
            _app.onDestroy = false;
            _app.isRunning = false;

            /* Quit App */
            App::Register[_app.selected].onDestroy();
            /* Create launcher */
            onCreate();
        }

        _device->lvgl.enable();
    }


    void App_Launcher::onDestroy()
    {
        /* Delete timer */
        lv_timer_del(_state_bar_update_timer);
        
        /* Delete Launcher screen and reaplace with an empty one */
        lv_disp_load_scr(lv_obj_create(NULL));
        lv_obj_del(ui_ScreenLauncher);
    }

}



/* Events handlers */
void AppListValueChanged(lv_event_t * e)
{
    static uint16_t _current_value;
    static const lv_img_dsc_t* _current_app_icon;

    lv_obj_t * obj = lv_event_get_target(e);

    /* Get current app */
    _current_value = lv_roller_get_selected(obj);
    
    /* Update App Icon */
    _current_app_icon = (const lv_img_dsc_t*)App::Register[_current_value].appIcon();
    if (_current_app_icon == NULL) {
        _current_app_icon = &ui_img_pic_appicon_default_png;
    }
    lv_img_set_src(ui_ImageAppIcon, _current_app_icon);
    AppIconPopout_Animation(ui_ImageAppIcon, 0);
}


void AppIconClicked(lv_event_t * e)
{
    /* Update current running app */
    _app.selected = lv_roller_get_selected(ui_RollerAppList);
    _app.onCreate = true;
    // UI_LOG("%d\n", _app.selected);

    /* Play clicked animation */
    AppIconClicked_Animation(ui_ImageAppIcon, 0);
}
