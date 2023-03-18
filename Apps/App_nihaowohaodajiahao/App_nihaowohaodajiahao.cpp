#if 1
#include "App_nihaowohaodajiahao.h"
#include "../../../ChappieBsp/Chappie.h"


static std::string app_name = "nihaowohaodajiahao";
static CHAPPIE* device;


namespace App {

    /**
     * @brief Return the App name laucnher, which will be show on launcher App list
     * 
     * @return std::string 
     */
    std::string App_nihaowohaodajiahao_appName()
    {
        return app_name;
    }


    /**
     * @brief Return the App Icon laucnher, NULL for default
     * 
     * @return void* 
     */
    void* App_nihaowohaodajiahao_appIcon()
    {
        return NULL;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_nihaowohaodajiahao_onCreate()
    {
        UI_LOG("[%s] onCreate\n", App_nihaowohaodajiahao_appName().c_str());

        /*Create an Arc*/
        lv_obj_t * arc = lv_arc_create(lv_scr_act());
        lv_obj_set_size(arc, 150, 150);
        lv_arc_set_rotation(arc, 135);
        lv_arc_set_bg_angles(arc, 0, 270);
        lv_arc_set_value(arc, 40);
        lv_obj_center(arc);
    }


    /**
     * @brief Called repeatedly, end this function ASAP! or the App management will be affected
     * If the thing you want to do takes time, try create a taak or lvgl timer to handle them.
     * Try use millis() instead of delay() here
     * 
     */
    void App_nihaowohaodajiahao_onLoop()
    {
    }


    /**
     * @brief Called when App is about to be destroy
     * Please remember to release the resourse like lvgl timers in this function
     * 
     */
    void App_nihaowohaodajiahao_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_nihaowohaodajiahao_appName().c_str());
    }


    /**
     * @brief Launcher will pass the BSP pointer through this function before onCreate
     * 
     */
    void App_nihaowohaodajiahao_getBsp(void* bsp)
    {
        device = (CHAPPIE*)bsp;
    }
    
}

#endif
