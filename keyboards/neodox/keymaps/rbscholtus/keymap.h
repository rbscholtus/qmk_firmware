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

enum layers { _QWERTY, _SYMB, _NAV, _ADJUST };

// Shortcuts to make keymap more readable
#define SYM_L MO(_SYMB)
#define KC_NAGR LT(_NAV, KC_GRV)
#define KC_NAMI LT(_NAV, KC_MINS)
#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

#define KC_CTLF LCTL(KC_LEFT)
#define KC_CTRG LCTL(KC_RIGHT)

#define MT_SHBS MT(MOD_LSFT, KC_BSPC)
#define MT_CTDL MT(MOD_LCTL, KC_DEL)
#define MT_ALES MT(MOD_LALT, KC_ESC)
#define LT_NVSP LT(_NAV, KC_SPC)
#define LT_ADCR LT(_ADJUST, KC_ENTER)
#define LT_SYMI LT(_SYMB, KC_MINS)
