#pragma once

#include QMK_KEYBOARD_H
#include "custom_shift_keys.h"

bool process_custom_keymap(uint16_t keycode, keyrecord_t *record);
uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t *record, uint16_t flow_tap_term);
