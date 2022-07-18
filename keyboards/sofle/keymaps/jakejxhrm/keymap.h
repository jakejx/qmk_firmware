#pragma once

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _SYM,
    _NAV,
    _ADJUST,
};

enum custom_keycodes {
  UPDIR = SAFE_RANGE,
  O_BRACE,
  C_BRACE,
  ARROW,
  FARROW,
};

#define SPOT A(KC_SPC)

// layer keys
#define NAV MO(_NAV)
#define SYM MO(_SYM)
#define NAV_SPC LT(_NAV, KC_SPC)
#define SYM_BSP LT(_SYM, KC_BSPC)
#define SYM_SPOT LT(_SYM, SPOT)

// left home row mods
#define HM_A LCTL_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LGUI_T(KC_D)
#define HM_F LSFT_T(KC_F)

// right home row mods
#define HM_J    RSFT_T(KC_J)
#define HM_K    RGUI_T(KC_K)
#define HM_L    LALT_T(KC_L)
#define HM_SCLN RCTL_T(KC_SCLN)

// per key mod tap duration
