#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_NFS_appName();
    void* App_NFS_appIcon();
    void App_NFS_onCreate();
    void App_NFS_onLoop();
    void App_NFS_onDestroy();
    void App_NFS_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(NFS);
}

#endif
