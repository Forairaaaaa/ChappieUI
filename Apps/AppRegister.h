/**
 * @file AppRegister.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "AppTypedef.h"

/**
 *  ---------- How to regiter a App ----------
 * 
 *  1. Include your App's header file in 1)
 *      e.g. #include "App_Demo/App_Demo.h"
 *  2. Log your App into AppRegister in 2)
 *      e.g. App_Login(Demo),
 * 
 * -------------------------------------------
 */


/**
 * @brief 1) Include your App's header file
 * 
 */
#include "App_Demo/App_Demo.h"
#include "App_Settings/App_Settings.h"


namespace App {
    
    static AppRegister_t Register[] = {
        
        /**
         * @brief 2) Log your App into AppRegister here
         * 
         */
        App_Login(Demo),
        App_Login(Settings),


    };
}
