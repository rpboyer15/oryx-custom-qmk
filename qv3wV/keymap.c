#include QMK_KEYBOARD_H
#include "features/custom_shift_keys.h"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS}, // Shift ' is _
    {KC_COMM, KC_QUES}, // Shift , is ?
    {KC_MINS, KC_DQUO}, // Shift - is "
    {KC_SLSH, KC_RABK}, // Shift / is >
    {KC_DOT, KC_LABK}, // Shift . is <
	{KC_EQUAL, KC_EQUAL} // Shift = is =
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(14, KC_P)
#define DUAL_FUNC_1 LT(1, KC_F15)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_BSPC,        
    KC_COMMA,       KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,       
    KC_BSLS,        KC_Q,           MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_MINUS),KC_SLASH,       KC_SCLN,        
                                                    LT(1, KC_SPACE),KC_LEFT_SHIFT,                                  LALT(LGUI(KC_LEFT_CTRL)),LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,                                KC_F14,         KC_F15,         LALT(LGUI(LCTL(LSFT(KC_F2)))),LALT(LGUI(LCTL(LSFT(KC_F1)))),KC_TRANSPARENT, LGUI(LCTL(KC_Q)),
    KC_TRANSPARENT, KC_NO,          LGUI(KC_LBRC),  LGUI(LSFT(KC_SPACE)),LGUI(KC_RBRC),  KC_HOME,                                        KC_KP_EQUAL,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(LCTL(KC_J))),LCTL(LSFT(KC_TAB)),LGUI(KC_T),     LCTL(KC_TAB),   KC_END,                                         KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_TRANSPARENT, 
    MO(3),          LGUI(KC_W),     KC_LEFT_CTRL,   MT(MOD_LALT, KC_ESCAPE),DUAL_FUNC_0,    LGUI(KC_V),                                     KC_KP_MINUS,    MT(MOD_RGUI, KC_KP_1),MT(MOD_RALT, KC_KP_2),MT(MOD_RCTL, KC_KP_3),KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_NO,                                          MT(MOD_LSFT, KC_KP_0),KC_SPACE
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_HASH,                                        KC_NO,          KC_DELETE,      KC_UP,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_TILD,                                        KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AMPR,        DUAL_FUNC_1,    MT(MOD_LALT, KC_LBRC),MT(MOD_LGUI, KC_RBRC),KC_AT,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(LSFT(KC_S)),KC_NO,                                          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NUM,         LGUI(LSFT(KC_5)),LGUI(LSFT(KC_4)),KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_GUI,    KC_NO,                                          KC_NO,          MT(MOD_RGUI, KC_F1),MT(MOD_RALT, KC_F2),MT(MOD_RCTL, KC_F3),KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_LEFT_SHIFT,                                  KC_F12,         KC_F11
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_SPACE):
            return TAPPING_TERM -40;
        case LT(2, KC_SPACE):
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
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {173,255,255}, {93,255,255} },

    [1] = { {0,255,255}, {44,255,255}, {124,255,255}, {93,255,255}, {124,255,255}, {44,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {218,255,248}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {24,255,255}, {24,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {93,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {0,0,255}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248} },

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  switch (keycode) {

    case MT(MOD_RALT, KC_DOT): // Replace with your Mod-Tap configuration
      if (record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) { // Check if Shift is held
          tap_code16(KC_LABK);             // Output < if Shift is held
        } else {
          tap_code16(KC_DOT); // Output "." otherwise
        }
        return false; // Prevent further processing
      }
      break;
    case MT(MOD_RCTL, KC_MINUS): // Replace with your Mod-Tap configuration
      if (record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) { // Check if Shift is held
          tap_code16(KC_DQUO);             // Output " if Shift is held
        } else {
          tap_code16(KC_MINUS); // Output "-" otherwise
        }
        return false; // Prevent further processing
      }
      break;
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
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
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
