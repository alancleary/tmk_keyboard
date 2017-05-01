#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * | ` |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|   |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  BSp|
     * |-----------------------------------------------------------|
     * |CtlEsc|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |   |
     * |-----------------------------------------------------------'
     * | Fn0 |Alt|Gui  |         Space         |Alt  |Gui|   | Fn0 |
     * `-----------------------------------------------------------'
     */
    [0] =
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, NO, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           FN1 ,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT, NO, \
           FN0, LALT,LGUI,          SPC,                RALT,RGUI,NO,FN0),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |   |   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |LFT|DWN| UP|RHT|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |Gui|Alt  |         Space         |Alt  |Gui|   |     |
     * `-----------------------------------------------------------'
     */ 
    [1] = 
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, BSPC,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,RGHT,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
};

