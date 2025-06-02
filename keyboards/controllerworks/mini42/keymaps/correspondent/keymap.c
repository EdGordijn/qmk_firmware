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

#include "ed_keycodes.h"    // user defined keycodes and tap-hold keys

    

// Correspondent 1: An optimized layout for typing Dutch texts.
// https://mk.bcgsc.ca/carpalx/?de_correspondent

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // Base
  [BASE] = LAYOUT_split_3x6_3(						  
      KC_ESC,   KC_X,     KC_K,     KC_G,     KC_L,     KC_M,               KC_P,     KC_U,     KC_V,     KC_W,     KC_Y,     KC_MUTE,	
      XXX,      HRM_S,    HRM_D,    HRM_T,    HRM_N,    KC_R,               KC_I,     HRM_A,    HRM_E,    HRM_O,    HRM_QUO,  XXX,
      XXX,      KC_Q,     HRM_B,    HRM_J,    KC_H,     KC_F,               KC_Z,     TD_CX,    KC_COMM,  HRM_DOT,  KC_SLSH,  XXX,
	                                XXX,      SYM_SPC,  NAV_TAB,            NUM_ENT,  SYM_BSPC, XXX
  ),
  // Base - excluding home row mods / tap hold functions
  [ALTBASE] = LAYOUT_split_3x6_3(						  
      KC_ESC,   KC_X,     KC_K,     KC_G,     KC_L,     KC_M,               KC_P,     KC_U,     KC_V,     KC_W,     KC_Y,     KC_MUTE,	
      XXX,      KC_S,     KC_D,     KC_T,     KC_N,     KC_R,               KC_I,     KC_A,     KC_E,     KC_O,     KC_QUOT,  XXX,
      XXX,      KC_Q,     KC_B,     KC_J,     KC_H,     KC_F,               KC_Z,     KC_C,     KC_COMM,  KC_DOT,   KC_SLSH,  XXX,
	                                XXX,      KC_SPC,   NAV_TAB,            NUM_ENT,  SYM_BSPC, XXX
  ),
  // Numbers
  [NUM] = LAYOUT_split_3x6_3(
      RM_TOGG,  XXX,      XXX,      XXX,      XXX,      XXX,                XXX,      XXX,      XXX,      XXX,      XXX,      _______,
      _______,  HRM_4,    HRM_3,    HRM_2,    HRM_1,    XXX,                XXX,      HRM_6,    HRM_7,    HRM_8,    HRM_9,    _______,
      UG_NEXT,  XXX,      KC_RALT,  XXX,      KC_5,     XXX,                QK_LLCK,  KC_0,     KC_COMM,  HRM_DOT,  XXX,      _______,
	                                _______,  _______,  _______,            _______,  _______,  _______
  ),
  // Symbols
  [SYM] = LAYOUT_split_3x6_3(
      RM_TOGG,  XXX,      KC_LCBR,  KC_PLUS,  KC_RCBR,  XXX,                XXX,      KC_LT,    KC_EQL,   KC_GT,    XXX,      _______,
      _______,  KC_SCLN,  KC_LPRN,  KC_MINS,  KC_RPRN,  KC_HASH,            KC_PERC,  KC_LBRC,  KC_UNDS,  KC_RBRC,  KC_COLN,  _______,
      UG_NEXT,  KC_PIPE,  KC_DLR,   KC_ASTR,  U_EURO,   KC_AT,              KC_AMPR,  U_GRV,    U_CIRC,   U_TILD,   KC_BSLS,  _______,
                                    _______,  _______,  _______,            _______,  _______,  _______
  ),
    // Dead keys Symbols
    // I have repositioned KC_GRV to make room for ç 
  [DEAD] = LAYOUT_split_3x6_3(
      RM_TOGG,  XXX,      XXX,      XXX,      XXX,      XXX,                XXX,      XXX,      XXX,      XXX,      XXX,      _______,
      _______,  XXX,      XXX,      XXX,      XXX,      XXX,                XXX,      KC_GRV,   KC_DQT,   KC_QUOT,  XXX,      _______,
      UG_NEXT,  XXX,      XXX,      XXX,      XXX,      XXX,                XXX,      U_CEDI,   KC_CIRC,  KC_TILD,  XXX,      _______,
                                    _______,  _______,  _______,            _______,  _______,  _______
  ),
  // Nav
  [NAV] = LAYOUT_split_3x6_3(
      RM_TOGG,  XXX,      XXX,      XXX,      XXX,      QK_RBT,             KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   XXX,      _______,
      _______,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXX,                KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXX,      _______,
      UG_NEXT,  U_UNDO,   U_CUT,    U_COPY,   U_PAST,   XXX,                QK_LLCK,  U_CSTAB,  XXX,      U_CTAB,   XXX,      _______,
	                                _______,  _______,  _______,            _______,  _______,  _______
  ),
  // Fun
    [FUN] = LAYOUT_split_3x6_3(
      RM_TOGG,  KC_F12,   KC_F7,    KC_F8,    KC_F9,    KC_PSCR,            XXX,      XXX,      XXX,      XXX,      XXX,      _______,
      _______,  KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_SCRL,            XXX,      KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  _______,
      UG_NEXT,  KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_PAUS,            XXX,      XXX,      XXX,      KC_ALGR,  XXX,      _______,
                                    KC_APP,   _______,  _______,            _______,  _______,  _______
  )
};


