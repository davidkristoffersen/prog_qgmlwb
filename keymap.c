/*
	Pre default keymap.c
*/

#include QMK_KEYBOARD_H
#include "muse.h"

extern keymap_config_t keymap_config;

enum planck_layers {
	_QWERTY,
	_COLEMAK,
	_DVORAK,
	_LOWER,
	_RAISE,
	_PLOVER,
	_ADJUST
};

enum planck_keycodes {
	QWERTY = SAFE_RANGE,
	COLEMAK,
	DVORAK,
	PLOVER,
	BACKLIT,
	EXT_PLV
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

/*
	Layouts imported from QMK Configurator
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[2] = LAYOUT_ortho_4x12(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[3] = LAYOUT_ortho_4x12(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[4] = LAYOUT_ortho_4x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PGUP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[5] = LAYOUT_ortho_4x12(KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_TRNS, KC_LBRC, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_TRNS, KC_SCLN, KC_QUOT, DF(0), KC_NO, KC_NO, KC_C, KC_V, KC_NO, KC_NO, KC_N, KC_M, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_ortho_4x12(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_G, KC_M, KC_L, KC_W, KC_B, KC_Y, KC_U, KC_V, KC_QUOT, KC_BSPC, KC_ESC, KC_D, KC_S, KC_T, KC_N, KC_R, KC_I, KC_A, KC_E, KC_O, KC_H, KC_ENT, MO(13), KC_Z, KC_X, KC_C, KC_F, KC_J, KC_K, KC_P, KC_MINS, KC_COMM, KC_DOT, KC_BSLS, KC_EXLM, KC_LCTL, KC_LALT, KC_LGUI, MO(9), KC_SPC, KC_SPC, MO(11), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[8] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_G, KC_M, KC_L, KC_W, KC_B, KC_Y, KC_U, KC_V, KC_BSLS, KC_BSPC, KC_ESC, KC_D, KC_S, KC_T, KC_N, KC_R, KC_I, KC_A, KC_E, KC_O, KC_H, KC_ENT, MO(14), KC_Z, KC_X, KC_C, KC_F, KC_J, KC_K, KC_P, KC_SLSH, KC_COMM, KC_DOT, KC_EQL, KC_EXLM, KC_LCTL, KC_LALT, KC_LGUI, MO(10), KC_SPC, KC_SPC, MO(12), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[9] = LAYOUT_ortho_4x12(KC_NO, KC_LBRC, KC_LCBR, KC_LPRN, KC_EQL, KC_ASTR, KC_PLUS, KC_RPRN, KC_RCBR, KC_RBRC, KC_SLSH, KC_BSPC, KC_DEL, KC_MUTE, KC_NO, KC_WREF, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_PERC, KC_AMPR, KC_TILD, KC_NO, KC_SLEP, KC_SLCK, KC_CAPS, KC_NLCK, KC_PSCR, KC_INS, KC_HOME, KC_END, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_TRNS, KC_LALT, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_BRID, KC_BRIU, KC_MPLY),
	[10] = LAYOUT_ortho_4x12(KC_NO, RALT(KC_8), RALT(KC_7), KC_ASTR, KC_RPRN, KC_PIPE, KC_MINS, KC_LPRN, RALT(KC_0), RALT(KC_9), KC_AMPR, KC_BSPC, KC_DEL, KC_MUTE, KC_NO, KC_WREF, KC_NO, KC_NO, KC_NO, KC_NUBS, LSFT(KC_NUBS), KC_PERC, KC_CIRC, RALT(KC_RBRC), KC_NO, KC_SLEP, KC_SLCK, KC_CAPS, KC_NLCK, KC_PSCR, KC_INS, KC_HOME, KC_END, KC_QUOT, KC_SCLN, KC_LBRC, KC_LSFT, KC_TRNS, KC_LALT, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_BRID, KC_BRIU, KC_MPLY),
	[11] = LAYOUT_ortho_4x12(KC_NO, KC_7, KC_5, KC_3, KC_1, KC_9, KC_0, KC_2, KC_4, KC_6, KC_8, KC_BSPC, LCTL(KC_DEL), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_HASH, KC_AT, KC_CIRC, KC_DLR, KC_GRV, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PGUP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_TRNS, KC_RALT, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[12] = LAYOUT_ortho_4x12(KC_NO, KC_7, KC_5, KC_3, KC_1, KC_9, KC_0, KC_2, KC_4, KC_6, KC_8, KC_BSPC, LCTL(KC_DEL), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_HASH, RALT(KC_2), KC_RCBR, RALT(KC_4), KC_PLUS, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PGUP, KC_PGDN, KC_DQUO, KC_COLN, KC_LCBR, KC_RSFT, KC_TRNS, KC_RALT, KC_TRNS, MO(15), KC_TRNS, KC_TRNS, MO(15), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[13] = LAYOUT_ortho_4x12(LSFT(KC_TAB), LSFT(KC_Q), LSFT(KC_G), LSFT(KC_M), LSFT(KC_L), LSFT(KC_W), LSFT(KC_B), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_V), KC_DQUO, KC_BSPC, KC_ESC, LSFT(KC_D), LSFT(KC_S), LSFT(KC_T), LSFT(KC_N), LSFT(KC_R), LSFT(KC_I), LSFT(KC_A), LSFT(KC_E), LSFT(KC_O), LSFT(KC_H), KC_ENT, KC_QUES, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_F), LSFT(KC_J), LSFT(KC_K), LSFT(KC_P), KC_UNDS, KC_SCLN, KC_COLN, KC_PIPE, KC_QUES, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[14] = LAYOUT_ortho_4x12(LSFT(KC_TAB), LSFT(KC_Q), LSFT(KC_G), LSFT(KC_M), LSFT(KC_L), LSFT(KC_W), LSFT(KC_B), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_V), KC_AT, KC_BSPC, KC_ESC, LSFT(KC_D), LSFT(KC_S), LSFT(KC_T), LSFT(KC_N), LSFT(KC_R), LSFT(KC_I), LSFT(KC_A), LSFT(KC_E), LSFT(KC_O), LSFT(KC_H), LSFT(KC_ENT), KC_UNDS, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_F), LSFT(KC_J), LSFT(KC_K), LSFT(KC_P), KC_QUES, LSFT(KC_COMM), LSFT(KC_DOT), KC_GRV, KC_UNDS, KC_LCTL, KC_LALT, KC_LSFT, KC_NO, KC_SPC, KC_SPC, KC_NO, LSFT(KC_LEFT), LSFT(KC_DOWN), LSFT(KC_UP), LSFT(KC_RGHT)),
	[15] = LAYOUT_ortho_4x12(KC_TRNS, RESET, DEBUG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL, KC_TRNS, KC_TRNS, MU_MOD, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(7), DF(8), DF(1), DF(2), KC_TRNS, MUV_DE, MUV_IN, MU_ON, MU_OFF, MI_ON, MI_OFF, TERM_ON, TERM_OFF, DF(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

/*
	Post default keymap.c
*/

#ifdef AUDIO_ENABLE
	float plover_song[][2]		= SONG(PLOVER_SOUND);
	float plover_gb_song[][2]	= SONG(PLOVER_GOODBYE_SOUND);
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
	return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case QWERTY:
			if (record->event.pressed) {
				print("mode just switched to qwerty and this is a huge string\n");
				set_single_persistent_default_layer(_QWERTY);
			}
			return false;
			break;
		case COLEMAK:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_COLEMAK);
			}
			return false;
			break;
		case DVORAK:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_DVORAK);
			}
			return false;
			break;
		case BACKLIT:
			if (record->event.pressed) {
				register_code(KC_RSFT);
				#ifdef BACKLIGHT_ENABLE
					backlight_step();
				#endif
				#ifdef KEYBOARD_planck_rev5
					PORTE &= ~(1<<6);
				#endif
			} else {
				unregister_code(KC_RSFT);
				#ifdef KEYBOARD_planck_rev5
					PORTE |= (1<<6);
				#endif
			}
			return false;
			break;
		case PLOVER:
			if (record->event.pressed) {
				#ifdef AUDIO_ENABLE
					stop_all_notes();
					PLAY_SONG(plover_song);
				#endif
				layer_off(_RAISE);
				layer_off(_LOWER);
				layer_off(_ADJUST);
				layer_on(_PLOVER);
				if (!eeconfig_is_enabled()) {
					eeconfig_init();
				}
				keymap_config.raw = eeconfig_read_keymap();
				keymap_config.nkro = 1;
				eeconfig_update_keymap(keymap_config.raw);
			}
			return false;
			break;
		case EXT_PLV:
			if (record->event.pressed) {
				#ifdef AUDIO_ENABLE
					PLAY_SONG(plover_gb_song);
				#endif
				layer_off(_PLOVER);
			}
			return false;
			break;
	}
	return true;
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
	if (muse_mode) {
		if (IS_LAYER_ON(_RAISE)) {
			if (clockwise) {
				muse_offset++;
			} else {
				muse_offset--;
			}
		} else {
			if (clockwise) {
				muse_tempo+=1;
			} else {
				muse_tempo-=1;
			}
		}
	} else {
		if (clockwise) {
			#ifdef MOUSEKEY_ENABLE
				tap_code(KC_MS_WH_DOWN);
			#else
				tap_code(KC_PGDN);
			#endif
		} else {
			#ifdef MOUSEKEY_ENABLE
				tap_code(KC_MS_WH_UP);
			#else
				tap_code(KC_PGUP);
			#endif
		}
	}
}

void dip_switch_update_user(uint8_t index, bool active) {
	switch (index) {
		case 0:
			if (active) {
				#ifdef AUDIO_ENABLE
					PLAY_SONG(plover_song);
				#endif
				layer_on(_ADJUST);
			} else {
				#ifdef AUDIO_ENABLE
					PLAY_SONG(plover_gb_song);
				#endif
				layer_off(_ADJUST);
			}
			break;
		case 1:
			if (active) {
				muse_mode = true;
			} else {
				muse_mode = false;
				#ifdef AUDIO_ENABLE
					stop_all_notes();
				#endif
			}
	 }
}

void matrix_scan_user(void) {
	#ifdef AUDIO_ENABLE
		if (muse_mode) {
			if (muse_counter == 0) {
				uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
				if (muse_note != last_muse_note) {
					stop_note(compute_freq_for_midi_note(last_muse_note));
					play_note(compute_freq_for_midi_note(muse_note), 0xF);
					last_muse_note = muse_note;
				}
			}
			muse_counter = (muse_counter + 1) % muse_tempo;
		}
	#endif
}

bool music_mask_user(uint16_t keycode) {
	switch (keycode) {
		case RAISE:
		case LOWER:
			return false;
		default:
			return true;
	}
}
