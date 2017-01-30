#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Layer: Base Layer
    * ,-------------------------------------------------.
    * |FN1Tb|Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P| BSp |
    * |-------------------------------------------------|
    * |CtEs|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|Fn1'|
    * |-------------------------------------------------|
    * |Shft[|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|St]|
    * |-------------------------------------------------|
    * | FN2|  FN3  |Gui |Enter| Space |  \ |  Alt|  FN2 |
    * `-------------------------------------------------'
    */
   KEYMAP(
     FN0 ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, \
     FN18 ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN, FN19, \
     FN15  ,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,FN14, \
     FN1 ,  FN2,  LGUI,     ENT,       SPC,   BSLS,   RALT,    FN1  ),

   /* Layer: Function Layer 1
    * ,-------------------------------------------------.
    * |   |  !|  @|  #|  $|  %|  ^|  &|  *|  (|  )| Del |
    * |-------------------------------------------------|
    * |   `|  -|  =|   |   |   |Lft| Dn| Up| Rt|   |    |
    * |-------------------------------------------------|
    * |   ~ | _ | + |   |   |   |   |   |   |   |   |   |
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TRNS, FN4, FN5, FN6, FN7, FN8, FN9,FN10,FN11,FN12,FN13,   DEL, \
     GRV  ,MINS, EQL,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,RGHT,TRNS, TRNS, \
     FN3   ,FN16,FN17,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Function Layer 2
    * ,-------------------------------------------------.
    * |   |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|     |
    * |-------------------------------------------------|
    * |    |   |   |   |   |   |   |   |   |   |   |    |
    * |-------------------------------------------------|
    * |     |   |   |   |   |   |   |   |   |   |   |   |
    * |-------------------------------------------------|
    * |    |       |    |     |       |    |     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     TRNS,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  TRNS, \
     TRNS ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
     TRNS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
     TRNS, TRNS,  TRNS,    TRNS,      TRNS,   TRNS,   TRNS,  TRNS   ),

   /* Layer: Game Layer
    * ,-------------------------------------------------.
    * |PSc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|     |
    * |-------------------------------------------------|
    * |  F1| F2| F3| F4| F5| F6|   |  4|  5|  6|   | Vl+|
    * |-------------------------------------------------|
    * |   F7| F8| F9|F10|F11|F12|   |  1|  2|  3|   |Vl-|
    * |-------------------------------------------------|
    * |    |       | Prv| Ply |  Stp  | Nxt|     |      |
    * `-------------------------------------------------'
    */
   KEYMAP(
     PSCR,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  TRNS, \
     F1   ,F2  ,F3  ,F4  ,F5  ,F6  ,TRNS,   4,   5,   6,TRNS, VOLU, \
     F7    ,F8  ,F9  ,F10 ,F11 ,F12 ,TRNS,   1,   2,   3,TRNS,VOLD, \
     TRNS, TRNS,  MPRV,     MPLY,      MSTP,   MNXT,   TRNS,  TRNS  ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_TAB),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_TOGGLE(3),
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [4]  = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [7]  = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [8]  = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [9]  = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [14] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_RBRC),
    [15] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_LBRC),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [18] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [19] = ACTION_LAYER_TAP_KEY(1, KC_QUOT)
};
