/**
 * @file App_Settings.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "App_Settings.h"
#include <Arduino.h>


static std::string _app_name = "Settings";


namespace App {

    /**
     * @brief Return App name
     * 
     * @return std::string 
     */
    std::string App_Settings_appName()
    {
        return _app_name;
    }


    /**
     * @brief Return App Icon, NULL for default
     * 
     * @return void* 
     */
    void* App_Settings_appIcon()
    {
        return NULL;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_Settings_onCreate()
    {
        UI_LOG("[%s] oncreate\n", App_Settings_appName().c_str());
    }


    /**
     * @brief Called in loop
     * 
     */
    void App_Settings_onLoop()
    {

    }


    /**
     * @brief Called when App is on destroy
     * 
     */
    void App_Settings_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_Settings_appName().c_str());
    }

}
