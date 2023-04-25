#include QMK_KEYBOARD_H


const uint16_t PROGMEM test_combo1[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {LSFT_T(KC_A), KC_S, COMBO_END};

// Return
const uint16_t PROGMEM test_combo3[] = {KC_J, KC_K, COMBO_END};

// Underscore
const uint16_t PROGMEM test_combo4[] = {KC_J, LT(2, KC_SPC), COMBO_END};

// Reset
const uint16_t PROGMEM test_combo5[] = {KC_Q, KC_W, KC_O, KC_P, COMBO_END};

combo_t key_combos[] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, KC_TAB),
    COMBO(test_combo3, KC_LPRN),
    COMBO(test_combo4, KC_UNDS),
    COMBO(test_combo5, QK_BOOT),
};

uint16_t COMBO_LEN = ARRAY_SIZE(key_combos);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
            KC_Q,         KC_W,         KC_E,         KC_R,        KC_T,      KC_Y,          KC_U,       KC_I,            KC_O,           KC_P,
            LSFT_T(KC_A), KC_S,         KC_D,         LT(3, KC_F), KC_G,      KC_H,          KC_J,       KC_K,            KC_L,           LSFT_T(KC_SCLN),
            KC_Z,         LCTL_T(KC_X), LALT_T(KC_C), KC_V,        KC_B,      LT(1, KC_N),   KC_M,       LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
                                                      KC_NUBS,     KC_BSPC,   LT(2, KC_SPC), KC_RGUI
    ),

    // Numbers
	[1] = LAYOUT_split_3x5_2(
            KC_0,    KC_1, KC_2, KC_3,    KC_MINS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_4, KC_5, KC_6,    KC_EQL,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_7, KC_8, KC_9,    KC_TRNS,    KC_TRNS, KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS,
                                 KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),

    // Enter etc.
	[2] = LAYOUT_split_3x5_2(
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,         KC_TRNS,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                       LT(4, KC_TRNS), KC_TRNS,    KC_TRNS, KC_TRNS
    ),

    // Symbols
	[3] = LAYOUT_split_3x5_2(
            KC_GRV,  KC_AMPR, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_LPRN, KC_RPRN, KC_NUHS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_LCBR, KC_RCBR, KC_QUOT, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS,
                                       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),

    // Media
	[4] = LAYOUT_split_3x5_2(
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS
    ),
};
