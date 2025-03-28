#include QMK_KEYBOARD_H
#include "features/custom_shift_keys.h"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

const custom_shift_key_t custom_shift_keys[] = {
    {KC_QUOT, KC_UNDS}, // Shift ' is _
    {KC_COMM, KC_QUES}, // Shift , is ?
    {KC_MINS, KC_DQUO}, // Shift - is "
    {KC_SLSH, KC_LABK}, // Shift / is <
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SCLN,        
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_COMMA,       
    KC_LEFT_GUI,    KC_N,           KC_R,           KC_T,           KC_S,           KC_G,                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,       
    MO(3),          KC_Q,           MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_C),KC_V,                                           KC_K,           MT(MOD_RGUI, KC_P),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_MINUS),KC_SLASH,       KC_BSLS,        
                                                    MO(1),          KC_LEFT_SHIFT,                                  MO(2),          MT(MOD_LALT | MOD_LGUI | MOD_LCTL, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,                                KC_F14,         KC_F15,         LALT(LGUI(LCTL(LSFT(KC_F2)))),LALT(LGUI(LCTL(LSFT(KC_F1)))),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_ESCAPE,      LCTL(LSFT(KC_TAB)),LGUI(KC_T),     LCTL(KC_TAB),   KC_HOME,                                        KC_PAGE_UP,     KC_DELETE,      KC_UP,          KC_BSPC,        KC_NO,          KC_NO,          
    KC_CAPS,        KC_NO,          LGUI(LSFT(KC_J)),LGUI(LSFT(KC_SPACE)),KC_NO,          KC_END,                                         KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          TD(DANCE_0),    KC_LEFT_ALT,    TD(DANCE_1),    LGUI(KC_V),                                     KC_NO,          KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_LEFT_SHIFT,  KC_SPACE
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK,                                 KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,          
    KC_KP_EQUAL,    KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_SLASH,                                    KC_TILD,        KC_LPRN,        KC_LCBR,        KC_LBRC,        KC_CIRC,        KC_NO,          
    KC_TRANSPARENT, KC_0,           MT(MOD_LCTL, KC_1),MT(MOD_LALT, KC_2),MT(MOD_LGUI, KC_3),KC_KP_DOT,                                      KC_GRAVE,       TD(DANCE_2),    TD(DANCE_3),    MT(MOD_RCTL, KC_RBRC),KC_AMPR,        KC_NO,          
                                                    KC_SPACE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN4,     KC_MS_BTN5,     KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          KC_NO,                                          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                          KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_NO,                                          KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {57,255,255}, {0,0,255} },

    [1] = { {219,219,179}, {44,255,255}, {0,255,255}, {124,255,255}, {124,255,255}, {93,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {43,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {93,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {93,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {93,255,255}, {0,0,0}, {0,0,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {218,255,248}, {218,255,248}, {218,255,248}, {218,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

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
  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  switch (keycode) {
    case MT(MOD_RCTL, KC_MINUS): // Replace with your Mod-Tap configuration
      if (record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) { // Check if Shift is held
          tap_code16(KC_DQUO);             // Output "?" if Shift is held
        } else {
          tap_code16(KC_MINUS); // Output "-" otherwise
        }
        return false; // Prevent further processing
      }
      break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_W));
        tap_code16(LGUI(KC_W));
        tap_code16(LGUI(KC_W));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_W));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_W)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_W)); register_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_W)); register_code16(LGUI(KC_W));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_W)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_RCBR);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_RCBR); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RCBR); register_code16(KC_RCBR);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_RCBR); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RCBR); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};