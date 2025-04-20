/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS {GP2, GP4, GP6, GP17, GP18}
#define MATRIX_COL_PINS {GP7, GP10, GP13, GP16, GP5, GP3, GP1}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define WS2812_DI_PIN GP20

#define RGBLED_SPLIT {12, 12}
#define RGBLIGHT_LED_COUNT 24

/* serial.c configuration for split keyboard */
// #define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP28 // USART TX pin
#define SERIAL_USART_RX_PIN GP29 // USART RX pin
#define SERIAL_PIO_USE_PIO1

/* I2C configuration */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

/* Encoders configuration */
#define ENCODERS_PAD_A {GP11}
#define ENCODERS_PAD_B {GP12}
