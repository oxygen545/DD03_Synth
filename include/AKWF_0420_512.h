#ifndef AKWF_0420_512_H_
#define AKWF_0420_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0420_512_NUM_CELLS 512
#define AKWF_0420_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0420_512_DATA [] = {2,
5, 9, 12, 16, 19, 23, 27, 30, 32, 35, 39, 40, 41, 41, 41, 39, 37, 35, 30, 27,
23, 19, 15, 11, 5, 2, -2, -7, -9, -12, -14, -16, -16, -17, -17, -17, -16, -14,
-13, -12, -9, -8, -7, -6, -5, -3, -2, 0, 0, 0, 0, 1, 1, 3, 3, 3, 3, 3, 3, 4, 4,
4, 3, 4, 5, 5, 6, 7, 6, 7, 7, 8, 8, 9, 10, 10, 11, 11, 11, 12, 12, 14, 14, 15,
15, 15, 16, 16, 18, 17, 19, 19, 19, 19, 20, 21, 20, 19, 18, 17, 16, 15, 14, 12,
9, 8, 8, 6, 3, 2, 1, 0, 0, -2, -2, -3, -4, -4, -5, -5, -5, -5, -6, -6, -7, -8,
-8, -8, -8, -9, -8, -10, -10, -10, -10, -10, -25, -72, -108, -121, -128, -125,
-115, -101, -82, -62, -42, -24, -5, 9, 22, 30, 36, 40, 40, 39, 36, 32, 25, 19,
13, 7, 1, -4, -7, -10, -13, -14, -15, -16, -16, -16, -15, -14, -13, -12, -11,
-10, -10, -8, -9, -7, -7, -5, -3, -3, 0, 2, 4, 7, 11, 14, 18, 20, 25, 28, 31,
34, 37, 38, 40, 41, 41, 40, 38, 37, 33, 30, 25, 21, 17, 13, 8, 4, 0, -3, -8,
-10, -13, -14, -16, -17, -17, -16, -16, -15, -13, -13, -12, -9, -8, -6, -5, -5,
-3, -1, -1, 0, 1, 2, 1, 2, 2, 2, 2, 3, 3, 4, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 7,
8, 9, 9, 4, -16, -54, -72, -80, -84, -80, -73, -62, -50, -36, -22, -8, 3, 12,
21, 27, 30, 31, 32, 30, 27, 24, 20, 15, 11, 6, 2, 0, -2, -4, -7, -8, -9, -8, -9,
-9, -8, -7, -7, -7, -7, -6, -6, -7, -6, -7, -8, -8, -9, -9, -9, -9, -9, -9, -8,
-6, -4, -2, 2, 6, 9, 11, 16, 19, 23, 27, 30, 33, 36, 39, 40, 41, 42, 41, 39, 38,
35, 32, 28, 24, 19, 15, 10, 6, 2, -2, -6, -9, -12, -14, -15, -16, -17, -17, -16,
-16, -14, -13, -12, -10, -9, -7, -5, -5, -3, -2, -1, 0, 0, 1, 2, 1, 2, 2, 3, 3,
3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 3, -16, -40, -65, -90, -102, -111, -111, -109,
-100, -88, -75, -59, -44, -29, -16, -4, 5, 13, 18, 21, 22, 21, 20, 17, 15, 11,
7, 5, 1, -1, -3, -4, -4, -4, -3, -2, 0, 2, 3, 6, 8, 10, 12, 15, 17, 18, 20, 22,
21, 22, 23, 22, 23, 22, 21, 20, 19, 18, 17, 15, 13, 12, 12, 11, 10, 10, 8, 9, 8,
8, 8, 7, 7, 6, 6, 7, 6, 6, 6, 5, 6, 4, 4, 3, 3, 2, 3, 2, 1, 0, 0, -1, -1, -1,
-2, -2, -4, -3, -5, -6, -6, -6, -7, -8, -8, -9, -10, -10, -10, -11, -11, -10,
-10, -10, -8, -6, -4, -2, -1, };

#endif /* AKWF_0420_512_H_ */
