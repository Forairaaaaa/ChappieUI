#if 1
#include "App_ESPNOW.h"
#include "../../../ChappieBsp/Chappie.h"


static std::string app_name = "ESPNOW";
static CHAPPIE* device;


LV_IMG_DECLARE(ui_img_icon_espnow_png);


static void _espnow_init()
{


}


static void _espnow_loop()
{


}



namespace App {

    /**
     * @brief Return the App name laucnher, which will be show on launcher App list
     * 
     * @return std::string 
     */
    std::string App_ESPNOW_appName()
    {
        return app_name;
    }


    /**
     * @brief Return the App Icon laucnher, NULL for default
     * 
     * @return void* 
     */
    void* App_ESPNOW_appIcon()
    {
        // return NULL;
        return (void*)&ui_img_icon_espnow_png;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_ESPNOW_onCreate()
    {
        UI_LOG("[%s] onCreate\n", App_ESPNOW_appName().c_str());

        _espnow_init();
        while (1) {
            _espnow_loop();
            if (device->Button.B.pressed())
                break;
        }

        lv_obj_t * label = lv_label_create(lv_scr_act());
        lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
        lv_label_set_text(label, "Press B again to quit");
    }


    /**
     * @brief Called repeatedly, end this function ASAP! or the App management will be affected
     * If the thing you want to do takes time, try create a taak or lvgl timer to handle them.
     * Try use millis() instead of delay() here
     * 
     */
    void App_ESPNOW_onLoop()
    {
    }


    /**
     * @brief Called when App is about to be destroy
     * Please remember to release the resourse like lvgl timers in this function
     * 
     */
    void App_ESPNOW_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_ESPNOW_appName().c_str());
    }


    /**
     * @brief Launcher will pass the BSP pointer through this function before onCreate
     * 
     */
    void App_ESPNOW_getBsp(void* bsp)
    {
        device = (CHAPPIE*)bsp;
    }
    
}

#endif
