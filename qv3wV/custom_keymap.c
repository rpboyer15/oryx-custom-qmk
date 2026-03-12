#include "custom_keymap.h"

const custom_shift_key_t custom_shift_keys[] = {
  {KC_QUOT,  KC_UNDS},  // Shift ' → _
  {KC_COMM,  KC_QUES},  // Shift , → ?
  {KC_MINS,  KC_DQUO},  // Shift - → "
  {KC_SLSH,  KC_RABK},  // Shift / → >
  {KC_DOT,   KC_LABK},  // Shift . → <
  {KC_EQUAL, KC_EQUAL}  // Shift = → =
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
  sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

bool process_custom_keymap(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) {
    return false;
  }

  switch (keycode) {
    case MT(MOD_RALT, KC_DOT):
      if (record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          tap_code16(KC_LABK);   // Shift held → <
        } else {
          tap_code16(KC_DOT);    // Normal → .
        }
        return false;
      }
      break;

    case MT(MOD_RCTL, KC_MINUS):
      if (record->tap.count && record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          tap_code16(KC_DQUO);   // Shift held → "
        } else {
          tap_code16(KC_MINUS);  // Normal → -
        }
        return false;
      }
      break;
  }

  return true;
}
