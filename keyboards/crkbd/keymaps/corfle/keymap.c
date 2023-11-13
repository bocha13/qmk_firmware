/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * layer 0
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ~   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTR |   Z  |   X  |   C  |   V  |   B  |-------.     ,------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LGUI |  L1  | /Space  /       \Enter \  |  L2  | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
    [0] = LAYOUT_split_4x6_3(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_TILD,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                     KC_LGUI,KC_LALT,KC_LGUI, MO(1), KC_SPC,      KC_ENT,  MO(2), KC_RCTL, KC_RALT, KC_RGUI
   ),
   [1] = LAYOUT_split_4x6_3(
/* layer 1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |  (   |   )  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |  9   |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|VOL_UP|   @  |   #  |   $  |   %  |                    | AR_L | AR_D | AR_U | AR_R |   )  |   |  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTR |VOL_DN|  -   |  +   |   {  | MUTE |-------.     ,------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LGUI |      | /Space  /       \Enter \  |  L3  | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */
  KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
  KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  KC_LSFT, KC_AUDIO_VOL_UP,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                   KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_RPRN, KC_PIPE,
  KC_LCTL, KC_AUDIO_VOL_DOWN, KC_MINS, KC_PLUS, KC_LCBR, KC_AUDIO_MUTE,           KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS,  KC_RSFT,
                               KC_LGUI,KC_LALT,KC_LGUI, XXXXXXX, KC_SPC,      KC_ENT,  MO(3), KC_RCTL, KC_RALT, KC_RGUI

    ),
    [2] = LAYOUT_split_4x6_3(
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTR |  =   |  -   |  +   |   {  |   }  |-------.     ,------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |  L3  | /Space  /       \Enter \  |RAISE |      | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  KC_LSFT, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_GRV,
  KC_LCTL,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,                       KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS,  KC_RSFT,
                         KC_LGUI,KC_LALT,KC_LGUI, MO(3), KC_SPC,    KC_ENT,  XXXXXXX, KC_RCTL, KC_RALT, KC_RGUI
    ),
    [3] = LAYOUT_split_4x6_3(

/* RAISE
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |      |      |      |      |      |      |                    | PWrd |      |      |      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | E`   |      |      |                    |      |  U`  |  I`  |  O`  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | a` | LCtl |LShift|        | Caps |                    |      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------.     ,------|  N-  |      |      |      |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |      | /Space  /       \Enter \  |      | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  XXXXXXX, XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,                            KC_PGUP, XXXXXXX,   KC_UP, XXXXXXX,XXXXXXX, KC_BSPC,
  XXXXXXX,  KC_INS,  KC_PSCR,   UC(0x00E9),  XXXXXXX, XXXXXXX,                        XXXXXXX, UC(0x00FA) , UC(0x00ED), UC(0x00F3) , XXXXXXX , XXXXXXX,
  XXXXXXX, UC(0x00E1),  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  XXXXXXX,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,                      UC(0x00F1), XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,
                         KC_LGUI,KC_LALT,KC_LGUI, XXXXXXX, KC_SPC,    KC_ENT,  XXXXXXX, KC_RCTL, KC_RALT, KC_RGUI
    )};
