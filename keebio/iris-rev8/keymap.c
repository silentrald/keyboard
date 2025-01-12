#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define _BASE 0
// Symbols layer
#define _SYM 1
// Number layer
#define _NUM 2
// Miscellaneous Management
#define _MSC 3

// LAYOUT(
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
//                                       _______, _______, _______, /**/ _______, _______, _______
// )

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_LGUI, KC_PGDN, KC_PGUP, KC_HOME, KC_END , QK_GESC, /*                  */ KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_INS , KC_DEL ,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , /*                  */ KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , /*                  */ KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
   MO(_NUM), KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LCTL, /**/ KC_CAPS, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                        KC_LALT,MO(_SYM), KC_ENT , /**/ KC_SPC , KC_RCTL, MO(_MSC)
  ),
  [_SYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, KC_GRV , KC_AT  , KC_LBRC, KC_RBRC, KC_ASTR, /*                  */ KC_BSLS, KC_AMPR, KC_LCBR, KC_RCBR, KC_PERC, _______,
    _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH, /*                  */ KC_PIPE, KC_UNDS, KC_LPRN, KC_RPRN, KC_COLN, KC_DQT  ,
    _______, _______, _______, _______, KC_CIRC, KC_DOT , _______, /**/ _______, KC_TILD, KC_DLR , KC_LT  , KC_GT  , KC_QUES, _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  ),
  [_NUM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, /*                  */ _______, KC_4   , KC_5   , KC_6   , _______, _______,
    _______, _______, _______, _______, _______, _______, /*                  */ KC_0   , KC_1   , KC_2   , KC_3   , _______, _______,
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, KC_7   , KC_8   , KC_9   , _______, _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  ),
  [_MSC] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    RGB_TOG, RGB_MOD, XXXXXXX, KC_VOLU, QK_BOOT, EE_CLR , /*                  */ KC_RALT, KC_F4  , KC_F5  , KC_F6  , KC_F12 , _______,
    RGB_HUI, RGB_SAI, RGB_VAI, KC_VOLD, KC_BRIU, XXXXXXX, /*                  */ KC_PSCR, KC_F1  , KC_F2  , KC_F3  , KC_F11 , XXXXXXX,
    RGB_HUD, RGB_SAD, RGB_VAD, KC_MUTE, KC_BRID, XXXXXXX, XXXXXXX, /**/ _______, XXXXXXX, KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  )
};

#undef _BASE
#undef _SYM
#undef _MSC

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



