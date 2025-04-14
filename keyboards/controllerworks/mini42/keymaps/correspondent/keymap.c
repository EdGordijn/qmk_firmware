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

enum layers {
  BASE,
  NUM,
  SYM,
  NAV,
  FUN,
  ALTNUM,
  ALTSYM
};


enum custom_keycodes {
  U_CIRC = SAFE_RANGE, // Add a space to get the symbol on an interantional keyboard
  U_DQUO,
  U_GRV,
  U_QUOT,
  U_TILD
};

// Short aliases for home row mods and other tap-hold keys.
#define HRM_S LGUI_T(KC_S)
#define HRM_D LALT_T(KC_D)
#define HRM_T LCTL_T(KC_T)
#define HRM_N LSFT_T(KC_N)
#define HRM_B RALT_T(KC_B)
#define HRM_J LT(ALTNUM, KC_J)
#define HRM_H LT(ALTSYM, KC_H)

#define HRM_A RSFT_T(KC_A)
#define HRM_E RCTL_T(KC_E)
#define HRM_O LALT_T(KC_O)
#define HRM_QUO RGUI_T(KC_QUOT)
#define HRM_DOT RALT_T(KC_DOT)
#define HRM_C LT(ALTNUM, KC_C)
#define HRM_COMM LT(ALTSYM, KC_COMM)


#define XXX KC_NO           // key available but not used



// Correspondent 1: An optimized layout for typing Dutch texts.
// https://mk.bcgsc.ca/carpalx/?de_correspondent

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // Base
  [0] = LAYOUT_split_3x6_3(
      RM_TOGG,         KC_X,            KC_K,            KC_G,            KC_L,            KC_M,
	  KC_P,            KC_U,            KC_V,            KC_W,            KC_Y,            XXX,
	  
      KC_EXLM,         HRM_S,           HRM_D,           HRM_T,           HRM_N,           KC_R,
	  KC_I,            HRM_A,           HRM_E,           HRM_O,           HRM_QUO,         KC_QUES,
	  
      UG_NEXT,         KC_Q,            HRM_B,           HRM_J,           HRM_H,           KC_F,
	  KC_Z,            HRM_C,           HRM_COMM,        HRM_DOT,         KC_SLSH,         XXX,
	  
      KC_ESC,          LT(NAV,KC_SPC),  KC_TAB,          LT(SYM,KC_ENT),  LT(NUM,KC_BSPC), LT(FUN,KC_BSLS)
  ),
  // Numpad
  [1] = LAYOUT_split_3x6_3(
      XXX,             KC_LBRC,         KC_7,            KC_8,            KC_9,            KC_RBRC,
	  XXX,             XXX,             XXX,             XXX,             XXX,             XXX,
	  
      XXX,             KC_SCLN,         KC_4,            KC_5,            KC_6,            KC_EQL,
	  XXX,             KC_LSFT,         KC_LCTL,         KC_LALT,         KC_LGUI,         XXX,
	  
      XXX,             KC_GRV,          KC_1,            KC_2,            KC_3,            KC_BSLS,
	  XXX,             XXX,             KC_COMM,         RALT_T(KC_DOT),  XXX,             XXX,
	  
      KC_DOT,          KC_0,            KC_MINS,         XXX,             XXX,             XXX
  ),
  // Sym
  [2] = LAYOUT_split_3x6_3(
      KC_GRV,          KC_LCBR,         KC_AMPR,         KC_ASTR,         KC_LPRN,         KC_RCBR,
	  XXX,             XXX,             XXX,             XXX,             XXX,             XXX,
	  
      XXX,             KC_COLN,         KC_DLR,          KC_PERC,         U_CIRC,          KC_PLUS,
	  XXX,             KC_LSFT,         KC_LCTL,         KC_LALT,         KC_LGUI,         XXX,
	  
      XXX,             U_TILD,          KC_EXLM,         KC_AT,           KC_HASH,         KC_PIPE,
	  XXX,             XXX,             KC_COMM,         RALT_T(KC_DOT),  XXX,             XXX,
	  
      KC_LPRN,         KC_RPRN,         KC_UNDS,         XXX,             XXX,             XXX
  ),
  // Nav
  [3] = LAYOUT_split_3x6_3(
      XXX,             XXX,             XXX,             XXX,             XXX,             XXX,
	  KC_AGIN,         KC_PSTE,         KC_COPY,         KC_CUT,          KC_UNDO,         XXX,
	  
      XXX,             KC_LGUI,         KC_LALT,         KC_LCTL,         KC_LSFT,         XXX,
	  CW_TOGG,         KC_LEFT,         KC_DOWN,         KC_UP,           KC_RGHT,         XXX,
 
      XXX,             XXX,             KC_ALGR,         XXX,             XXX,             XXX,
	  KC_INS,          KC_HOME,         KC_PGDN,         KC_PGUP,         KC_END,          XXX,
      
	  XXX,             XXX,             XXX,             KC_ENT,          KC_BSPC,         KC_BSLS
  ),
  // Fun
    [4] = LAYOUT_split_3x6_3(
      XXX,             KC_F12,          KC_F7,           KC_F8,           KC_F9,           KC_PSCR,
	  XXX,             XXX,             XXX,             XXX,             XXX,             XXX,

      XXX,             KC_F11,          KC_F4,           KC_F5,           KC_F6,           KC_SCRL,
      XXX,             KC_LSFT,         KC_LCTL,         KC_LALT,         KC_LGUI,         XXX,
		 
      XXX,             KC_F10,          KC_F1,           KC_F2,           KC_F3,           KC_PAUS,
      XXX,             XXX,             XXX,             KC_ALGR,         XXX,             XXX,
		  
      KC_APP,          KC_SPC,          KC_TAB,          XXX,             XXX,             XXX
  ),
  // Num alternative
  [5] = LAYOUT_split_3x6_3(
      XXX,             XXX,             XXX,             XXX,             XXX,             XXX,
	  XXX,             XXX,             XXX,             XXX,             XXX,             XXX,
	  
      XXX,             LGUI_T(KC_4),    LALT_T(KC_3),    LCTL_T(KC_2),    LSFT_T(KC_1),    XXX,
	  XXX,             RSFT_T(KC_6),    RCTL_T(KC_7),    LALT_T(KC_8),    RGUI_T(KC_9),    XXX,

      XXX,             XXX,             KC_RALT,         XXX,             KC_5,            XXX,
	  XXX,             KC_0,            XXX,             KC_RALT,         XXX,             XXX,
	    
      KC_ESC,          KC_SPC,    		KC_TAB,          KC_ENT,          KC_BSPC,         KC_BSLS
  ),
  // Sym alternative
  [6] = LAYOUT_split_3x6_3(
      XXX,             XXX,             KC_LT,           KC_MINS,         KC_GT,           XXX,
	  XXX,             KC_LBRC,         KC_UNDS,         KC_RBRC,         XXX,             XXX,
	  
      KC_EXLM,         KC_BSLS,         KC_LPRN,         KC_PLUS,         KC_RPRN,         KC_HASH,
	  KC_PERC,         KC_LCBR,         KC_EQL,          KC_RCBR,         KC_DQT,          KC_QUES,
	  
      XXX,             XXX,             KC_SLSH,         KC_ASTR,         KC_HASH,         KC_PIPE,
	  XXX,             KC_AMPR,         U_CIRC,          U_TILD,          XXX,             XXX,
	  
      KC_ESC,          KC_SPC,    		KC_TAB,          KC_ENT,          KC_BSPC,         KC_BSLS
  )
};



// macro's

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
