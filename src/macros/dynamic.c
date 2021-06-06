#include "dynamic.h"

// Shift codes conversion struct
typedef struct shift_code {
	uint16_t pre;
	uint16_t post;
	int lang;
} shift_code_t;

// Array of shift codes to convert
const shift_code_t SHIFT_CODES[] = {
	// NO
	{.lang = QGMLW_NO, .pre = NO_QUOT, .post = NO_SQUOT},
	{.lang = QGMLW_NO, .pre = NO_BSLS, .post = NO_SBSLS},
	// US
	{.lang = QGMLW_US, .pre = KC_COMM, .post = KC_SCLN},
	{.lang = QGMLW_US, .pre = KC_DOT,  .post = KC_COLN},
};

// Shift codes array size
const uint16_t SHIFT_CODES_SIZE = sizeof(SHIFT_CODES) / sizeof(SHIFT_CODES[0]);

bool handle_special_characters(uint16_t keycode, keyrecord_t *record) {
	// Fix special shift keys
	if (get_mods() & MOD_MASK_SHIFT) {
        // Current active language
        int lang = get_language();

        // No action was needed
        if (lang == -1)
            return true;

		for (int i = 0; i < SHIFT_CODES_SIZE; i++) {
			// Shifted key is changed
			if (lang == SHIFT_CODES[i].lang && keycode == SHIFT_CODES[i].pre) {
				// Shift disabled
				unregister_code(KC_LSFT);

				// Tap the desired key
				tap_code16(SHIFT_CODES[i].post);
				register_code(KC_LSFT);

				return false;
			}
		}
	}
    return true;
}

// Prepend key records with macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
	    handle_left_space(keycode, record);
	    if (!handle_special_characters(keycode, record)) {
            return false;
        }
	}
	return true;
}
