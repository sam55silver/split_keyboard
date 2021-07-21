#include QMK_KEYBOARD_H
#include "6x6.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_6x6(
    // left hand
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
             KC_GRV,  KC_EQL,  KC_LEFT, KC_RGHT,
                                                         KC_LCTL, KC_LALT, KC_HOME,
                                                         KC_BSPC, KC_DEL, KC_END,

                                // right hand
                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
                                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(1),
                                         KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC,
      KC_PGUP,  KC_RSFT, KC_LGUI,
      KC_PGDN, KC_ENT,  KC_SPACE
      ),
  [_FN] = LAYOUT_6x6(
    // left hand
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
    KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
             KC_NO,   RESET,   KC_NO,   KC_NO,
                                                         KC_NO, KC_NO, KC_SLEP,
                                                         KC_NO, KC_NO, KC_WAKE,

                                // right hand
                                          KC_F7,    KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,
                                          KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
                                          KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
                                          KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   TO(0),
                                                    KC_NO,   KC_NO,    KC_NO,   KC_NO,
            KC_NO, KC_NO, KC_MUTE,
            KC_NO, KC_VOLD, KC_VOLU
  )

};
