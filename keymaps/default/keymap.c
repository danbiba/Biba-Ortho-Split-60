#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _RAISE,
    _LOWER,
    _ADJUST,
    _FUNCTION,
    _INKSCAPE
};

enum custom_keycodes {
    ALIGN_HOR_CENTER = SAFE_RANGE,
    ALIGN_VER_CENTER,
    UNION_MACRO,
    DIFFERENCE_MACRO,
    EVEN_HOR_CENTER,
    EVEN_VER_CENTER,
    GROUP_MACRO,
    UNGROUP_MACRO
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_6x10(
        KC_ESC,    KC_1, KC_2, KC_3,    KC_4,    KC_5,    
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL,   KC_LGUI, KC_LALT, MO(_FUNCTION), MO(_LOWER), KC_SPC,

        KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_Y,      KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,   
        KC_H,      KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_N,      KC_M,    KC_COMM, KC_DOT,    KC_UP,  KC_ENT,    
        KC_SPC,    MO(_RAISE),    KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
    [_RAISE] = LAYOUT_ortho_6x10(
        _______, _______, _______, _______, _______, _______, 
        _______, _______, KC_MS_U, _______, _______, KC_VOLU, 
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, KC_VOLD, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, MO(_ADJUST), _______,

        _______, _______, _______, _______, _______, KC_DEL, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, KC_BTN1, 
        _______, _______, _______, _______, _______, _______
    ),
    [_LOWER] = LAYOUT_ortho_6x10(
        QK_BOOT, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 

        _______, _______, _______, KC_LPRN, KC_RPRN, KC_DEL, 
        _______, _______, _______, KC_LCBR, KC_RCBR, _______, 
        _______, KC_PLUS, KC_MINS, KC_LBRC, KC_RBRC, _______, 
        _______, KC_EQL, KC_UNDS, KC_LABK, KC_RABK, _______, 
        _______, MO(_ADJUST), _______, _______, _______, _______
    ),
    [_ADJUST] = LAYOUT_ortho_6x10(
        QK_BOOT, RGB_SPI, RGB_SAI, RGB_VAI, RGB_MOD, RGB_HUI, 
        _______, RGB_SPD, RGB_SAD, RGB_VAD, RGB_RMOD, RGB_HUD, 
        _______, _______, _______, _______, UG_NEXT, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 

        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, TO(_INKSCAPE)
    ),
    [_FUNCTION] = LAYOUT_ortho_6x10(
        KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 

         KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, KC_BTN2, KC_MS_U, KC_BTN1, 
        _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R
    ),
    [_INKSCAPE] = LAYOUT_ortho_6x10(
        KC_ESC, KC_HOME, KC_PGUP, ALIGN_HOR_CENTER, ALIGN_VER_CENTER, TO(_QWERTY),
        S(KC_5), KC_END, KC_PGDN, EVEN_HOR_CENTER, EVEN_VER_CENTER, _______, 
        KC_DEL, _______, KC_S, KC_D, KC_ENT, _______, 
        KC_LSFT, C(KC_Z), C(KC_Y), C(KC_C), C(KC_V),  _______,
        KC_LCTL, UNION_MACRO, DIFFERENCE_MACRO, GROUP_MACRO, UNGROUP_MACRO,  _______,
        
        _______, _______, _______, _______, _______, KC_NUM, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______
    )
};

void matrix_scan_user(void) {
    // Add your matrix scan code here
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALIGN_HOR_CENTER:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_RALT);
                register_code(KC_P7);
            } else {
                unregister_code(KC_P7);
                unregister_code(KC_RALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case ALIGN_VER_CENTER:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_RALT);
                register_code(KC_P1);
            } else {
                unregister_code(KC_P1);
                unregister_code(KC_RALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case UNION_MACRO:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_PPLS);
            } else {
                unregister_code(KC_PPLS);
                unregister_code(KC_LCTL);
            }
            return false;
        case DIFFERENCE_MACRO:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_PMNS);
            } else {
                unregister_code(KC_PMNS);
                unregister_code(KC_LCTL);
            }
            return false;
        case EVEN_HOR_CENTER:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_RALT);
                register_code(KC_P9);
            } else {
                unregister_code(KC_P9);
                unregister_code(KC_RALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case EVEN_VER_CENTER:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_RALT);
                register_code(KC_P3);
            } else {
                unregister_code(KC_P3);
                unregister_code(KC_RALT);
                unregister_code(KC_LCTL);
            }
            return false;
        case GROUP_MACRO:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_G);
            } else {
                unregister_code(KC_G);
                unregister_code(KC_LCTL);
            }
            return false;
        case UNGROUP_MACRO:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                register_code(KC_G);
            } else {
                unregister_code(KC_G);
                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
            }
            return false;
        default:
            return true;
    }
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    rgblight_enable(); // Enable RGB lighting
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT); // Set the mode to static light
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _QWERTY:
            rgblight_sethsv_noeeprom(HSV_SPRINGGREEN);
            rgblight_mode(RGBLIGHT_MODE_KNIGHT); // Set the RGB mode to knight
            break;
        case _RAISE:
            rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD);
            break;
        case _LOWER:
            rgblight_sethsv_noeeprom(HSV_YELLOW);
            rgblight_mode(RGBLIGHT_MODE_SNAKE);
            break;
        case _ADJUST:
            rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
            break;
        case _FUNCTION:
            rgblight_mode(RGBLIGHT_MODE_FAST_SPIN);
            break;
        case _INKSCAPE:
            rgblight_mode(RGBLIGHT_MODE_SLOW_SPIN);
            break;
        default: // for any other layers, turn off the RGB lighting
            rgblight_sethsv_noeeprom(HSV_OFF);
            rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
    }
    return state;
}
