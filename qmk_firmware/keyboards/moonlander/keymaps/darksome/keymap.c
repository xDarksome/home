#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_BSLASH,                                      KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_ENTER,       
    KC_MINUS,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_GRAVE,                                                                       KC_RBRACKET,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_LBRACKET,    
    KC_EQUAL,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_QUOTE,       
    KC_PERC,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_CIRC,        
    KC_SPACE,       KC_LCTRL,       KC_LALT,                        KC_RGUI,        KC_RSHIFT,      KC_BSPACE
  ),
};

const key_override_t ko_1 = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_1);
const key_override_t ko_2 = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_2);
const key_override_t ko_3 = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_3);
const key_override_t ko_4 = ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_4);
const key_override_t ko_5 = ko_make_basic(MOD_MASK_SHIFT, KC_PERC, KC_5);
const key_override_t ko_6 = ko_make_basic(MOD_MASK_SHIFT, KC_CIRC, KC_6);
const key_override_t ko_7 = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_7);
const key_override_t ko_8 = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_8);
const key_override_t ko_9 = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_9);
const key_override_t ko_0 = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_0);

const key_override_t ko_dlr = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_DLR);

const key_override_t ko_up = ko_make_basic(MOD_MASK_GUI, KC_I, KC_UP);
const key_override_t ko_left = ko_make_basic(MOD_MASK_GUI, KC_J, KC_LEFT);
const key_override_t ko_down = ko_make_basic(MOD_MASK_GUI, KC_K, KC_DOWN);
const key_override_t ko_right = ko_make_basic(MOD_MASK_GUI, KC_L, KC_RIGHT);

const key_override_t ko_pgdown = ko_make_basic(MOD_MASK_GUI, KC_U, KC_PGDOWN);
const key_override_t ko_pgup = ko_make_basic(MOD_MASK_GUI, KC_O, KC_PGUP);
const key_override_t ko_home = ko_make_basic(MOD_MASK_GUI, KC_H, KC_HOME);
const key_override_t ko_end = ko_make_basic(MOD_MASK_GUI, KC_SCOLON, KC_END);

const key_override_t **key_overrides = (const key_override_t *[]){
    &ko_1,
    &ko_2,
    &ko_3,
    &ko_4,
    &ko_5,
    &ko_6,
    &ko_7,
    &ko_8,
    &ko_9,
    &ko_0,
    &ko_dlr,
    &ko_up,
    &ko_left,
    &ko_down,
    &ko_right,
    &ko_pgdown,
    &ko_pgup,
    &ko_home,
    &ko_end,
    NULL
};


