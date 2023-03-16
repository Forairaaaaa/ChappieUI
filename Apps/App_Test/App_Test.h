/*/**
 * @file App_Test.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../AppRegisterType.h"

namespace App {

    std::string App_Test_appName();
    void* App_Test_appIcon();
    void App_Test_onCreate();
    void App_Test_onDestroy();

    static AppRegister_t App_Test = {
        appName:App_Test_appName,
        appIcon:App_Test_appIcon,
        onCreate:App_Test_onCreate,
        onDestroy:App_Test_onDestroy,
    };

}
