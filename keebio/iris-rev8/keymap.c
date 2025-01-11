#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define _BASE 0
// Symbols layer
#define _SYM 1
// Number layer
#define _NUM 2
// Function key layer
#define _FUN 3
// Miscellaneous Management
#define _MSC 4



// LAYOUT(
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
//                                       _______, _______, _______, /**/ _______, _______, _______
// )

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_VOLD, KC_VOLU, KC_PSCR, KC_INS , KC_HOME, KC_END  , /*                  */ KC_PGDN , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGUP,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T    , /*                  */ KC_Y    , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G    , /*                  */ KC_H    , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B    , KC_LALT, /**/ KC_DEL , KC_N    , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                        KC_LGUI, MO(_NUM), KC_ENT , /**/ KC_SPC , MO(_SYM), QK_GESC
  ),
  [_SYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, KC_GRV , KC_LT  , KC_GT  , KC_QUOT, KC_DQT , /*                  */ KC_AMPR, KC_COLN, KC_LBRC, KC_RBRC, KC_PERC, _______,
    _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH, /*                  */ KC_PIPE, KC_UNDS, KC_LPRN, KC_RPRN, KC_QUES, MO(_MSC),
    _______, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_DOT , _______, /**/ _______, KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_AT  , _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  ),
  [_NUM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, /*                  */ _______, KC_4   , KC_5   , KC_6   , _______, _______,
   MO(_FUN), _______, _______, _______, _______, _______, /*                  */ KC_0   , KC_1   , KC_2   , KC_3   , _______, _______,
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, KC_7   , KC_8   , KC_9   , _______, _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  ),
  [_FUN] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, /*                  */ _______, KC_F4  , KC_F5  , KC_F6  , KC_F10 , _______,
    _______, _______, _______, _______, _______, _______, /*                  */ _______, KC_F1  , KC_F2  , KC_F3  , KC_F11 , _______,
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, KC_F7  , KC_F8  , KC_F9  , KC_F12 , _______,
                                        _______, _______, _______, /**/ _______, _______, KC_RALT
  ),
  [_MSC] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, QK_BOOT, EE_CLR , /*                  */ _______, _______, _______, _______, _______, _______,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  )
};

#undef _BASE
#undef _SYM
#undef _NUM
#undef _FUN
#undef _MSC

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



