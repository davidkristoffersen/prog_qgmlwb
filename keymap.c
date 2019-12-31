#include QMK_KEYBOARD_H

enum keyboard_layouts {
	QGMLW_US,
	QWERTY,
	QGMLW_NO,
	COLEMAK,
	DVORAK,

	NORMAL_LOWER,
	NORMAL_RAISE,

	NUMPAD,

	QGMLW_NO_LOWER,
	QGMLW_US_LOWER,

	QGMLW_NO_RAISE,
	QGMLW_US_RAISE,

	ADJUST
};


#define lower MO(NORMAL_LOWER)
#define raise MO(NORMAL_RAISE)

#define numpad MO(NUMPAD)

#define QNLower MO(QGMLW_NO_LOWER)
#define QELower MO(QGMLW_US_LOWER)

#define QNRaise MO(QGMLW_NO_RAISE)
#define QERaise MO(QGMLW_US_RAISE)

#define adjust MO(ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qgmlw
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   G  |   M  |   L  |   W  |   B  |   Y  |   U  |   V  |   '" | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   D  |   S  |   T  |   N  |   R  |   I  |   A  |   E  |   O  |  H   | Enter|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shft |   Z  |   X  |   C  |   F  |   J  |   K  |   P  |  ,;  |  .:  |  -_  |   \| |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  | NmPd | Lower| Space|Space |Raise | Left | Down | Up   | Right|
 * `-----------------------------------------------------------------------------------'
 */
/* Norwegian Layout */
[QGMLW_NO] = LAYOUT_ortho_4x12(
	KC_TAB,  KC_Q,    KC_G,    KC_M,    KC_L,    KC_W,    KC_B,    KC_Y,    KC_U,    KC_V,    KC_BSLS, KC_BSPC,
	KC_ESC,  KC_D,    KC_S,    KC_T,    KC_N,    KC_R,    KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_F,    KC_J, 	  KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
	KC_LCTL, KC_LGUI, KC_LALT, numpad,  QNLower, KC_SPC,  KC_SPC,  QNRaise, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),
/* English Layout */
[QGMLW_US] = LAYOUT_ortho_4x12(
	KC_TAB,  KC_Q,    KC_G,    KC_M,    KC_L,    KC_W,    KC_B,    KC_Y,    KC_U,    KC_V,    KC_QUOT, KC_BSPC,
	KC_ESC,  KC_D,    KC_S,    KC_T,    KC_N,    KC_R,    KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_F,    KC_J,    KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_MINS, KC_BSLS,
	KC_LCTL, KC_LGUI, KC_LALT, numpad,  QELower, KC_SPC,  KC_SPC,  QERaise, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  ;:  | Enter|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shft |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,<  |  .>  |  /?  | Shft |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  | NmPd | Lower| Space|Space |Raise | Left | Down | Up   | Right|
 * `-----------------------------------------------------------------------------------'
 */
[QWERTY] = LAYOUT_ortho_4x12(
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
	KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
	KC_LCTL, KC_LALT, KC_LGUI, numpad,  lower,   KC_SPC,  KC_SPC,  raise,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
),

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  | NmPd | Lower| Space|Space |Raise | Left | Down | Up   | Right|
 * `-----------------------------------------------------------------------------------'
 */
[COLEMAK] = LAYOUT_ortho_4x12(
	KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
	KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT ,
	KC_LCTL, KC_LALT, KC_LGUI, numpad,  lower,   KC_SPC,  KC_SPC,  raise,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | GUI  | NmPd | Lower| Space|Space |Raise | Left | Down | Up   | Right|
 * `-----------------------------------------------------------------------------------'
 */
[DVORAK] = LAYOUT_ortho_4x12(
	KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
	KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
	KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_SLSH,
	KC_LCTL, KC_LALT, KC_LGUI, numpad,  lower,   KC_SPC,  KC_SPC,  raise,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
),

