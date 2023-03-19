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

// #define USE_MATRIX_I2C

/* Select hand configuration */

#undef MATRIX_ROWS
#undef MATRIX_COLS
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { F6, F7, B1, B3 }

// wiring of each half
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS \
    { D1, D0, B6, B2, F5, F4, D4, C6, D7, E6, B4, B5 }
