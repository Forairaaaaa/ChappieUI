#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_777_appName();
    void* App_777_appIcon();
    void App_777_onCreate();
    void App_777_onLoop();
    void App_777_onDestroy();
    void App_777_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(777);
}

#endif
