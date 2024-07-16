#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _RAISE,
    _LOWER,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_6x10(
        KC_ESC,    KC_1, KC_2, KC_3,    KC_4,    KC_5,    
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL,   KC_LGUI, KC_LALT, MO(_ADJUST), MO(_RAISE), KC_SPC,

        KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_Y,      KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,   
        KC_H,      KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SLSH,
        KC_N,      KC_M,    KC_COMM, KC_DOT,    KC_UP,  KC_ENT,    
        KC_SPC,    MO(_LOWER),    KC_DEL,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
    [_RAISE] = LAYOUT_ortho_6x10(
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______
    ),
    [_LOWER] = LAYOUT_ortho_6x10(
        _______, _______, TO(_QWERTY), _______, _______, QK_BOOT, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______
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
        _______, _______, _______, _______, _______, _______
    )
};

void matrix_scan_user(void) {
    // Add your matrix scan code here
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Add your keycode handling code here
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
            rgblight_mode(RGBLIGHT_MODE_KNIGHT); // Set the RGB mode to knight
            break;
        case _RAISE:
            rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD);
            break;
        case _LOWER:
            rgblight_sethsv_noeeprom(HSV_GREEN);
            rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _ADJUST:
            rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
            break;
        default: // for any other layers, turn off the RGB lighting
            rgblight_sethsv_noeeprom(HSV_OFF);
            rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
    }
    return state;
}

