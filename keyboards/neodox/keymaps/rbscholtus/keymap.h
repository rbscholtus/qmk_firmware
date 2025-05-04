/*
Copyright 2025 Barend Scholtus <barend.scholtus@gmail.com>

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

#pragma once

#include QMK_KEYBOARD_H

enum layers { _QWE_WN, _QWE_MC, _SYMBOL, _NAV_WN, _NAV_MC, _ADJUST };
extern const char *layer_names[];

// Shortcuts to make keymap more readable

// Redox-style layer switching
#define SYM_L MO(_SYMBOL)
#define KC_SYMP LT(SYM_L, KC_MPLY)
#define KC_NAGR LT(_NAV_WN, KC_GRV)   // win
#define KC_NAMI LT(_NAV_WN, KC_MINS)  // win
#define KC_NA2GR LT(_NAV_MC, KC_GRV)  // mac
#define KC_NA2MI LT(_NAV_MC, KC_MINS) // mac
#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

// Shortcuts on the Nav layer, OS dependent
#define KC_CTLF LCTL(KC_LEFT)  // win
#define KC_CTRG LCTL(KC_RIGHT) // win
#define KC_CTHM LCTL(KC_HOME)  // win
#define KC_CTEN LCTL(KC_END)   // win
#define KC_OPLF LALT(KC_LEFT)  // mac
#define KC_OPRG LALT(KC_RIGHT) // mac
#define KC_OPUP LALT(KC_UP)    // mac
#define KC_OPDN LALT(KC_DOWN)  // mac
#define KC_GULF LGUI(KC_LEFT)  // mac
#define KC_GURG LGUI(KC_RIGHT) // mac
#define KC_GUUP LGUI(KC_UP)    // mac
#define KC_GUDN LGUI(KC_DOWN)  // mac

// Thumb cluster
#define MT_SHBS MT(MOD_LSFT, KC_BSPC)
#define MT_CTDL MT(MOD_LCTL, KC_DEL) // win
#define MT_GUDL MT(MOD_LGUI, KC_DEL) // mac
#define MT_ALES MT(MOD_LALT, KC_ESC)
#define LT_NVSP LT(_NAV_WN, KC_SPC)  // win
#define LT_NV2SP LT(_NAV_MC, KC_SPC) // mac
#define LT_ADCR LT(_ADJUST, KC_ENTER)
#define LT_SYMI LT(_SYMBOL, KC_MINS)

// Other
#define MT_SHEQ MT(MOD_RSFT, KC_EQL)
