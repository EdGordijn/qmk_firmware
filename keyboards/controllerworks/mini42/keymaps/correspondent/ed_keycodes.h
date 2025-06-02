/*
 * Copyright 2022 Kevin Gee <info@controller.works>
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


// Keyboard layers
enum layers {
  BASE,
  ALTBASE,
  NUM,
  SYM,
  DEAD,
  NAV,
  FUN
};


// User defined keycodes
enum custom_keycodes {
  U_CIRC = SAFE_RANGE, // Add a space to get the symbol on an interantional keyboard
  U_DQUO,
  U_GRV,
  U_QUOT,
  U_TILD
};


// Tap Dance definitions
enum {
    _TD_CX
};

tap_dance_action_t tap_dance_actions[] = {
    [_TD_CX] = ACTION_TAP_DANCE_DOUBLE(KC_C, KC_X),
};
#define TD_CX TD(_TD_CX)


// Short aliases for home row mods and other tap-hold keys.
#define HRM_S LGUI_T(KC_S)
#define HRM_D LALT_T(KC_D)
#define HRM_T LCTL_T(KC_T)
#define HRM_N LSFT_T(KC_N)
#define HRM_B RALT_T(KC_B)
#define HRM_J LT(DEAD, KC_J)

#define HRM_A RSFT_T(KC_A)
#define HRM_E RCTL_T(KC_E)
#define HRM_O LALT_T(KC_O)
#define HRM_QUO RGUI_T(KC_QUOT)
#define HRM_DOT RALT_T(KC_DOT)

#define SYM_SPC LT(SYM, KC_SPC)
#define NAV_TAB LT(NAV, KC_TAB)
#define NUM_ENT LT(NUM, KC_ENT)
#define SYM_BSPC LT(SYM, KC_BSPC)


// Num layer
#define HRM_4 LGUI_T(KC_4)
#define HRM_3 LALT_T(KC_3)
#define HRM_2 LCTL_T(KC_2)
#define HRM_1 LSFT_T(KC_1)

#define HRM_6 RSFT_T(KC_6)
#define HRM_7 RCTL_T(KC_7)
#define HRM_8 LALT_T(KC_8)
#define HRM_9 RGUI_T(KC_9)

// Define aliases for modifier-key-combinations
#define U_UNDO C(KC_Z)           // Undo
#define U_CUT C(KC_X)            // Cut
#define U_COPY C(KC_C)           // Copy
#define U_PAST C(KC_V)           // Paste

#define U_CEDI ALGR(KC_COMM)     // ç (Cedilla
#define U_CTAB C(KC_TAB)         // Next tab (in Chrome)
#define U_CSTAB S(U_CTAB)        // Previous tab (in Chrome)
#define U_EURO ALGR(KC_5)        // Euro symbol
#define U_MUTE LAG(KC_K)         // Mute the micophone

#define XXX KC_NO                // key available but not used