// Key overrides for shifted keys
const key_override_t shift_comma = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_QUES);
const key_override_t shift_dot = ko_make_basic(MOD_MASK_SHIFT, RALT_T(KC_DOT), KC_EXLM);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&shift_comma,
    &shift_dot
};


// Combo definition
const uint16_t PROGMEM c_LCW[] = {HRM_T, HRM_N, COMBO_END};
const uint16_t PROGMEM c_RCW[] = {HRM_A, HRM_E, COMBO_END};
const uint16_t PROGMEM c_NW[]  = {NAV_TAB, NUM_ENT, COMBO_END};

combo_t key_combos[] = {
    COMBO(c_LCW, CW_TOGG),  // Left togle CAPSWORD
    COMBO(c_RCW, CW_TOGG),  // Right toggle CAPSWORD
    //COMBO(c_NW, NUMWORD),   // Togle NUMWORD
};


// macro's

bool process_record_user(uint16_t keycode, keyrecord_t *record) {


//    if (!process_record_num_word(keycode, record)) {
//        return false;
//    }

    switch (keycode) {
		// Send keycode on tap and add a space to terminate dead key action
		case U_CIRC: // ^
			if (record->event.pressed) {
                tap_code16(KC_CIRC);
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;
		case U_DQUO: // "
			if (record->event.pressed) {
                tap_code16(KC_DQUO);
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;
		case U_GRV:  // `
			if (record->event.pressed) {
                tap_code16(KC_GRV);
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case U_QUOT: // '
			if (record->event.pressed) {
                tap_code16(KC_QUOT);
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;
		case U_TILD: // ~		
			if (record->event.pressed) {
                tap_code16(KC_TILD);
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;	
		case HRM_QUO: // '
			if (record->tap.count && record->event.pressed) {
                tap_code16(QK_MOD_TAP_GET_TAP_KEYCODE(keycode));
				tap_code16(KC_SPC);
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}


// Capsword
// KC_MINS removed, compared to QMK default, so you can type words like ASN-bank

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case TD_CX:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

// indicator led
//void caps_word_set_user(bool active) {
//    if (active) {
//        RGB_MATRIX_INDICATOR_SET_COLOR(5, 255, 0, 0); // led #5
//        RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 0, 0); // led #5
//    } else {
//        RGB_MATRIX_INDICATOR_SET_COLOR(5, 0, 0, 0);
//        RGB_MATRIX_INDICATOR_SET_COLOR(15, 0, 0, 0);
//    }
//}

// Tapping terms
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HRM_N:                      
        case HRM_T:
        case HRM_D:
        case HRM_A:
        case HRM_E:
        case HRM_O:
            return TAPPING_TERM - 20;  // fast
        case HRM_S:
        case HRM_QUO:
            return TAPPING_TERM + 20;  // slow
        default:
            return TAPPING_TERM;
    }
}


