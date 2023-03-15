/**
 * @file App_Launcher.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "App_Launcher.h"
#include "UI/ui.h"



void App_Launcher::onStartup()
{
    /* Init UI */
    ui_init();

    /* Play startup Logo animation */
    LogoBottomUp_Animation(ui_ImageLogoBottom, 0);
    LogoDropdown_Animation(ui_LabelLogo0, 50 * 0);
    LogoDropdown_Animation(ui_LabelLogo1, 50 * 1);
    LogoDropdown_Animation(ui_LabelLogo2, 50 * 2);
    LogoDropdown_Animation(ui_LabelLogo3, 50 * 3);
    LogoDropdown_Animation(ui_LabelLogo4, 50 * 4);
    LogoDropdown_Animation(ui_LabelLogo5, 50 * 5);
    LogoDropdown_Animation(ui_LabelLogo6, 50 * 6);
    
}


void App_Launcher::onCreate()
{
    /* Into launcher */
    lv_scr_load_anim(ui_ScreenLauncher, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, true);
}


void App_Launcher::onDestroy()
{
}






/* Events handler */
void AppListValueChanged(lv_event_t * e)
{
    
    // lv_roller_get_selected()

}


void AppIconClicked(lv_event_t * e)
{
    AppIconFadeaway_Animation(ui_ImageAppIcon, 0);
    AppIconFadeIn_Animation(ui_ImageAppIcon, 10);
    AppIconPopout_Animation(ui_ImageAppIcon, 10);
}