/* Lower (Normal)
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[NORMAL_LOWER] = LAYOUT_ortho_4x12(
	KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
	KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
	_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_HOME, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX,
	_______, _______, _______, _______, _______, _______, _______, adjust,  KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Raise (Normal)
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[NORMAL_RAISE] = LAYOUT_ortho_4x12(
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
	KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
	_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PGUP, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX,
	_______, _______, _______, _______, adjust,  _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Numpad
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |   7  |   8  |   9  |      | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   4  |   5  |   6  |      | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   1  |   2  |   3  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |   0  |   0  |   .  |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[NUMPAD] = LAYOUT_ortho_4x12(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, KC_BSPC,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, KC_ENT,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_0,    KC_0,    KC_DOT,  XXXXXXX, XXXXXXX
),

/* Lower - QGMLW
 * ,-----------------------------------------------------------------------------------.
 * |   !  |   %  |   [  |   {  |   (  |   <  |   >  |   )  |   }  |   ]  |   &  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Del | Mute |      |BrwRef|      |      |      |   =  |   +  |   *  |   /  |   ~  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Shift |Sleep |ScrLck| caps |NumLck|PrtScr|  Ins | Home | End  |   æ  |   ø  |  å   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Ctrl  |  Alt |      |      |      |             |Adjust| Next | BriD | BriU | Play |
 * `-----------------------------------------------------------------------------------'
 */
/* Norwegian */
[QGMLW_NO_LOWER] = LAYOUT_ortho_4x12(
	KC_EXLM, KC_PERC, RALT(KC_8), RALT(KC_7), KC_ASTR, KC_NUBS, LSFT(KC_NUBS), KC_LPRN, RALT(KC_0), RALT(KC_9), KC_CIRC, KC_BSPC,
	KC_DEL,  KC_MUTE, XXXXXXX,    KC_WREF,    XXXXXXX, XXXXXXX, XXXXXXX,       KC_RPRN, KC_MINS,    KC_PIPE,    KC_AMPR, RALT(KC_RBRC),
	KC_LSFT, KC_SLEP, KC_SLCK,    KC_CAPS,    KC_NLCK, KC_PSCR, KC_INS,        KC_HOME, KC_END,     KC_QUOT,    KC_SCLN, KC_LBRC,
	KC_LCTL, KC_LALT, XXXXXXX,    _______,    adjust,  _______, _______,       adjust,  KC_MNXT,    KC_BRID,    KC_BRIU, KC_MPLY
),
/* English Same as Nok - without æøå */
[QGMLW_US_LOWER] = LAYOUT_ortho_4x12(
	KC_EXLM, KC_PERC, KC_LBRC, KC_LCBR, KC_LPRN, KC_LT,   KC_GT,   KC_RPRN, KC_RCBR, KC_RBRC, KC_AMPR, KC_BSPC,
	KC_DEL,  KC_MUTE, XXXXXXX, KC_WREF, XXXXXXX, XXXXXXX, XXXXXXX, KC_EQL,  KC_PLUS, KC_ASTR, KC_SLSH, KC_TILD,
	KC_LSFT, KC_SLEP, KC_SLCK, KC_CAPS, KC_NLCK, KC_PSCR, KC_INS,  KC_HOME, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX,
	KC_LCTL, KC_LALT, XXXXXXX, _______, adjust,  _______, _______, adjust,  KC_MNXT, KC_BRID, KC_BRIU, KC_MPLY
),

/* Raise - QGMLW
 * ,-----------------------------------------------------------------------------------.
 * |   ?  |   9  |   7  |   5  |   3  |   1  |   0  |  2   |   4  |   6  |   8  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Del |  F1  |  F2  |  F3  |   F4 |   F5 |  F6  |   #  |   @  |   ^  |   $  |   `  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |RShift|  F7  |  F8  | F9   |  F10 |  F11 |  F12 | PqUp | gqDn |   Æ  |   Ø  |  Å   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |RCtrl |  RAlt|      |      |      |             |Adjust| Next | VolDn| VolUp| Play |
 * `-----------------------------------------------------------------------------------'
 */
