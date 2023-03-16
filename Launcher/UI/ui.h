// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: ChappieUI_Launcher

#ifndef _CHAPPIEUI_LAUNCHER_UI_H
#define _CHAPPIEUI_LAUNCHER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

void AppIconPopout_Animation(lv_obj_t * TargetObject, int delay);
void AppIconClicked_Animation(lv_obj_t * TargetObject, int delay);
void AppIconFadeaway_Animation(lv_obj_t * TargetObject, int delay);
void AppIconFadeIn_Animation(lv_obj_t * TargetObject, int delay);
extern lv_obj_t * ui_ScreenLauncher;
extern lv_obj_t * ui_ImageStateBar;
extern lv_obj_t * ui_LabelStateBarClock;
extern lv_obj_t * ui_LabelStateBarBattery;
void ui_event_RollerAppList(lv_event_t * e);
extern lv_obj_t * ui_RollerAppList;
void ui_event_ImageAppIcon(lv_event_t * e);
extern lv_obj_t * ui_ImageAppIcon;

void AppListValueChanged(lv_event_t * e);
void AppIconClicked(lv_event_t * e);

LV_IMG_DECLARE(ui_img_pic_statebar_png);    // assets\Pic_StateBar.png
LV_IMG_DECLARE(ui_img_pic_appicon_watch_png);    // assets\Pic_AppIcon_Watch.png
LV_IMG_DECLARE(ui_img_pic_appicon_default_png);    // assets\Pic_AppIcon_Default.png
LV_IMG_DECLARE(ui_img_pic_appicon_games_png);    // assets\Pic_AppIcon_Games.png
LV_IMG_DECLARE(ui_img_pic_appicon_settings_png);    // assets\Pic_AppIcon_Settings.png
LV_IMG_DECLARE(ui_img_pic_startupbottom_png);    // assets\Pic_StartupBottom.png


LV_FONT_DECLARE(ui_font_FontHarmonyOSSansSCLight72);
LV_FONT_DECLARE(ui_font_FontHarmonyOSSansSCMedium16);
LV_FONT_DECLARE(ui_font_FontHarmonyOSSansSCMedium24);
LV_FONT_DECLARE(ui_font_FontHarmonyOSSansSCMedium48);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
