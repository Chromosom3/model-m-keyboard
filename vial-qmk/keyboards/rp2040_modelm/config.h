#pragma once

#include "config_common.h"

// set number of keymap layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// increase usb polling rate
#define USB_POLLING_INTERVAL_MS 1

// eeprom size config
// This is the max allowable size by qmk as of Nov-3-2022
#define WEAR_LEVELING_LOGICAL_SIZE 65536
#define WEAR_LEVELING_BACKING_SIZE 131072

// set number of configurable macros in vial
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed (5 is default) */
#define DEBOUNCE 5

/* The Model M has no diodes */
#define MATRIX_HAS_GHOST

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { GP16, GP17, GP18, GP19, GP20, GP21, GP22, GP26 }
#define MATRIX_COL_PINS { GP15, GP14, GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6, GP5, GP4, GP3, GP2, GP1, GP0 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL
