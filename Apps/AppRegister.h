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
 *  ------------------------------------------- How to Add an App -------------------------------------------
 * 
 *  1. Copy the App_Demo folder, rename it like App_MyApp, and paste it next to App_Demo.
 *      into App_MyApp folder, rename the cpp and h file, e.g. App_MyApp.cpp
 *      into App_MyApp.cpp and  App_MyApp.h, change all the "Demo" to "MyApp"
 * 
 *  2. Include your App's header file in 2)
 *      e.g. #include "App_MyApp/App_MyApp.h"
 * 
 *  3. Log your App into AppRegister in 3)
 *      e.g. App_Login(MyApp),
 * 
 * ----------------------------------------------------------------------------------------------------------
 */


/**
 * @brief 2) Include your App's header file
 * 
 */
#include "App_Demo/App_Demo.h"
#include "App_Widgets/App_Widgets.h"
#include "App_benchmark/App_benchmark.h"


namespace App {
    
    static AppRegister_t Register[] = {
        

        /**
         * @brief 3) Log your App into AppRegister here
         * 
         */
        App_Login(Demo),
        App_Login(Widgets),
        App_Login(benchmark),
        
        

    };
}
