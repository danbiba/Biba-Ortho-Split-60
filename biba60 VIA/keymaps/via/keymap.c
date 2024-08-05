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
        _______, _______, _______, _______, _______, KC_VOLU, 
        _______, _______, _______, _______, _______, KC_VOLD, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, MO(_ADJUST), _______,

        _______, _______, _______, _______, _______, KC_DEL, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, 
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
    )
};

void matrix_scan_user(void) {
    // Add your matrix scan code here
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    rgblight_enable(); // Enable RGB lighting
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT); // Set the mode to static light
}

