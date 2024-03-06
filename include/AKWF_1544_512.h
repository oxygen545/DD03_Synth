#ifndef AKWF_1544_512_H_
#define AKWF_1544_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1544_512_NUM_CELLS 512
#define AKWF_1544_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1544_512_DATA [] = {3,
7, 11, 15, 18, 21, 24, 27, 28, 31, 32, 36, 37, 38, 39, 40, 42, 42, 43, 44, 45,
46, 46, 47, 47, 47, 49, 48, 49, 49, 48, 49, 50, 49, 50, 50, 51, 50, 51, 51, 50,
50, 51, 51, 51, 52, 51, 51, 51, 51, 52, 51, 51, 51, 51, 51, 51, 52, 52, 52, 51,
52, 51, 52, 52, 52, 51, 52, 52, 52, 51, 51, 51, 51, 51, 51, 52, 51, 51, 51, 50,
51, 51, 52, 50, 51, 51, 51, 51, 52, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
51, 51, 51, 51, 51, 52, 50, 51, 51, 50, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
50, 51, 50, 50, 51, 50, 51, 50, 50, 50, 50, 50, 51, 51, 50, 51, 50, 51, 50, 50,
50, 50, 50, 51, 50, 50, 50, 51, 51, 51, 50, 50, 50, 51, 50, 50, 50, 51, 50, 50,
50, 50, 50, 49, 51, 49, 50, 49, 52, 48, 52, 46, 59, -29, -128, -124, -128, -125,
-128, -127, -128, -127, -128, -127, -127, -128, -127, -128, -126, -128, -127,
-128, -127, -128, -126, -127, -127, -128, -126, -127, -127, -128, -126, -127,
-127, -127, -127, -126, -127, -127, -127, -126, -127, -126, -127, -126, -127,
-125, -128, -124, -128, -122, -128, -65, 52, 49, 51, 51, 51, 50, 50, 51, 50, 51,
50, 52, 51, 51, 51, 51, 50, 51, 51, 52, 50, 52, 51, 51, 51, 51, 52, 52, 50, 51,
51, 51, 51, 50, 51, 51, 51, 50, 51, 51, 52, 51, 51, 51, 50, 50, 51, 51, 50, 51,
51, 51, 51, 51, 51, 51, 50, 50, 51, 51, 51, 51, 50, 50, 50, 50, 50, 50, 50, 50,
51, 50, 50, 50, 50, 50, 50, 51, 51, 50, 51, 50, 50, 51, 50, 49, 50, 50, 50, 50,
51, 50, 50, 51, 49, 49, 50, 50, 51, 51, 50, 50, 51, 50, 51, 50, 50, 50, 49, 50,
50, 50, 50, 49, 50, 50, 50, 50, 49, 50, 49, 49, 49, 50, 50, 49, 50, 50, 49, 50,
50, 49, 49, 49, 50, 49, 49, 50, 50, 50, 49, 50, 48, 49, 50, 49, 48, 49, 49, 48,
49, 49, 49, 50, 49, 49, 49, 49, 49, 48, 50, 49, 49, 48, 49, 48, 49, 49, 48, 49,
49, 49, 49, 49, 48, 50, 48, 49, 47, 49, 47, 50, 47, 50, 47, 51, 45, 55, -16,
-123, -127, -128, -127, -128, -127, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -127, -127, -128,
-127, -128, -127, -128, -127, -128, -127, -127, -128, -128, -128, -128, -127,
-127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -126, -127,
-127, -127, -127, -127, -127, -126, -127, -127, -127, -126, -127, -126, -127,
-127, -126, -126, -127, -127, -127, -126, -127, -126, -126, -126, -126, -127,
-126, -126, -125, -126, -125, -126, -125, -114, -99, -85, -74, -62, -52, -42,
-34, -26, -19, -12, -7, -1, };

#endif /* AKWF_1544_512_H_ */