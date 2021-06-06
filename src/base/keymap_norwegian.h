#pragma once

#include "keymap_extras/keymap_norwegian.h"
#include "../base.h"

// Norwegian layout fix
#undef NO_QUOT
#define NO_QUOT KC_BSLS  // '
#undef NO_TILD
#define NO_TILD RALT(KC_RBRC)  // ~

// Shift layout fix
#undef NO_SQUOT
#define NO_SQUOT KC_AT  // "
#undef NO_SBSLS
#define NO_SBSLS KC_GRAVE  // |
