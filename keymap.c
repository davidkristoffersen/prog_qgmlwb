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
	_DUMMY,
	_PROG_DF_EN,
	_PROG_DF_NO,
	_PROG_LOWER_EN,
	_PROG_LOWER_NO,
	_PROG_RAISE_EN,
	_PROG_RAISE_NO,
	_PROG_SHIFT_EN,
	_PROG_SHIFT_NO,
	_ADJUST
};

enum planck_keycodes {
	QWERTY = SAFE_RANGE,
	COLEMAK,
	PROG_DF_EN,
	PROG_DF_NO,
};

// #define LOWER MO(_LOWER)
// #define RAISE MO(_RAISE)
// #define PROG_RAISE_EN MO(_PROG_RAISE_EN)

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

//const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//
///* Qwerty
// * ,-----------------------------------------------------------------------------------.
// * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
// * `-----------------------------------------------------------------------------------'
// */
//[_QWERTY] = LAYOUT_planck_grid(
//    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
//    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
//    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//),
//
///* Colemak
// * ,-----------------------------------------------------------------------------------.
// * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
// * `-----------------------------------------------------------------------------------'
// */
//[_COLEMAK] = LAYOUT_planck_grid(
//    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
//    KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
//    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
//    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  PROG_RAISE_EN,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//),
//
///* Lower
// * ,-----------------------------------------------------------------------------------.
// * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
// * `-----------------------------------------------------------------------------------'
// */
//[_LOWER] = LAYOUT_planck_grid(
//    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
//    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
//    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
//    _______, _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
//),
//
///* Raise
// * ,-----------------------------------------------------------------------------------.
// * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
// * `-----------------------------------------------------------------------------------'
// */
//[_RAISE] = LAYOUT_planck_grid(
//    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
//    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
//    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
//),
//
///* Adjust (Lower + Raise)
// *                      v------------------------RGB CONTROL--------------------v
// * ,-----------------------------------------------------------------------------------
// * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
// * |------+------+------+------+------+------+------+------+------+------+------+------|
// * |      |      |      |      |      |             |      |      |      |      |      |
// * `-----------------------------------------------------------------------------------'
// */
//[_ADJUST] = LAYOUT_planck_grid(
//    _______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
//    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK,  _______, _______,  _______,
//    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
//    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
//),
//
//[_PROG_RAISE_EN] = LAYOUT_planck_grid(
//    KC_GRV,  KC_9,    KC_2,    KC_7,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
//    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
//    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
//),
//
//};

/*
	Post default keymap.c
*/

/*
layer_state_t layer_state_set_user(layer_state_t state) {
	if (layer_state_cmp(default_layer_state, _PROG_DF_EN))
		return update_tri_layer_state(state, _PROG_LOWER_EN, _PROG_RAISE_EN, _ADJUST);
	else if (layer_state_cmp(default_layer_state, _PROG_DF_NO))
		return update_tri_layer_state(state, _PROG_LOWER_NO, _PROG_RAISE_NO, _ADJUST);
	else
		return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/*
	switch (keycode) {
		case QWERTY:
			if (record->event.pressed) {
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
	}
	*/
	if (record->event.pressed) {
		if (layer_state_cmp(default_layer_state, _PROG_DF_NO)) {
			if (keycode == RALT(KC_RBRC)) {
				SEND_STRING(SS_RALT("]"));
			}
			else if (keycode == KC_RCBR) {
				SEND_STRING("}");
			}
			else if (keycode == KC_PLUS) {
				SEND_STRING("+");
			}
		}
	}
	return true;
}
