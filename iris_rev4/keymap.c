#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
	QWERTY = SAFE_RANGE,
	LOWER,
	RAISE,
	ADJUST,
	DEL_PREV,
	DEL_NEXT,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT(
	  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
		 KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
	  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
	  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
										LOWER,   KC_SPC,  KC_LGUI,                   KC_RCTL,  KC_ENT,  RAISE
									// └────────┴────────┴────────┘                 └────────┴────────┴────────┘
	),

	[_LOWER] = LAYOUT(
	  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
		 KC_PSCR, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_TRNS,
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LT,   					 		  KC_GT,   KC_MINS, KC_PLUS, KC_EQL,  KC_NO,   KC_TRNS,
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_GRV,  KC_SLSH, KC_LBRC, KC_LPRN, KC_LCBR,                            KC_RCBR, KC_RPRN, KC_RBRC, KC_BSLS, KC_UNDS, KC_TRNS,
	  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,          KC_NO,   KC_NO,  	KC_NO, 	KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
	  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
										KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, ADJUST
									// └────────┴────────┴────────┘                 └────────┴────────┴────────┘
	),

	[_RAISE] = LAYOUT(
	  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
		 KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 				 			  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_NO,   KC_PGDN, KC_UP, 	 KC_PGUP, KC_NO, 				 			  KC_MINS, KC_7,    KC_8,    KC_9,    KC_NO,   KC_TRNS, 
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 				 			  KC_EQL,  KC_4,    KC_5,    KC_6,    KC_0,    KC_TRNS, 
	  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        	 KC_NO,   KC_PPLS, KC_1,    KC_2,    KC_3,    KC_NO,   KC_TRNS, 
	  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
										KC_TRNS, KC_TRNS, ADJUST,  	    		     KC_TRNS, KC_TRNS, KC_TRNS
									// └────────┴────────┴────────┘                 └────────┴────────┴────────┘
	),

	[_ADJUST] = LAYOUT(
	  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
		 KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, 			 	 			  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_NO,   KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, 			 	 			  KC_NO,   KC_VOLU, KC_VOLD, KC_MUTE, KC_NO,   KC_NO, 
	  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
		 KC_NO,   KC_NO,   KC_NO,   KC_NO, 	 DEL_PREV,KC_NO,			 	 			  KC_NO,   DEL_NEXT,KC_NO,   KC_NO,	  KC_NO,   KC_NO, 
	  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
		 RGB_TOG, RGB_MOD, BL_TOGG, BL_STEP, KC_NO,   KC_NO,   RESET,   		 KC_NO,   RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,
	  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
										KC_TRNS, KC_TRNS, KC_TRNS, 		    		 KC_TRNS, KC_TRNS, KC_TRNS
									// └────────┴────────┴────────┘                 └────────┴────────┴────────┘
	),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case QWERTY:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_QWERTY);
			}
			return false;
			break;
		case LOWER:
			if (record->event.pressed) {
				layer_on(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			} else {
				layer_off(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break;
		case RAISE:
			if (record->event.pressed) {
				layer_on(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			} else {
				layer_off(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break;
		case ADJUST:
			if (record->event.pressed) {
				layer_on(_ADJUST);
			} else {
				layer_off(_ADJUST);
			}
			return false;
			break;
		case DEL_PREV:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_TAP(X_LEFT)SS_UP(X_LSHIFT)SS_UP(X_LCTRL)SS_TAP(X_DELETE));
			}
			break;
		case DEL_NEXT:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_TAP(X_RIGHT)SS_UP(X_LSHIFT)SS_UP(X_LCTRL)SS_TAP(X_DELETE));
			}
			break;
		}
	return true;
}


void encoder_update_user(uint8_t index, bool clockwise) {
	if (IS_LAYER_ON(_LOWER)) {
		// scroll
		if (clockwise) {
			SEND_STRING(SS_TAP(X_DOWN)SS_TAP(X_DOWN)SS_TAP(X_DOWN)SS_TAP(X_DOWN)SS_TAP(X_DOWN));
		} else {
			SEND_STRING(SS_TAP(X_UP)SS_TAP(X_UP)SS_TAP(X_UP)SS_TAP(X_UP)SS_TAP(X_UP));
		}
	} else {
		// vol
		if (clockwise) {
			tap_code(KC_VOLU);
		} else {
		    tap_code(KC_VOLD);
		}
	}
}