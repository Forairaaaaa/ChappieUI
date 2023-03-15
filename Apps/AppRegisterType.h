/**
 * @file AppRegisterType.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <string>

namespace ChappieUIApp {

    /* Structure to contain app function pointers  */
    struct ChappieUIApp_t {
        
        /* Return app name */
        std::string (*appName)();

        /* Reaturn app Icon in lv_img_t */
        void* (*appIcon)();

        /* App oncreate */
        void (*onCreate)();

        /* App onDestroy */
        void (*onDestroy)();
    };

}