#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
	/*
	  .-----+-----+-----+-----+-----+-----.               .-----+-----+-----+-----+-----+-----.
	  |  ^  |  N1 |  N2 |  N3 |  N4 |  N5 |               |  N6 |  N7 |  N8 |  N9 |  N0 |  ´  |
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  | ESC |  Q  |  W  |  E  |  R  |  T  |               |  Z  |  U  |  I  |  O  |  P  | DEL |
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  | TAB |  A  |  S  |  D  |  F  |  G  |               |  H  |  J  |  K  |  L  |  Ö  |  Ä  |   
	  +-----+-----+-----+-----+-----+-----+-----.   .-----+-----+-----+-----+-----+-----+-----+
	  |SHIFT|  Y  |  X  |  C  |  V  |  B  |Mute |   |Menue|  N  |  M  |  ,  |  .  |  -  |SHIFT| 
	  +-----+-----+-----+-----+-----+-----+-----+   +-----+-----+-----+-----+-----+-----+-----+
	              |LCRTL| WIN |LALT |Mod|1|ENTER|   |Leer |Mod|2|RALT | WIN |RCRTL|
				  `-----+-----+-----+-----+-----´   `-----+-----+-----+-----+-----´
	*/
	  KC_GRV, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_EQL,
	  KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
	  KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
	  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,KC_MUTE, KC_APP, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT, TT(1), KC_ENT, KC_SPC, TT(2), KC_RALT, KC_RGUI, KC_RCTL
	),

	[1] = LAYOUT(
	/*
	  .-----+-----+-----+-----+-----+-----.               .-----+-----+-----+-----+-----+-----.
	  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |               |  F7 |  F8 |  F9 | F10 | F11 | F12 |
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  |TRANS|  !  |  "  |  §  |  $  |  %  |               |  &  |  /  |  (  |  )  |  =  |TRANS|
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  |TRANS|  1  |  2  |  3  |  4  |  5  |               |  6  |  7  |  8  |  9  |  0  |  ~  |   
	  +-----+-----+-----+-----+-----+-----+-----.   .-----+-----+-----+-----+-----+-----+-----+
	  |TRANS|  <  |  >  |  #  |  ?  |  \  |     |   |     |  |  |  {  |  [  |  ]  |  }  |TRANS| 
	  +-----+-----+-----+-----+-----+-----+-----+   +-----+-----+-----+-----+-----+-----+-----+
	              |     |TRANS|TRANS|TRANS|TRANS|   |TRANS|     |TRANS|TRANS|TRANS|
				  `-----+-----+-----+-----+-----´   `-----+-----+-----+-----+-----´
	*/
	  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
      KC_TRNS, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), RSFT(KC_6), RSFT(KC_7), RSFT(KC_8), RSFT(KC_9), RSFT(KC_0), KC_TRNS,
	  KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, RALT(KC_RBRC),
	  KC_TRNS, KC_NUBS, LSFT(KC_NUBS), KC_NUHS, LSFT(KC_MINS), RALT(KC_MINS), KC_NO, KC_NO, RALT(KC_NUBS), RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), KC_TRNS,
	  KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[2] = LAYOUT(
    	/*
	  .-----+-----+-----+-----+-----+-----.               .-----+-----+-----+-----+-----+-----.
	  |CAPS |     | NUM |PAUSE|SCROL|PRINT|               |     |     |     |     |     |C-A-E|
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  |TRANS|     |     |     |     |Pdwn |               |EINFG| Pos1| Up  |ENDE |     |TRANS|
	  +-----+-----+-----+-----+-----+-----|               |-----+-----+-----+-----+-----+-----+
	  |TRANS|     |     |     |     | Pup |               |ENTF |Left |Down |Right|     |     |   
	  +-----+-----+-----+-----+-----+-----+-----.   .-----+-----+-----+-----+-----+-----+-----+
	  |TRANS|  ß  |  Ü  |  @  |     |  +  |     |   |     |     |  »  |  «  |     |     |TRANS| 
	  +-----+-----+-----+-----+-----+-----+-----+   +-----+-----+-----+-----+-----+-----+-----+
	              |     |TRANS|TRANS|     |     |   |     |TRANS|TRANS|TRANS|     |
				  `-----+-----+-----+-----+-----´   `-----+-----+-----+-----+-----´
	*/
      KC_CAPS, KC_NO, KC_NUM, KC_PAUS, KC_SCRL, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_0,
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_INS, KC_HOME, KC_UP, KC_END, KC_NO, KC_TRNS,
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
      KC_TRNS, KC_MINS, KC_LBRC, RALT(KC_Q), KC_NO, KC_RBRC, KC_NO, KC_NO, QK_MACRO_1, QK_MACRO_2, KC_NO, KC_NO, KC_NO, KC_TRNS,
      KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
	)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
	      // Mapping for 1st Encoder                    // Mapping for 2nd Encoder
	[0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
	[2] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LALT)SS_TAP(X_DEL)SS_UP(X_LALT)SS_UP(X_LCTL));
                return false;
			case QK_MACRO_1:
                SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_8)SS_TAP(X_KP_7)SS_UP(X_LALT));
                return false;
			case QK_MACRO_2:
                SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_7)SS_TAP(X_KP_1)SS_UP(X_LALT));
                return false;
        }
    }

	return true;
};