/* Norwegian */
[QGMLW_NO_RAISE] = LAYOUT_ortho_4x12(
	KC_UNDS,      KC_9,    KC_7,    KC_5,    KC_3,    KC_1,    KC_0,    KC_2,    KC_4,       KC_6,    KC_8,       KC_BSPC,
	LCTL(KC_DEL), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_HASH, RALT(KC_2), KC_RCBR, RALT(KC_4), KC_PLUS,
	KC_RSFT,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PGUP, KC_PGDN,    KC_DQUO, KC_COLN,    KC_LCBR,
	KC_RCTL,      KC_RALT, XXXXXXX, _______, adjust,  _______, _______, adjust,  KC_MNXT,    KC_VOLD, KC_VOLU,    KC_MPLY
),
/* English */
[QGMLW_US_RAISE] = LAYOUT_ortho_4x12(
	KC_QUES,      KC_9,    KC_7,    KC_5,    KC_3,    KC_1,    KC_0,    KC_2,    KC_4,    KC_6,    KC_8,    KC_BSPC,
	LCTL(KC_DEL), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_HASH, KC_AT,   KC_CIRC, KC_DLR,  KC_GRV,
	KC_RSFT,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PGUP, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX,
	KC_RCTL,      KC_RALT, XXXXXXX, _______, adjust,  _______, _______, adjust,  KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust, every thing on top row (except backspace) is related to rgb stuff
 * ,-----------------------------------------------------------------------------------.
 * |      |Reset |Debug |RGBTGL|RGBMDE| Hue+ | Hue- | Sat+ | Sat- | BriU | BriD | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MseCly| AudOn|AudOff|AgNorm|AgSwap|Dvorak|Colmak|Qwerty|QgmlwE|QgmlwN|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice+|Voice-|MusOn |MusOff|MIDIOn|MIDIOF|TermOn|TermOf|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[ADJUST] = LAYOUT_ortho_4x12(
	_______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI,    RGB_SAD,     RGB_VAI,    RGB_VAD,       KC_DEL,
	_______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, DF(DVORAK), DF(COLEMAK), DF(QWERTY), DF(QGMLW_US), DF(QGMLW_NO),
	_______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON,    TERM_OFF,    XXXXXXX,    _______,       _______,
	_______, _______, _______, _______, _______, _______, _______, _______,    _______,     _______,    _______,       _______
)

};

/*
	Macros
*/

// Keycode conversion struct
typedef struct shift_code {
	int pre;
	const char* post;
	int lang;
} shift_code_t;

// Bool for shift status
int SHIFT_LAYER = 0;
// Array size
int SHIFT_CODES_SIZE = 4;
// Keycodes to be changed in shift layout
shift_code_t SHIFT_CODES[4] = {
	// NO
	{.lang = QGMLW_NO, .pre = KC_BSLS, .post = "@"},
	{.lang = QGMLW_NO, .pre = KC_EQL, .post = "`"},
	// US
	{.lang = QGMLW_US, .pre = KC_COMM, .post = ";"},
	{.lang = QGMLW_US, .pre = KC_DOT, .post = ":"}
};

// Macros for when keycode is registered
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	// Toggle shift status
	if (keycode == KC_LSFT) {
		SHIFT_LAYER = record->event.pressed
			? 1
			: 0;
	}
	// Shifted key is pressed
	else if (record->event.pressed && SHIFT_LAYER) {
		// Current active language
		int lang = layer_state_cmp(default_layer_state, QGMLW_NO)
			? QGMLW_NO
			: layer_state_cmp(default_layer_state, QGMLW_US)
				? QGMLW_US
				: -1;
		if (lang == -1)
			return true;

		for (int i = 0; i < SHIFT_CODES_SIZE; i++) {
			// Shifted key is changed
			if (lang == SHIFT_CODES[i].lang && keycode == SHIFT_CODES[i].pre) {
				// Shift disabled
				unregister_code(KC_LSFT);
				// Raw key string printed
				send_string(SHIFT_CODES[i].post);
				// Discard keycode
				return false;
			}
		}
		// Shift enabled
		register_code(KC_LSFT);
	}

	// Print keycode
	return true;
}
