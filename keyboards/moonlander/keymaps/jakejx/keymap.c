/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    BASE,  // default layer
    NAV,    // navigation
    MOUSE, // mouse
    SYMB,  // symbols
    MDIA,  // media keys
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_moonlander(
        _______,  KC_1,         KC_2,         KC_3,         KC_4,            KC_5,  KC_LEFT,                   KC_RGHT,  KC_6, KC_7,         KC_8,         KC_9,         KC_0,            _______,
        _______,  KC_Q,         KC_W,         KC_E,         KC_R,            KC_T,  TG(SYMB),                  TG(SYMB), KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            _______,
        _______,  LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),    KC_G,  _______,                   _______,  KC_H, RSFT_T(KC_J), RGUI_T(KC_K), LALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,
        _______,  KC_Z,         KC_X,         KC_C,         KC_V,            KC_B,                                       KC_N, KC_M,         KC_COMM,      KC_DOT,       RCTL_T(KC_SLSH), _______,
        _______,  _______,      _______,      _______,      LT(NAV, KC_TAB), _______,                          _______,  LT(SYMB,KC_BSPACE), _______, _______, _______, _______,
                                                      LT(MOUSE, KC_SPC),  LT(MDIA, KC_ESC), _______,        _______,  KC_DEL, KC_ENT
    ),
    [NAV] = LAYOUT_moonlander(
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, _______,  _______,                                KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, _______, _______,  _______, _______, _______,
                                            _______,  _______,  _______,                                _______, _______, _______
    ),
    [MOUSE] = LAYOUT_moonlander(
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, KC_MS_L, KC_MS_D, KC_MS_U,  KC_MS_R, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, KC_BTN2, _______,  _______, _______, _______,
                                            _______,  _______,  _______,                                _______, KC_BTN3, KC_BTN1
    ),
    [MDIA] = LAYOUT_moonlander(
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,  _______,                                _______, KC_MPRV, KC_VOLD, KC_VOLU,  KC_MNXT, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, _______, _______,  _______, _______, _______,
        _______,  _______, _______, _______, _______, _______,                                                   _______, KC_MUTE, _______,  _______, _______, _______,
                                            _______,  _______,  _______,                                _______, _______, KC_MPLY
    ),
    [SYMB] = LAYOUT_moonlander(
        _______,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,                                _______, _______, _______, _______,  _______, _______,  _______,
        _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, _______,                                  _______, _______, _______, _______,  _______, _______, _______,
        _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  _______,                                  _______, _______, KC_LSFT, KC_LGUI, KC_LALT,  KC_LCTL,  _______,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                                                    _______, _______, _______,  _______, _______, _______,
        _______, _______, _______, _______, KC_EQL,  _______,                                           _______, _______, _______, _______,  _______, _______,
                                            KC_MINS, _______, _______,                                  _______,_______, _______
    ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    case RALT_T(KC_L):
        /*
        This piece of code nullifies the effect of Right Shift when tapping
        the RCTL_T(KC_N) key.
        This helps rolling over RSFT_T(KC_E) and RCTL_T(KC_N)
        to obtain the intended "en" instead of "N".
        Consequently, capital N can only be obtained by tapping RCTL_T(KC_N)
        and holding LSFT_T(KC_S) (which is the left Shift mod tap).
        */

        /*
        Detect the tap.
        We're only interested in overriding the tap behaviour
        in a certain cicumstance. The hold behaviour can stay the same.
        */
        if (record->tap.count > 0) {
            // Detect right Shift
            if (get_mods() & MOD_BIT(KC_RALT)) {
                // temporarily disable right Shift
                // so that we can send KC_E and KC_N
                // without Shift on.
                unregister_mods(MOD_BIT(KC_RALT));
                tap_code(KC_K);
                tap_code(KC_L);
                // restore the mod state
                add_mods(MOD_BIT(KC_RALT));
                // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
                return false;
            }
        }
         /*else process RCTL_T(KC_N) as usual.*/
        return true;

    case LALT_T(KC_S):
        /*
        This piece of code nullifies the effect of Left Shift when
        tapping the LCTL_T(KC_T) key.
        This helps rolling over LSFT_T(KC_S) and LCTL_T(KC_T)
        to obtain the intended "st" instead of "T".
        Consequently, capital T can only be obtained by tapping LCTL_T(KC_T)
        and holding RSFT_T(KC_E) (which is the right Shift mod tap).
        */

        if (record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_LALT)) {
                unregister_mods(MOD_BIT(KC_LALT));
                tap_code(KC_S);
                tap_code(KC_D);
                add_mods(MOD_BIT(KC_LALT));
                return false;
            }
        }
         /*else process LCTL_T(KC_T) as usual.*/
        return true;
    }
    return true;
};
