/**
 * @file App_Widgets.h
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

    std::string App_Widgets_appName();
    void* App_Widgets_appIcon();
    void App_Widgets_onCreate();
    void App_Widgets_onLoop();
    void App_Widgets_onDestroy();
    void App_Widgets_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Widgets);
}
