#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_nihaowohaodajiahao_appName();
    void* App_nihaowohaodajiahao_appIcon();
    void App_nihaowohaodajiahao_onCreate();
    void App_nihaowohaodajiahao_onLoop();
    void App_nihaowohaodajiahao_onDestroy();
    void App_nihaowohaodajiahao_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(nihaowohaodajiahao);
}

#endif
