#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum Layers {
  BASE = 0,
  SYM,
  NAV,
  MSC,
};

// LAYOUT(
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
//                                       _______, _______, _______, /**/ _______, _______, _______
// )

// TODO: Add a gaming toggle

// Prefer to do one handed keyboarding and freely move my right hand
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // [BASE] = LAYOUT(
  //   KC_LGUI, KC_4   , KC_3   , KC_2   , KC_1   , KC_5   , /*                  */ KC_6   , KC_0   , KC_9   , KC_8   , KC_7   , KC_BSPC,
  //   KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , /*                  */ KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
  //   KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , /*                  */ KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_RSFT,
  //   KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , QK_GESC, /**/ KC_DEL , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RCTL,
  //                                       MO(MSC), MO(SYM), KC_ENT , /**/ KC_SPC , MO(NAV), KC_RALT
  // ),
  // [SYM] = LAYOUT(
  //   KC_F12 , KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_F5  , /*                  */ _______, _______, _______, _______, _______, _______,
  //   _______, KC_4   , KC_3   , KC_2   , KC_1   , KC_5   , /*                  */ KC_EXLM, KC_DLR , KC_LPRN, KC_RPRN, KC_BSLS, _______,
  //   _______, KC_GRV , KC_PLUS, KC_MINS, KC_UNDS, KC_QUOT, /*                  */ KC_AMPR, KC_DQT , KC_LCBR, KC_RCBR, KC_CIRC, _______,
  //   _______, KC_AT  , KC_PERC, KC_ASTR, KC_EQL , KC_TILD, _______, /**/ _______, KC_PIPE, KC_HASH, KC_LBRC, KC_RBRC, KC_QUES, _______,
  //                                       _______, _______, _______, /**/ _______, _______, _______
  // ),
  // [NAV] = LAYOUT(
  //   _______, _______, _______, _______, _______, _______, /*                  */ KC_F6  , KC_F10 , KC_F9  , KC_F8  , KC_F7  , KC_F11 ,
  //   _______, _______, _______, _______, _______, _______, /*                  */ KC_6   , KC_0   , KC_9   , KC_8   , KC_7   , _______,
  //   _______, _______, KC_F4  , KC_SPC , KC_TAB , KC_LGUI, /*                  */ KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_INS , _______,
  //   _______, _______, _______, _______, _______, _______, _______, /**/ _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
  //                                       KC_LCTL, KC_LALT, _______, /**/ _______, _______, _______
  // ),
  // [MSC] = LAYOUT(
  //   _______, _______, _______, _______, QK_BOOT, EE_CLR , /*                  */ _______, _______, _______, _______, _______, _______,
  //   RGB_TOG, RGB_MOD, _______, KC_MUTE, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
  //   RGB_HUI, RGB_VAI, RGB_SAI, KC_VOLU, KC_BRIU, _______, /*                  */ _______, _______, _______, _______, _______, _______,
  //   RGB_HUD, RGB_VAD, RGB_SAD, KC_VOLD, KC_BRID, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
  //                                       _______, _______, _______, /**/ _______, _______, _______
  // )
  [BASE] = LAYOUT(
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , /*                  */ KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_DEL ,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , /*                  */ KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , /*                  */ KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_RSFT,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , QK_GESC, /**/ QK_GESC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LALT,
                                        KC_LGUI, MO(SYM), KC_ENT , /**/ KC_SPC , MO(NAV), MO(MSC)
  ),
  [SYM] = LAYOUT(
    KC_F12 , _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , /*                  */ KC_DLR , KC_EXLM, KC_LPRN, KC_RPRN, _______, _______,
    XXXXXXX, KC_QUOT, KC_PLUS, KC_MINS, KC_UNDS, KC_EQL , /*                  */ KC_AMPR, KC_DQT , KC_LCBR, KC_RCBR, KC_COLN, _______,
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, KC_HASH, KC_PIPE, KC_LT  , KC_GT  , KC_QUES, _______,
                                        _______, _______, _______, /**/ _______, _______, KC_RCTL
  ),
  [NAV] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, KC_F11 ,
    _______, _______, KC_AT  , KC_PERC, KC_BSLS, KC_CIRC, /*                  */ KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
    _______, KC_GRV , KC_LBRC, KC_RBRC, KC_ASTR, KC_TILD, /*                  */ KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
                                        _______, _______, _______, /**/ _______, _______, XXXXXXX
  ),
  [MSC] = LAYOUT(
    _______, _______, _______, _______, QK_BOOT, EE_CLR , /*                  */ _______, _______, _______, _______, _______, _______,
    RGB_TOG, RGB_MOD, _______, _______, _______, _______, /*                  */ KC_PSCR, KC_VOLD, KC_VOLU, KC_MUTE, KC_INS , _______,
    RGB_HUI, RGB_VAI, RGB_SAI, KC_BRIU, _______, _______, /*                  */ KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
    RGB_HUD, RGB_VAD, RGB_SAD, KC_BRID, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
                                        _______, XXXXXXX, _______, /**/ _______, XXXXXXX, _______
  )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



