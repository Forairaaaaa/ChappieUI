#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_shit_appName();
    void* App_shit_appIcon();
    void App_shit_onCreate();
    void App_shit_onLoop();
    void App_shit_onDestroy();
    void App_shit_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(shit);
}

#endif
