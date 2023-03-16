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
        _device->lvgl.disable();
        /* Init UI */
        ui_init();
        /* Play startup Logo animation */
        LogoBottomUp_Animation(ui_ImageLogoBottom, 0);
        LogoDropdown_Animation(ui_LabelLogo0, 50 * 0);
        LogoDropdown_Animation(ui_LabelLogo1, 50 * 1);
        LogoDropdown_Animation(ui_LabelLogo2, 50 * 2);
        LogoDropdown_Animation(ui_LabelLogo3, 50 * 3);
        LogoDropdown_Animation(ui_LabelLogo4, 50 * 4);
        LogoDropdown_Animation(ui_LabelLogo5, 50 * 5);
        LogoDropdown_Animation(ui_LabelLogo6, 50 * 6);
        _device->lvgl.enable();

        /* Wait until animation finish */
        delay(1500);

        /* Into launcher */
        _device->lvgl.disable();
        lv_scr_load_anim(ui_ScreenLauncher, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, true);
        _device->lvgl.enable();

        /* Create a timer to update state bar */
        _state_bar_update_timer = lv_timer_create(state_bar_update, 1000, (void*)_device);
    }


    void App_Launcher::onLoop()
    {

        if (_device->Button.A.pressed()) {
            esp_restart();
        }

        delay(500);

        printf("%s\n", App::Register[0].appName().c_str());
        App::Register[0].onCreate();
        App::Register[0].onDestroy();
        App::Register[0].onLoop();

    }


    void App_Launcher::onDestroy()
    {
        /* Delete timer */
        lv_timer_del(_state_bar_update_timer);
    }

}


/* Events handlers */
void AppListValueChanged(lv_event_t * e)
{
    
}


void AppIconClicked(lv_event_t * e)
{
    AppIconFadeaway_Animation(ui_ImageAppIcon, 0);
    AppIconFadeIn_Animation(ui_ImageAppIcon, 10);
    AppIconPopout_Animation(ui_ImageAppIcon, 10);
}
