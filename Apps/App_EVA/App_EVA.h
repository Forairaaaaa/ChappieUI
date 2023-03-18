#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_EVA_appName();
    void* App_EVA_appIcon();
    void App_EVA_onCreate();
    void App_EVA_onLoop();
    void App_EVA_onDestroy();
    void App_EVA_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(EVA);
}

#endif
