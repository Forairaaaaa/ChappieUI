/**
 * @file App_Settings.h
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

    /**
     * @brief 4 basic functions is needed for register
     * 
     */
    std::string App_Settings_appName();
    void* App_Settings_appIcon();
    void App_Settings_onCreate();
    void App_Settings_onLoop();
    void App_Settings_onDestroy();

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Settings);
}
