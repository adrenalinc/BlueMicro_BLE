/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

uint32_t layer0_left[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  _______, 
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  _______,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  
        KC_LCTL, KC_LGUI, KC_LWIN, _______, KC_LALT, _______, LAYER_1, ______
    );

uint32_t layer0_right[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  KC_BSPC, 
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS, 
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  _______, KC_ENT,
        KC_N,    KC_M,    KC_COMMA,KC_DOT,  ______,  KC_SLSH,   KC_RSFT,  KC_DEL,
        KC_SPC,  LAYER_2, _______, LAYER_3, KC_RALT,   KC_RWIN,   KC_RCTL
    );

uint32_t layer1_left[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  _______, 
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  _______,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  
        KC_LCTL, KC_LGUI, KC_LWIN, _______, KC_LALT, _______, LAYER_1, ______
    );

uint32_t layer1_right[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  KC_BSPC, 
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS, 
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  _______, KC_ENT,
        KC_N,    KC_M,    KC_COMMA,KC_DOT,  ______,  KC_SLSH,   KC_RSFT,  KC_DEL,
        KC_SPC,  LAYER_2, _______, LAYER_3, KC_RALT,   KC_RWIN,   KC_RCTL
    );

uint32_t layer2_left[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  _______, 
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  _______,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  
        KC_LCTL, KC_LGUI, KC_LWIN, _______, KC_LALT, _______, LAYER_1, ______
    );

uint32_t layer2_right[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  KC_BSPC, 
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS, 
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  _______, KC_ENT,
        KC_N,    KC_M,    KC_COMMA,KC_DOT,  ______,  KC_SLSH,   KC_RSFT,  KC_DEL,
        KC_SPC,  LAYER_2, _______, LAYER_3, KC_RALT,   KC_RWIN,   KC_RCTL
    );

uint32_t layer3_left[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  _______, 
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  _______,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  
        KC_LCTL, KC_LGUI, KC_LWIN, _______, KC_LALT, _______, LAYER_1, ______
    );

uint32_t layer3_right[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  KC_BSPC, 
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS, 
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  _______, KC_ENT,
        KC_N,    KC_M,    KC_COMMA,KC_DOT,  ______,  KC_SLSH,   KC_RSFT,  KC_DEL,
        KC_SPC,  LAYER_2, _______, LAYER_3, KC_RALT,   KC_RWIN,   KC_RCTL
    );

    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            #if KEYBOARD_SIDE == SINGLE
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
            #endif
            #if KEYBOARD_SIDE == LEFT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_left[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_left[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_left[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_left[row][col]);
            #endif
            #if KEYBOARD_SIDE == RIGHT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_right[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_right[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_right[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_right[row][col]);
            #endif
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }
}






