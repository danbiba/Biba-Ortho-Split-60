#pragma once

#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0

#define WS2812_DI_PIN D1 // Replace D1 with the pin you are using
#define RGBLED_NUM 12 // Total number of LEDs in your split keyboard (6 per side)
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LAYERS
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 255
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Enable all RGB modes
// #define RGBLIGHT_EFFECT_STATIC
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_XMAS
// #define RGBLIGHT_EFFECT_GRADIENT
// #define RGBLIGHT_EFFECT_TWINKLE
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_MODE_FAST_SPIN 35  // Example definition, ensure this matches your intended value
// #define RGBLIGHT_MODE_SLOW_SPIN 25
// #define RGBLIGHT_EFFECT_HUE_CYCLE
// #define RGBLIGHT_EFFECT_ALTERNATING

// Define the LED layout and order
#define RGBLED_SPLIT { 6, 6 } // Number of LEDs on each half

// Define the LED positions in a continuous order
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
