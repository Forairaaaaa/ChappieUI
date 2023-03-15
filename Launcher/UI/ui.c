// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: ChappieUI_Launcher

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void AppIconPopout_Animation(lv_obj_t * TargetObject, int delay);
void LogoDropdown_Animation(lv_obj_t * TargetObject, int delay);
void LogoBottomUp_Animation(lv_obj_t * TargetObject, int delay);
void AppIconClicked_Animation(lv_obj_t * TargetObject, int delay);
void AppIconFadeaway_Animation(lv_obj_t * TargetObject, int delay);
void AppIconFadeIn_Animation(lv_obj_t * TargetObject, int delay);
lv_obj_t * ui_ScreenStartup;
lv_obj_t * ui_LabelLogo0;
lv_obj_t * ui_LabelLogo1;
lv_obj_t * ui_LabelLogo2;
lv_obj_t * ui_LabelLogo3;
lv_obj_t * ui_LabelLogo4;
lv_obj_t * ui_LabelLogo5;
lv_obj_t * ui_LabelLogo6;
lv_obj_t * ui_ImageLogoBottom;
lv_obj_t * ui_ScreenLauncher;
lv_obj_t * ui_ImageStateBar;
lv_obj_t * ui_LabelStateBarClock;
lv_obj_t * ui_LabelStateBarBattery;
void ui_event_RollerAppList(lv_event_t * e);
lv_obj_t * ui_RollerAppList;
void ui_event_ImageAppIcon(lv_event_t * e);
lv_obj_t * ui_ImageAppIcon;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void AppIconPopout_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, 100, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void LogoDropdown_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -168, -28);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_bounce);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void LogoBottomUp_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 200, 63);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void AppIconClicked_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, 240, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void AppIconFadeaway_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 10);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void AppIconFadeIn_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 10);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_RollerAppList(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        AppListValueChanged(e);
    }
}
void ui_event_ImageAppIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        AppIconClicked(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_ScreenStartup_screen_init(void)
{
    ui_ScreenStartup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenStartup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenStartup, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenStartup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo0 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo0, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo0, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo0, -93);
    lv_obj_set_y(ui_LabelLogo0, -168);
    lv_obj_set_align(ui_LabelLogo0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo0, "C");
    lv_obj_set_style_text_color(ui_LabelLogo0, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo0, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo1 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo1, -56);
    lv_obj_set_y(ui_LabelLogo1, -168);
    lv_obj_set_align(ui_LabelLogo1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo1, "H");
    lv_obj_set_style_text_color(ui_LabelLogo1, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo1, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo2 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo2, -20);
    lv_obj_set_y(ui_LabelLogo2, -168);
    lv_obj_set_align(ui_LabelLogo2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo2, "A");
    lv_obj_set_style_text_color(ui_LabelLogo2, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo2, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo3 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo3, 12);
    lv_obj_set_y(ui_LabelLogo3, -168);
    lv_obj_set_align(ui_LabelLogo3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo3, "P");
    lv_obj_set_style_text_color(ui_LabelLogo3, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo3, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo4 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo4, 42);
    lv_obj_set_y(ui_LabelLogo4, -168);
    lv_obj_set_align(ui_LabelLogo4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo4, "P");
    lv_obj_set_style_text_color(ui_LabelLogo4, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo4, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo5 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo5, 66);
    lv_obj_set_y(ui_LabelLogo5, -168);
    lv_obj_set_align(ui_LabelLogo5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo5, "I");
    lv_obj_set_style_text_color(ui_LabelLogo5, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo5, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLogo6 = lv_label_create(ui_ScreenStartup);
    lv_obj_set_width(ui_LabelLogo6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLogo6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLogo6, 88);
    lv_obj_set_y(ui_LabelLogo6, -168);
    lv_obj_set_align(ui_LabelLogo6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLogo6, "E");
    lv_obj_set_style_text_color(ui_LabelLogo6, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelLogo6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLogo6, &ui_font_FontHarmonyOSSansSCMedium48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageLogoBottom = lv_img_create(ui_ScreenStartup);
    lv_img_set_src(ui_ImageLogoBottom, &ui_img_pic_startupbottom_png);
    lv_obj_set_width(ui_ImageLogoBottom, LV_SIZE_CONTENT);   /// 280
    lv_obj_set_height(ui_ImageLogoBottom, LV_SIZE_CONTENT);    /// 113
    lv_obj_set_x(ui_ImageLogoBottom, 0);
    lv_obj_set_y(ui_ImageLogoBottom, 63);
    lv_obj_set_align(ui_ImageLogoBottom, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageLogoBottom, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageLogoBottom, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_ScreenLauncher_screen_init(void)
{
    ui_ScreenLauncher = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenLauncher, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenLauncher, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenLauncher, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageStateBar = lv_img_create(ui_ScreenLauncher);
    lv_img_set_src(ui_ImageStateBar, &ui_img_pic_statebar_png);
    lv_obj_set_width(ui_ImageStateBar, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_ImageStateBar, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_ImageStateBar, 0);
    lv_obj_set_y(ui_ImageStateBar, -105);
    lv_obj_set_align(ui_ImageStateBar, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageStateBar, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageStateBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelStateBarClock = lv_label_create(ui_ImageStateBar);
    lv_obj_set_width(ui_LabelStateBarClock, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelStateBarClock, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelStateBarClock, -94);
    lv_obj_set_y(ui_LabelStateBarClock, 0);
    lv_obj_set_align(ui_LabelStateBarClock, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelStateBarClock, "21:50");
    lv_obj_set_style_text_color(ui_LabelStateBarClock, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelStateBarClock, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelStateBarClock, &ui_font_FontHarmonyOSSansSCMedium16,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelStateBarBattery = lv_label_create(ui_ImageStateBar);
    lv_obj_set_width(ui_LabelStateBarBattery, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelStateBarBattery, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelStateBarBattery, 100);
    lv_obj_set_y(ui_LabelStateBarBattery, 0);
    lv_obj_set_align(ui_LabelStateBarBattery, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelStateBarBattery, "90%");
    lv_obj_set_style_text_color(ui_LabelStateBarBattery, lv_color_hex(0x929292), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelStateBarBattery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelStateBarBattery, &ui_font_FontHarmonyOSSansSCMedium16,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RollerAppList = lv_roller_create(ui_ScreenLauncher);
    lv_roller_set_options(ui_RollerAppList, "Settings\nController\nGames", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_RollerAppList, 160);
    lv_obj_set_width(ui_RollerAppList, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_RollerAppList, 78);
    lv_obj_set_y(ui_RollerAppList, 14);
    lv_obj_set_align(ui_RollerAppList, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_RollerAppList, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RollerAppList, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_RollerAppList, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_RollerAppList, 26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_RollerAppList, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RollerAppList, &ui_font_FontHarmonyOSSansSCMedium16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_RollerAppList, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RollerAppList, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RollerAppList, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_RollerAppList, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RollerAppList, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_RollerAppList, lv_color_hex(0x929292), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RollerAppList, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_RollerAppList, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_RollerAppList, 26, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_RollerAppList, LV_TEXT_ALIGN_LEFT, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RollerAppList, &ui_font_FontHarmonyOSSansSCMedium16, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_RollerAppList, 20, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RollerAppList, lv_color_hex(0xDFDFDF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RollerAppList, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_ImageAppIcon = lv_img_create(ui_ScreenLauncher);
    lv_img_set_src(ui_ImageAppIcon, &ui_img_pic_appicon_settings_png);
    lv_obj_set_width(ui_ImageAppIcon, LV_SIZE_CONTENT);   /// 160
    lv_obj_set_height(ui_ImageAppIcon, LV_SIZE_CONTENT);    /// 200
    lv_obj_set_x(ui_ImageAppIcon, -52);
    lv_obj_set_y(ui_ImageAppIcon, 15);
    lv_obj_set_align(ui_ImageAppIcon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageAppIcon, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageAppIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_RollerAppList, ui_event_RollerAppList, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImageAppIcon, ui_event_ImageAppIcon, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenStartup_screen_init();
    ui_ScreenLauncher_screen_init();
    lv_disp_load_scr(ui_ScreenStartup);
}
