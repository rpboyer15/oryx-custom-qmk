#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(4, KC_V)
#define DUAL_FUNC_1 LT(13, KC_B)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSLS,        
    KC_COMMA,       KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,       
    KC_EQUAL,       KC_Q,           MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_MINUS),KC_SLASH,       KC_SCLN,        
                                                    KC_LEFT_SHIFT,  MO(1),                                          LALT(LGUI(KC_LEFT_CTRL)),LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,                                KC_F14,         KC_F15,         LALT(LGUI(LCTL(LSFT(KC_F2)))),LALT(LGUI(LCTL(LSFT(KC_F1)))),RGB_VAD,        RGB_VAI,        
    KC_NO,          KC_NO,          LGUI(KC_LBRC),  LGUI(LSFT(KC_SPACE)),LGUI(KC_RBRC),  LGUI(KC_Z),                                     KC_GRAVE,       KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_HASH,        KC_TRANSPARENT, 
    KC_NO,          LALT(LGUI(LCTL(KC_J))),LCTL(LSFT(KC_TAB)),LGUI(KC_T),     LCTL(KC_TAB),   KC_NO,                                          KC_TILD,        KC_CIRC,        KC_LPRN,        KC_RPRN,        KC_DLR,         KC_TRANSPARENT, 
    KC_NO,          LGUI(KC_W),     LGUI(KC_X),     MT(MOD_LALT, KC_ESCAPE),DUAL_FUNC_0,    LGUI(KC_V),                                     KC_AT,          DUAL_FUNC_1,    MT(MOD_RALT, KC_LBRC),MT(MOD_RCTL, KC_RBRC),KC_AMPR,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT_SHIFT,  MO(3)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,                                          KC_HOME,        KC_DELETE,      KC_UP,          KC_BSPC,        KC_PAGE_UP,     KC_NO,          
    KC_TRANSPARENT, KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_NO,                                          KC_END,         KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          MT(MOD_LCTL, KC_KP_1),MT(MOD_LALT, KC_KP_2),MT(MOD_LGUI, KC_KP_3),KC_NO,                                          KC_NO,          MT(MOD_RGUI, KC_KP_PLUS),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_KP_0,        MT(MOD_LSFT, KC_SPACE),                                KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_NO,          LGUI(LSFT(KC_S)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_NO,          LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),KC_NUM,         KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          MT(MOD_LCTL, KC_F1),MT(MOD_LALT, KC_F2),MT(MOD_LGUI, KC_F3),KC_NO,                                          KC_NO,          KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,          KC_NO,          
                                                    KC_F11,         KC_F12,                                         KC_LEFT_SHIFT,  KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MO(1):
            return TAPPING_TERM -40;
        case LT(2, KC_SPACE):
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {173,255,255}, {0,255,255} },

    [1] = { {0,255,255}, {44,255,255}, {124,255,255}, {93,255,255}, {124,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {24,255,255}, {24,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,255}, {218,255,248} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {218,255,248} },

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
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
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
    case DUAL_FUNC_1:
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


