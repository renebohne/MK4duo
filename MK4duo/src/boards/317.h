/****************************************************************************************
* 317
* Makeblock MegaPi
****************************************************************************************/

#define KNOWN_BOARD
#define BOARD_NAME "MegaPi"

#ifndef __AVR_ATmega2560__
#error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

// X axis pins
#define ORIG_X_STEP_PIN         12
#define ORIG_X_DIR_PIN          11
#define ORIG_X_ENABLE_PIN       35
#define ORIG_X_MIN_PIN          60
#define ORIG_X_MAX_PIN          -1
#define X_MS1_PIN          34
#define X_MS2_PIN          33
#define X_MS3_PIN          32
#define ORIG_X_RESET_PIN        31
#define ORIG_X_SLEEP_PIN        18

// Y axis pins
#define ORIG_Y_STEP_PIN         8
#define ORIG_Y_DIR_PIN          7
#define ORIG_Y_ENABLE_PIN       36
#define ORIG_Y_MIN_PIN          61
#define ORIG_Y_MAX_PIN          -1
#define Y_MS1_PIN          37
#define Y_MS2_PIN          40
#define Y_MS3_PIN          41
#define ORIG_Y_RESET_PIN        38
#define ORIG_Y_SLEEP_PIN        19


// Z axis pins
#define ORIG_Z_STEP_PIN         9
#define ORIG_Z_DIR_PIN          6
#define ORIG_Z_ENABLE_PIN       42
#define ORIG_Z_MIN_PIN          -1
#define ORIG_Z_MAX_PIN          -1
#define Z_MS1_PIN          43
#define Z_MS2_PIN          47
#define Z_MS3_PIN          48
#define ORIG_Z_RESET_PIN        49
#define ORIG_Z_SLEEP_PIN        3

// E axis pins
#define ORIG_E0_STEP_PIN        5
#define ORIG_E0_DIR_PIN         4
#define ORIG_E0_ENABLE_PIN      59
//#define ORIG_E0_MS1_PIN         58
//#define ORIG_E0_MS2_PIN         57
//#define ORIG_E0_MS3_PIN         56
#define ORIG_E0_RESET_PIN       55
#define ORIG_E0_SLEEP_PIN       2


//#define ORIG_E1_STEP_PIN        35
//#define ORIG_E1_DIR_PIN         34
//#define ORIG_E1_ENABLE_PIN      33

#define SDPOWER                 -1
#define SDSS                    -1
#define LED_PIN                 13
#define SD_DETECT_PIN           -1

#define ORIG_FAN_PIN            -1
#define ORIG_FAN1_PIN           -1
#define ORIG_PS_ON_PIN          -1

#define ORIG_LASER_PWR_PIN      10

#define ORIG_HEATER_0_PIN       13
#define ORIG_HEATER_1_PIN       -1
#define ORIG_HEATER_2_PIN       -1
#define ORIG_HEATER_3_PIN       -1

#define ORIG_TEMP_0_PIN         14  // ANALOG NUMBERING
#define ORIG_TEMP_1_PIN         -1  // ANALOG NUMBERING
#define ORIG_TEMP_2_PIN         -1  // ANALOG NUMBERING
#define ORIG_TEMP_3_PIN         -1  // ANALOG NUMBERING

#define ORIG_HEATER_BED_PIN      54  // BED
#define ORIG_TEMP_BED_PIN        -1  // ANALOG NUMBERING
