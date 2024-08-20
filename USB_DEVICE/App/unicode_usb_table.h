#ifndef __UNICODE_USB__H__
#define __UNICODE_USB__H__

#include "unistd.h"

typedef struct UsbMapping {
    uint16_t unicodeChar;
    uint8_t usbKeycode;
} UsbMapping_t;

static const UsbMapping_t usbMappingHID[56] = {
    { 1, 41 }, //ESC
    { 2, 76 }, //DEL
    { 3, 43 }, //TAB
    { 4, 42 }, //BACKSPACE
    { 5, 40 }, //ENTER
    { 6, 74 }, //HOME
    { 7, 77 }, //END
    { 32, 44 }, //SPACE
    { 65, 4 },
    { 66, 5 },
    { 67, 6 },
    { 68, 7 },
    { 69, 8 },
    { 70, 9 },
    { 71, 10 },
    { 72, 11 },
    { 73, 12 },
    { 74, 13 },
    { 75, 14 },
    { 76, 15 },
    { 77, 16 },
    { 78, 17 },
    { 79, 18 },
    { 80, 19 },
    { 81, 20 },
    { 82, 21 },
    { 83, 22 },
    { 84, 23 },
    { 85, 24 },
    { 86, 25 },
    { 87, 26 },
    { 88, 27 },
    { 89, 28 },
    { 90, 29 },
    { 48, 39 }, // 0 is last in USB HID spec and first in ASCII
    { 49, 30 },
    { 50, 31 },
    { 51, 32 },
    { 52, 33 },
    { 53, 34 },
    { 54, 35 },
    { 55, 36 },
    { 56, 37 },
    { 57, 38 },
    { 126, 53 }, // ~
    { 95, 45 }, // -
    { 61, 46 }, // =
    { 91, 47 }, // [
    { 93, 48 }, // ]
    { 37, 49 }, // (backslash)
    { 58, 51 }, // ;
    { 39, 52 }, // '
    { 44, 54 }, // ,
    { 46, 55 }, // .
    { 47, 56 }, // / 
};

#endif