/**
 * @file ChappieUI.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "ChappieUIConfigs.h"
#include "Launcher/App_Launcher.h"
#include "../ChappieBsp/Chappie.h"


class CHAPPIEUI {
    private:
        bool _inited;
        CHAPPIE* _device;
        App_Launcher* _launcher;

        void startup();

    public:
        CHAPPIEUI() : _inited(false) {}
        ~CHAPPIEUI() {}

        /**
         * @brief UI begin
         * 
         */
        int begin();
        
        /* Get device bsp pointor */
        inline CHAPPIE* device() { return _device; }
};


