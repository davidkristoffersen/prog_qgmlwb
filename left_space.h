#include QMK_KEYBOARD_H
#include "config.h"


#if ENABLE_SCHEME==true

#define KEY KC_NO
#define KEYW LT(7, KEY)

#define _handle_logic(keycode, record) \
	if(IS_LAYER_ON(NUMPAD))\
        clear_oneshot_mods();\
\
    if(keycode == KEYW) { \
        if(record->event.pressed) {\
            if(get_oneshot_mods() & MOD_MASK_SHIFT) {\
                clear_oneshot_mods();\
                set_oneshot_mods(MOD_LCTL);\
            }\
            else \
                set_oneshot_mods(MOD_LSFT);\
        }\
    } 
#endif


#if ENABLE_SCHEME==true
    #define SPACE_TRI LT(7, KEY)
    #define handle_left_space(k, r) _handle_logic(k, r)
#else
    #define SPACE_TRI KC_SPC
    #define handle_left_space(k, r) 
#endif
