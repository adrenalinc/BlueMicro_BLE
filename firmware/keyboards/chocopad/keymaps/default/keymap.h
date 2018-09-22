/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#ifndef KEYMAP_H
#define KEYMAP_H

#define KEYMAP( \
    A1, A2, A3, A4,\
    B1, B2, B3, B4,\
    C1, C2, C3, C4,\
    D1, D2, D3, D4 \
    ) { \
        {A1, A2, A3, A4}, \
        {B1, B2, B3, B4}, \
        {C1, C2, C3, C4}, \
        {D1, D2, D3, D4} \
    }





#define _QWERTY 0
#define _L1  1
#define _L2  2

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY]  = KEYMAP(
  KC_ESC,   KC_P7,    KC_P8,    KC_P9,
  KC_TAB,   KC_P4,    KC_P5,    KC_P6,
  LAYER_2,   KC_P1,    KC_P2,    KC_P3,
  LAYER_1,  KC_P0,    KC_P0,    KC_DOT  ),

  [_L1] = KEYMAP(
  KC_PGUP,  KC_HOME,  KC_UP,    KC_END ,
  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,
  KC_ENT, _______, KC_INS,  KC_DEL,
   _______, _______,  KC_LBRACKET,KC_RBRACKET),

[_L2] = KEYMAP(
  KC_ESC,   KC_F1,    KC_F2,    KC_F3,
  KC_TAB,   KC_F4,    KC_F5,    KC_F6,
  _______,   KC_F7,    KC_F8,    KC_F9,   
  KC_ENT,  KC_F10,    KC_F11,    KC_F12  ),

};

#endif
