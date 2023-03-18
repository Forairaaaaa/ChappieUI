/**
 * @file App_Demo.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_Demo_appName();
    void* App_Demo_appIcon();
    void App_Demo_onCreate();
    void App_Demo_onLoop();
    void App_Demo_onDestroy();
    void App_Demo_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Demo);
}