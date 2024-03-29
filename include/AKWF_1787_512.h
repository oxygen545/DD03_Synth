#ifndef AKWF_1787_512_H_
#define AKWF_1787_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1787_512_NUM_CELLS 512
#define AKWF_1787_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1787_512_DATA [] = {4,
11, 16, 20, 23, 26, 27, 29, 30, 31, 32, 31, 31, 30, 28, 28, 25, 24, 20, 19, 15,
12, 7, 4, 0, -4, -10, -14, -20, -21, -5, -5, -7, -6, -7, -8, -9, -7, -9, -8, -9,
-9, -8, -7, -8, -7, -7, -6, -6, -5, -4, -3, -2, -1, 0, 0, 1, 0, 1, 2, 2, 3, 3,
4, 3, 3, 5, 4, 3, 4, 4, 3, 4, 4, 3, 3, 3, 2, 1, 2, 2, 2, 1, 1, 1, 0, -1, -1, -1,
0, -2, -2, -1, -3, -3, -3, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -1,
0, 0, -1, -1, 1, 0, 0, 1, 2, 2, 2, 2, 3, 3, 3, 4, 2, 4, 3, 4, 3, 3, 2, 3, 2, 2,
3, 2, 2, 1, 1, 2, 1, 1, 1, 0, 0, 1, 0, 0, 0, -1, -1, -1, -1, -2, -1, -2, -2, -1,
-1, -1, -2, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 2, 1, 2, 1, 1, 2,
2, 2, 1, 1, 2, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -2, -2, -2, -1,
-1, -1, -1, -2, -1, -1, -1, -1, 0, 0, 0, -3, -3, -1, -2, -2, -2, -1, -2, -3, -2,
-3, -4, -4, -5, -4, -6, -6, -7, -6, -7, -7, -7, -8, -6, -6, -5, -4, -4, -3, -2,
-1, 0, 1, 2, 3, 3, 4, 3, 3, 2, 1, 0, 1, -2, -2, -2, -3, -4, -5, -5, -5, -5, -4,
-5, -5, -5, -4, -4, -3, -4, -3, -3, -3, -2, -2, -2, -1, -2, -1, -2, -1, -2, -2,
-2, -2, -3, -2, -2, -2, -1, -1, -1, 0, -1, -1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 2,
1, 2, 2, 1, 1, 2, 1, 2, 3, 3, 3, 3, 4, 4, 3, 4, 4, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1,
1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 3, 3,
3, 4, 3, 3, 3, 4, 3, 4, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 4, 4, 4, 4, 4, 4, 5, 5,
5, 6, 5, 6, 6, 5, 5, 6, 6, 7, 6, 5, 6, 6, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 7,
7, 7, 7, 6, 7, 7, 7, 7, 6, 7, 5, 5, 5, 5, 5, 4, 5, 4, 5, 4, 4, 4, 3, 3, 4, 3, 3,
3, 4, 3, 4, 3, 3, 4, 4, 3, 4, 3, 3, 2, 3, 1, 1, 1, 1, 0, 0, 1, 0, 0, -1, -1, -3,
-2, -5, -5, -8, -7, -10, -10, -15, -13, -17, -16, -21, -18, -22, -20, -25, -123,
-128, -125, -126, -118, -116, -106, -103, -91, -86, -73, -67, -55, -49, -37,
-31, -20, -14, -4, 0, };

#endif /* AKWF_1787_512_H_ */
