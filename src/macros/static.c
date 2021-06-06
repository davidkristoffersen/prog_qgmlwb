 #include "static.h"

const uint16_t DEAD_KEY_CODES[] = {NO_TILD, NO_CIRC, NO_GRV, KC_EXLM};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch(id) {
        case NO_TILD_M ... KC_EXLM_M:
            if (record->event.pressed) {
                tap_dead_key(DEAD_KEY_CODES[id]);
            }
        }
    return MACRO_NONE;
};