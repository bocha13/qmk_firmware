/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

// #undef MATRIX_ROWS
// #undef MATRIX_COLS
// #undef MATRIX_ROW_PINS
// #undef MATRIX_COL_PINS

// // rows are doubled-up
// #define MATRIX_ROWS 8
// #define MATRIX_COLS 6

// #define MATRIX_ROW_PINS { F6, F7, B1, B2 }

// // wiring of each half
// #define MATRIX_COL_PINS { D4, C6, D7, B6, B4, B5 }

// TRS config
#define USE_SERIAL

/* Select hand configuration */
#define MASTER_LEFT

// #define EE_HANDS

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000

// TRS data pin
// #define SOFT_SERIAL_PIN D0

#define DIODE_DIRECTION COL2ROW

// enable unicode chars for Linux
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
