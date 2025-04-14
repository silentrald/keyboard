#define TAPPING_TERM 55
#define TAPPING_TERM_PER_KEY
#define COMBO_TERM 3
#define COMBO_HOLD_TERM 175

// #define CHORDAL_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
// #define PERMISSIVE_HOLD
#define COMBO_MUST_HOLD_MODS
#define COMBO_STRICT_TIMER

#include <stdint.h>
#include <sys/types.h>
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

// TODO: Number mapping still not perfect

#define MT_LSFT MT(MOD_LSFT, KC_F)
#define MT_LCTL MT(MOD_LCTL, KC_D)
#define MT_LALT MT(MOD_LALT, KC_S)
// #define MT_LGUI MT(MOD_LGUI, KC_A)
#define MT_RSFT MT(MOD_RSFT, KC_J)
#define MT_RCTL MT(MOD_RCTL, KC_K)
#define MT_RALT MT(MOD_RALT, KC_L)
// #define MT_RGUI MT(MOD_RGUI, KC_SCLN)

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MT_LSFT:
    case MT_RSFT:
        return 25;

    default:
        return TAPPING_TERM;
  }
}

// Prefer to do one handed keyboarding and freely move my right hand
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , /*                  */ KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    KC_CAPS, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , /*                  */ KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
    KC_TAB , KC_A   , MT_LALT, MT_LCTL, MT_LSFT, KC_G   , /*                  */ KC_H   , MT_RSFT, MT_RCTL, MT_RALT, KC_SCLN, KC_BSPC,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , QK_GESC, /**/ KC_CAPS, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LALT,
                                        KC_LGUI, MO(SYM), KC_ENT , /**/ KC_SPC , MO(NAV), MO(MSC)
  ),
  [SYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, KC_GRV , KC_LBRC, KC_RBRC, KC_AT  , KC_TILD, /*                  */ KC_DLR , KC_EXLM, KC_LPRN, KC_RPRN, KC_CIRC, _______,
    KC_PERC, KC_QUOT, KC_PLUS, KC_MINS, KC_UNDS, KC_EQL , /*                  */ KC_AMPR, KC_DQT , KC_LCBR, KC_RCBR, KC_COLN, KC_BSLS,
    _______, _______, _______, _______, _______, KC_ASTR, _______, /**/ _______, KC_HASH, KC_PIPE, KC_LT  , KC_GT  , KC_QUES, _______,
                                        _______, _______, _______, /**/ _______, _______, _______
  ),
  [NAV] = LAYOUT(
    _______, _______, _______, _______, _______, _______, /*                  */ _______, _______, _______, _______, _______, _______,
    _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , /*                  */ KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
    _______, _______, _______, _______, _______, KC_DOT , /*                  */ KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_LSFT, _______,
    _______, KC_ASTR, KC_PLUS, KC_MINS, KC_SLSH, _______, _______, /**/ _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
                                        _______, _______, _______, /**/ _______, _______, XXXXXXX
  ),
  [MSC] = LAYOUT(
    _______, _______, _______, _______, QK_BOOT, EE_CLR , /*                  */ _______, _______, _______, _______, _______, _______,
    RGB_TOG, RGB_MOD, _______, _______, _______, _______, /*                  */ _______, _______, KC_VOLU, KC_BRIU, _______, _______,
    RGB_HUI, RGB_VAI, RGB_SAI, _______, _______, _______, /*                  */ _______, KC_PSCR, KC_VOLD, KC_BRID, _______, _______,
    RGB_HUD, RGB_VAD, RGB_SAD, _______, _______, _______, _______, /**/ _______, _______, KC_INS , KC_MUTE, _______, _______, _______,
                                        _______, XXXXXXX, _______, /**/ _______, XXXXXXX, _______
  )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



