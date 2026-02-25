#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  DRAG_SCROLL,
};



#define DUAL_FUNC_0 LT(14, KC_5)
#define DUAL_FUNC_1 LT(11, KC_M)
#define DUAL_FUNC_2 LT(7, KC_X)
#define DUAL_FUNC_3 LT(7, KC_C)
#define DUAL_FUNC_4 LT(14, KC_F19)
#define DUAL_FUNC_5 LT(5, KC_P)
#define DUAL_FUNC_6 LT(5, KC_7)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(4),          
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_COMMA,       KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,       
    KC_BSLS,        KC_Q,           MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_MINUS),KC_SLASH,       KC_SCLN,        
                                                    LT(1, KC_KP_EQUAL),KC_LEFT_SHIFT,                                  MT(MOD_LALT | MOD_LGUI | MOD_LCTL, KC_MS_BTN1),LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,                                KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_F2)))),KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_F1)))),KC_TRANSPARENT, LGUI(LCTL(KC_Q)),
    LALT(LGUI(LCTL(KC_J))),LGUI(KC_RBRC),  LCTL(LSFT(KC_TAB)),KC_MS_BTN3,     LCTL(KC_TAB),   KC_HOME,                                        KC_GRAVE,       KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_HASH,        KC_TRANSPARENT, 
    LGUI(LSFT(KC_SPACE)),LGUI(KC_LBRC),  KC_MS_BTN2,     DRAG_SCROLL,    KC_MS_BTN1,     KC_END,                                         KC_TILD,        KC_CIRC,        KC_LPRN,        KC_RPRN,        KC_DLR,         KC_TRANSPARENT, 
    KC_ESCAPE,      LGUI(KC_W),     DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    LGUI(KC_V),                                     KC_AT,          DUAL_FUNC_3,    MT(MOD_RALT, KC_LBRC),MT(MOD_RCTL, KC_RBRC),KC_AMPR,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_NO,                                          KC_LEFT_SHIFT,  LT(2, KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F14,         KC_TRANSPARENT, KC_F15,         KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,                                          KC_TRANSPARENT, KC_NO,          KC_UP,          KC_NO,          KC_DELETE,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          MT(MOD_LCTL, KC_KP_1),MT(MOD_LALT, KC_KP_2),MT(MOD_LGUI, KC_KP_3),KC_NO,                                          KC_KP_PLUS,     MT(MOD_RGUI, KC_KP_ASTERISK),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_KP_0,        MT(MOD_LSFT, KC_SPACE),                                KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,                                          KC_NO,          MT(MOD_RGUI, KC_F1),MT(MOD_RALT, KC_F2),MT(MOD_RCTL, KC_F3),KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LGUI(LSFT(KC_4)),DUAL_FUNC_4,                                    KC_F12,         KC_F11
  ),
  [4] = LAYOUT_voyager(
    MO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LT(5, KC_KP_EQUAL),KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(6, KC_SPACE)
  ),
  [5] = LAYOUT_voyager(
    KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, LALT(KC_RIGHT), LCTL(LSFT(KC_TAB)),KC_MS_BTN3,     LCTL(KC_TAB),   KC_HOME,                                        KC_GRAVE,       KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_HASH,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  KC_MS_BTN2,     DRAG_SCROLL,    KC_MS_BTN1,     KC_END,                                         KC_TILD,        KC_CIRC,        KC_LPRN,        KC_RPRN,        KC_DLR,         KC_TRANSPARENT, 
    KC_ESCAPE,      LCTL(KC_W),     DUAL_FUNC_0,    DUAL_FUNC_5,    DUAL_FUNC_6,    LCTL(KC_V),                                     KC_AT,          DUAL_FUNC_3,    MT(MOD_RALT, KC_LBRC),MT(MOD_RCTL, KC_RBRC),KC_AMPR,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_NO,                                          KC_LEFT_SHIFT,  LT(6, KC_SPACE)
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_VAD,        KC_TRANSPARENT, RGB_VAI,        KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,                                          KC_TRANSPARENT, KC_NO,          KC_UP,          KC_NO,          KC_DELETE,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          MT(MOD_LCTL, KC_KP_1),MT(MOD_LALT, KC_KP_2),MT(MOD_LGUI, KC_KP_3),KC_NO,                                          KC_KP_PLUS,     MT(MOD_RGUI, KC_KP_ASTERISK),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_KP_0,        MT(MOD_LSFT, KC_SPACE),                                KC_NO,          KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,                                          KC_NO,          MT(MOD_RGUI, KC_F1),MT(MOD_RALT, KC_F2),MT(MOD_RCTL, KC_F3),KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_NUM,         LGUI(LSFT(KC_S)),                                KC_NO,          KC_NO
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_KP_EQUAL):
            return TAPPING_TERM -40;
        case LT(2, KC_SPACE):
            return TAPPING_TERM -40;
        case LT(6, KC_SPACE):
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {173,255,255}, {0,255,255} },

    [1] = { {0,255,255}, {44,255,255}, {124,255,255}, {93,255,255}, {124,255,255}, {44,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {129,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,255}, {0,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,0}, {24,255,255}, {0,0,0}, {24,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248} },

    [5] = { {0,255,255}, {44,255,255}, {124,255,255}, {93,255,255}, {124,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,255}, {0,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,0}, {24,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_X));
        } else {
          unregister_code16(LGUI(KC_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_T));
        } else {
          unregister_code16(LGUI(KC_T));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_C));
        } else {
          unregister_code16(LGUI(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_GUI);
        } else {
          unregister_code16(KC_RIGHT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_5)));
        } else {
          unregister_code16(LGUI(LSFT(KC_5)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_T));
        } else {
          unregister_code16(LCTL(KC_T));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
