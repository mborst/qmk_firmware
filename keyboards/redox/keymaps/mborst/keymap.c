#include QMK_KEYBOARD_H

#include "keymap_german.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _ALPH 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3

enum custom_keycodes {
  ALPH = SAFE_RANGE,
  SYMB,
  ADJUST,
};

// Shortcut to make keymap more readable
#define TG_SYMB TG(_SYMB)
#define TO_BASE TO(_ALPH)

#define KC_SPCS LT(_SYMB, KC_SPC)
#define KC_ENTS LT(_SYMB, KC_ENT)

#define KC_SGRV LSFT_T(KC_GRV)
#define KC_SMIN RSFT_T(KC_MINS)

#define KC_LABS LALT_T(KC_BSLS)
#define KC_RAMI RALT_T(KC_MINS)

#define KC_CBSL LCTL_T(KC_BSLS)

#define KC_MESC LGUI_T(KC_ESC)
#define KC_MTAB LGUI_T(KC_TAB)
#define KC_CSQU C_S_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // COLEMAK
  [_ALPH] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,TG_SYMB ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MTAB ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,KC_MUTE ,                          KC_PSCR ,KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,KC_EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MESC ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,TG_SYMB ,                          TG_SYMB ,KC_K    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,KC_CSQU ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_SGRV ,KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,KC_VOLD ,KC_VOLU ,        KC_BRID ,KC_BRIU ,KC_M    ,KC_H    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_SMIN ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     TG_SYMB ,KC_CBSL ,XXXXXXX ,KC_LGUI ,     KC_LABS ,    KC_SPCS ,KC_BSPC ,        KC_BSPC ,KC_ENTS ,    KC_RAMI ,     KC_LGUI ,XXXXXXX ,KC_RCTL ,TG_SYMB 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),


  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,_______ ,                          _______ ,KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LPRN ,KC_RPRN ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,KC_LEFT ,KC_UP   ,KC_DOWN ,KC_RIGHT,_______ ,                          _______ ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_DOT  ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,DE_SS   ,DE_UE   ,DE_OE   ,DE_AE   ,_______ ,_______ ,_______ ,        _______ ,_______ ,_______ ,KC_LBRC ,KC_RBRC ,KC_LCBR ,KC_RCBR ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     _______ ,    _______ ,TO_BASE ,        TO_BASE ,_______ ,    _______ ,     _______ ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,RESET   ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,        _______ ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,     _______ ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )

};
