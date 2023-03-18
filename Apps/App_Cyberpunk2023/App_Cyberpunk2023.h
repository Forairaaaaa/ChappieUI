#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_Cyberpunk2023_appName();
    void* App_Cyberpunk2023_appIcon();
    void App_Cyberpunk2023_onCreate();
    void App_Cyberpunk2023_onLoop();
    void App_Cyberpunk2023_onDestroy();
    void App_Cyberpunk2023_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Cyberpunk2023);
}

#endif
