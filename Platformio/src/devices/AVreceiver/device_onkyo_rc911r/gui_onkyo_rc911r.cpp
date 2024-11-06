#include <lvgl.h>
#include <string>
#include "applicationInternal/gui/guiBase.h"
#include "applicationInternal/gui/guiRegistry.h"
#include "applicationInternal/commandHandler.h"
#include "devices/AVreceiver/device_onkyo_rc911r/device_onkyo_rc911r.h"
#include "devices/AVreceiver/device_onkyo_rc911r/gui_onkyo_rc911r.h"

enum {
  BD_DVD = 0,
  CBL_SAT,
  GAME,
  STRMBOX,
  PC,
  AUX,
  CD,
  TV,
  PHONO,
  TUNER,
  NET,
  BLUETOOTH,
};

static std::string screen_buttons[] = {
  [BD_DVD] = "BD/DVD",
  [CBL_SAT] = "CBL/SAT",
  [GAME] = "GAME",
  [STRMBOX] = "STRMBOX",
  [PC] = "PC",
  [AUX] = "AUX",
  [CD] = "CD",
  [TV] = "TV",
  [PHONO] = "PHONO",
  [TUNER] = "TUNER",
  [NET] = "NET",
  [BLUETOOTH] = "BLUETOOTH",
};
#define screen_buttons_count 12

static void button_clicked_event_cb(lv_event_t* e) {
  int user_data = (intptr_t)(e->user_data);

  switch(user_data) {
  case BD_DVD:
    executeCommand(ONKYO_RC911R_BD_DVD);
    break;
  case CBL_SAT:
    executeCommand(ONKYO_RC911R_CBL_SAT);
    break;
  case GAME:
    executeCommand(ONKYO_RC911R_GAME);
    break;
  case STRMBOX:
    executeCommand(ONKYO_RC911R_STRMBOX);
    break;
  case PC:
    executeCommand(ONKYO_RC911R_PC);
    break;
  case AUX:
    executeCommand(ONKYO_RC911R_AUX);
    break;
  case CD:
    executeCommand(ONKYO_RC911R_CD);
    break;
  case TV:
    executeCommand(ONKYO_RC911R_TV);
    break;
  case PHONO:
    executeCommand(ONKYO_RC911R_PHONO);
    break;
  case TUNER:
    executeCommand(ONKYO_RC911R_TUNER);
    break;
  case NET:
    executeCommand(ONKYO_RC911R_NET);
    break;
  case BLUETOOTH:
    executeCommand(ONKYO_RC911R_BLUETOOTH);
    break;
  }
}

void create_tab_content_onkyo_rc911r(lv_obj_t* tab) {
  static lv_coord_t col_dsc[] { 110, 110, LV_GRID_TEMPLATE_LAST };
  static lv_coord_t row_dsc[] { 50, 50, 50, 50, 50, 50, LV_GRID_TEMPLATE_LAST };
  int i, col, row;

  lv_obj_set_layout(tab, LV_LAYOUT_GRID);
  lv_obj_set_style_grid_column_dsc_array(tab, col_dsc, 0);
  lv_obj_set_style_grid_row_dsc_array(tab, row_dsc, 0);
  lv_obj_set_scrollbar_mode(tab, LV_SCROLLBAR_MODE_ACTIVE);
  lv_obj_set_style_pad_row(tab, 1, 0);
  lv_obj_set_style_pad_column(tab, 1, 0);

  for (i = 0; i < screen_buttons_count; i++) {
    col = i % 2;
    row = i / 2;
    lv_obj_t* button = lv_btn_create(tab);
    lv_obj_set_grid_cell(button, LV_GRID_ALIGN_STRETCH, col, 1, LV_GRID_ALIGN_STRETCH, row, 1);
    lv_obj_set_style_bg_color(button, color_primary, LV_PART_MAIN);
    lv_obj_add_event_cb(button, button_clicked_event_cb, LV_EVENT_CLICKED, (void *)i);
    lv_obj_t* label = lv_label_create(button);
    lv_label_set_text(label, screen_buttons[i].c_str());
    lv_obj_center(label);
  }
}

void notify_tab_before_delete_onkyo_rc911r(void) {
  // remember to set all pointers to lvgl objects to NULL if they might be accessed from outside.
  // They must check if object is NULL and must not use it if so
  
}

void register_gui_onkyo_rc911r(void){
  register_gui(std::string(tabName_onkyo_rc911r), & create_tab_content_onkyo_rc911r, & notify_tab_before_delete_onkyo_rc911r);
}
