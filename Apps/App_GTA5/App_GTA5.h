#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_GTA5_appName();
    void* App_GTA5_appIcon();
    void App_GTA5_onCreate();
    void App_GTA5_onLoop();
    void App_GTA5_onDestroy();
    void App_GTA5_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(GTA5);
}

#endif
