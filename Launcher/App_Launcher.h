/**
 * @file App_Launcher.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../Apps/AppList.h"
#include "../../ChappieBsp/Chappie.h"

class App_Launcher {
    private:
        /* BSP pointer to access hardware functions */
        CHAPPIE* _device;

    public:
        inline App_Launcher(CHAPPIE* device) { _device = device; }

        void onCreate();
        void onLoop();
        void onDestroy();
};

