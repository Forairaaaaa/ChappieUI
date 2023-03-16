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
#include "../Apps/AppRegister.h"
#include "../../ChappieBsp/Chappie.h"


namespace App {

    class App_Launcher {
        private:
            /* BSP pointer to access hardware functions */
            CHAPPIE* _device;

            lv_timer_t* _state_bar_update_timer;

            static void state_bar_update(lv_timer_t * timer);

        public:
            inline App_Launcher(CHAPPIE* device) { _device = device; }

            void onCreate();
            void onLoop();
            void onDestroy();
    };

}
