#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0212
#define PRODUCT_ID      0x002D
#define DEVICE_VER      0x0000
#define MANUFACTURER    smwoo21
#define PRODUCT         MacBasics
#define DESCRIPTION     q.m.k. keyboard firmware for v45.0 MacBasics

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, B3, D7, E6, D2, D3, C6 }
#define MATRIX_COL_PINS { F6, B4, F5, F7, D4, B1, B2, B6, B5 }
#define UNUSED_PINS { F4 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
