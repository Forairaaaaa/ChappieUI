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
#include "App_Test.h"
#include <Arduino.h>


namespace App {

    std::string App_Test_appName()
    {
        static std::string shit = "Test shit";
        return shit;
    }

    void* App_Test_appIcon()
    {
        int* shit;
        return shit;
    }

    void App_Test_onCreate()
    {
        printf("App Test oncreste\n");
    }

    void App_Test_onDestroy()
    {
        printf("App Test onDestroy\n");
    }



}
