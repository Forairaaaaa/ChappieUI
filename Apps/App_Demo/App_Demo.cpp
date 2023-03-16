/**
 * @file App_Test.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "App_Demo.h"
#include <Arduino.h>


static std::string _app_name = "Demo";


namespace App {

    /**
     * @brief Return App name
     * 
     * @return std::string 
     */
    std::string App_Demo_appName()
    {
        return _app_name;
    }


    /**
     * @brief Return App Icon, NULL for default
     * 
     * @return void* 
     */
    void* App_Demo_appIcon()
    {
        return NULL;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_Demo_onCreate()
    {
        printf("[%s] oncreste\n", App_Demo_appName().c_str());
    }


    /**
     * @brief Called in loop
     * 
     */
    void App_Demo_onLoop()
    {

    }


    /**
     * @brief Called when App is on destroy
     * 
     */
    void App_Demo_onDestroy()
    {
        printf("[%s] onDestroy\n", App_Demo_appName().c_str());
    }

}
