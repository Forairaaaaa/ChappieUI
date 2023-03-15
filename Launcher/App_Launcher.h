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

class App_Launcher {
    private:

    public:
        /**
         * @brief Play startup animation
         * 
         */
        void onStartup();
        void onCreate();
        void onDestroy();
};

