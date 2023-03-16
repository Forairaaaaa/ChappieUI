/**
 * @file App_benchmark.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_benchmark_appName();
    void* App_benchmark_appIcon();
    void App_benchmark_onCreate();
    void App_benchmark_onLoop();
    void App_benchmark_onDestroy();
    void App_benchmark_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(benchmark);
}
