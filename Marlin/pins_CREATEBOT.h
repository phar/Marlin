/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * creatbot based on ramps
 */
#include "arduino.h"

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "CREATEBOT"
#endif

#define LARGE_FLASH true


//
// Limit Switches
//
#define X_MIN_PIN          37   
#define X_MAX_PIN          40

#define Y_MIN_PIN          41
#define Y_MAX_PIN          38 

#define Z_MIN_PIN          19
#define Z_MAX_PIN          20

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

#define SLED_PIN           -1

//
// Steppers
//
  #define X_STEP_PIN         35
  #define X_DIR_PIN          36
  #define X_ENABLE_PIN       34
  
  #define Y_STEP_PIN         26 //verified both directions
  #define Y_DIR_PIN          27
  #define Y_ENABLE_PIN       25
  
  #define Z_STEP_PIN         56//A2 //verified
  #define Z_DIR_PIN          60//A6
  #define Z_ENABLE_PIN       55//A1
  
  #define E0_STEP_PIN        1
  #define E0_DIR_PIN         54//A0
  #define E0_ENABLE_PIN      2
  
  #define E1_STEP_PIN        29
  #define E1_DIR_PIN         39
  #define E1_ENABLE_PIN      28
  
  

//
// Temperature Sensors
//
#define TEMP_0_PIN         A15   // Analog Input
#define TEMP_1_PIN         A14   // Analog Input
#define TEMP_BED_PIN       A13   // Analog Input


//
// Heaters / Fans
//
#define HEATER_0_PIN        9
#define HEATER_1_PIN        8


//
// Misc. Functions
//
#define SDSS               53 //verified

#define LED_PIN            13 //verified


#define LCD_PINS_RS         14 //verified
#define LCD_PINS_ENABLE     15
#define LCD_PINS_D4         30
#define LCD_PINS_D5         31
#define LCD_PINS_D6         32
#define LCD_PINS_D7         33

#define BEEPER_PIN          64//a10 //seems right

//#define BTN_EN1             42
//#define BTN_EN2             62//a8
//#define BTN_ENC             59//a5

#define BTN_EN1             42
#define BTN_EN2             59
#define BTN_ENC             62


#define SD_DETECT_PIN       49 //fixme

