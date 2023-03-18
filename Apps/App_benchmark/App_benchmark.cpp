/**
 * @file App_benchmark.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "App_benchmark.h"
#include "../../../ChappieBsp/Chappie.h"
#include <Arduino.h>
#include <lvgl.h>
#include "../../Launcher/UI/ui.h"

static std::string app_name = "benchmark";
static CHAPPIE* device;


namespace App {

    /**
     * @brief Return the App name laucnher, which will be show on launcher App list
     * 
     * @return std::string 
     */
    std::string App_benchmark_appName()
    {
        return app_name;
    }


    /**
     * @brief Return the App Icon laucnher, NULL for default
     * 
     * @return void* 
     */
    void* App_benchmark_appIcon()
    {
        // return NULL;
        return (void*)&ui_img_img_icon_test2_png;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_benchmark_onCreate()
    {
        UI_LOG("[%s] onCreate\n", App_benchmark_appName().c_str());

        lv_demo_benchmark();
    }


    /**
     * @brief Called repeatedly, end this function ASAP! or the App management will be affected
     * If the thing you want to do takes time, try create a taak or lvgl timer to handle them.
     * Try use millis() instead of delay() here
     * 
     */
    void App_benchmark_onLoop()
    {
    }


    /**
     * @brief Called when App is about to be destroy
     * Please remember to release the resourse like lvgl timers in this function
     * 
     */
    void App_benchmark_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_benchmark_appName().c_str());
    }


    /**
     * @brief Launcher will pass the BSP pointer through this function before onCreate
     * 
     */
    void App_benchmark_getBsp(void* bsp)
    {
        device = (CHAPPIE*)bsp;
    }
}