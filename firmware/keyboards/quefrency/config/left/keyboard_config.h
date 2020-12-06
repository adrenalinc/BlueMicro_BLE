/*
Copyright 2018-2020 <Pierre Constantineau>

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
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"


#define KEYBOARD_SIDE LEFT
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  SINGLE

#define DEVICE_NAME_R                         "QuefrencyBLE_R"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                        "QuefrencyBLE_L"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "QuefrencyBLE"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "QuefrencyBLE_V1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "Keebio"                      /**< Manufacturer. Will be passed to Device Information Service. */



#if KEYBOARD_SIDE == LEFT
#define KEYMAP( \
  LA1, LA2, LA3, LA4, LA5, LA6, LA7, ____, \
  LB1, LB2, LB3, LB4, LB5, LB6, ____, ____, \     
  LC1, LC2, LC3, LC4, LC5, LC6, ____, ____, \    
  LD1, ____, LD3, LD4, LD5, LD6, LD7, ____, \
  LE1, LE2, LE3, ____, LE5, ____, LE7, ____, \
  RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, \
  RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, \
  RC1, RC2, RC3, RC4, RC5, RC6, ____, RC8, \
  RD1, RD2, RD3, RD4, ____, RD6, RD7, RD8, \
  RE1, RE2, ____, RE4, RE5, RE6, RE7, RE8 \
  ) \
  { \
    { LA1, LA2, LA3, LA4, LA5, LA6, LA7, KC_NO }, \
    { LB1, LB2, LB3, LB4, LB5, LB6, KC_NO, KC_NO }, \
    { LC1, LC2, LC3, LC4, LC5, LC6, KC_NO, KC_NO }, \
    { LD1, KC_NO, LD3, LD4, LD5, LD6, LD7, KC_NO }, \
    { LE1, LE2, LE3, KC_NO, LE5, KC_NO, LE7, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8 }, \
    { RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8 }, \
    { RC1, RC2, RC3, RC4, RC5, RC6, KC_NO, RC8 }, \
    { RD1, RD2, RD3, RD4, KC_NO, RD6, RD7, RD8 }, \
    { RE1, RE2, KC_NO, RE4, RE5, RE6, RE7, RE8 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
} 

#endif /* KEYBOARD_CONFIG_H */
