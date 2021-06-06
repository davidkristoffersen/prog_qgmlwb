#pragma once

#include "../base.h"

enum dead_keys {
    NO_TILD_M = 0,
    NO_CIRC_M,
    NO_GRV_M,
    KC_EXLM_M
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt);