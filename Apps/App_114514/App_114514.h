#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_114514_appName();
    void* App_114514_appIcon();
    void App_114514_onCreate();
    void App_114514_onLoop();
    void App_114514_onDestroy();
    void App_114514_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(114514);
}

#endif
