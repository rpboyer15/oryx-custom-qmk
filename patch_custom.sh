#!/bin/bash
# Patches Oryx-generated files to wire in custom keymap code.
# Run after extracting Oryx source files.
#
# Usage: ./patch_custom.sh <layout_dir>
#   e.g.: ./patch_custom.sh qv3wV

set -euo pipefail

LAYOUT_DIR="${1:?Usage: $0 <layout_dir>}"

echo "Patching ${LAYOUT_DIR}/keymap.c ..."

# 1. Add custom include after the QMK_KEYBOARD_H include
sed -i 's|^#include QMK_KEYBOARD_H|#include QMK_KEYBOARD_H\n#include "features/custom_keymap.h"|' \
  "${LAYOUT_DIR}/keymap.c"

# 2. Insert custom process call at the start of process_record_user body
sed -i '/^bool process_record_user(uint16_t keycode, keyrecord_t \*record) {$/a\
  if (!process_custom_keymap(keycode, record)) { return false; }' \
  "${LAYOUT_DIR}/keymap.c"

echo "Patching ${LAYOUT_DIR}/rules.mk ..."

# 3. Append custom source files to rules.mk
echo 'SRC += features/custom_shift_keys.c features/custom_keymap.c' >> "${LAYOUT_DIR}/rules.mk"

echo "Done. Custom keymap wired in."
