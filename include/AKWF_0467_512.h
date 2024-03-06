#ifndef AKWF_0467_512_H_
#define AKWF_0467_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0467_512_NUM_CELLS 512
#define AKWF_0467_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0467_512_DATA [] = {3,
15, 27, 38, 49, 60, 70, 81, 89, 97, 105, 112, 118, 121, 125, 127, 127, 127, 127,
125, 124, 121, 117, 114, 110, 104, 100, 94, 89, 83, 77, 72, 66, 61, 55, 50, 44,
39, 35, 30, 25, 20, 17, 12, 8, 3, -1, -4, -7, -10, -12, -15, -17, -20, -22, -24,
-26, -27, -29, -30, -31, -32, -32, -34, -34, -34, -34, -33, -33, -32, -32, -32,
-30, -30, -28, -27, -25, -24, -21, -20, -19, -16, -14, -12, -10, -8, -6, -4, -1,
1, 4, 5, 8, 10, 11, 13, 15, 18, 19, 22, 24, 25, 27, 28, 30, 30, 31, 31, 32, 32,
33, 32, 33, 31, 30, 30, 29, 28, 26, 26, 24, 22, 20, 19, 17, 15, 13, 11, 8, 7, 5,
4, 2, -1, -2, -5, -6, -8, -10, -12, -13, -15, -16, -18, -18, -20, -21, -22, -23,
-23, -24, -25, -26, -26, -26, -26, -26, -26, -26, -27, -25, -25, -26, -24, -24,
-24, -22, -22, -22, -21, -21, -22, -22, -23, -23, -23, -22, -21, -20, -19, -17,
-17, -16, -15, -14, -13, -12, -10, -10, -8, -6, -4, -2, -1, 0, 1, 2, 4, 4, 6, 5,
7, 7, 7, 7, 8, 8, 8, 6, 5, 5, 4, 3, 2, 1, 0, -2, -3, -4, -6, -7, -8, -10, -11,
-13, -14, -16, -17, -19, -20, -22, -23, -25, -24, -25, -25, -26, -25, -25, -25,
-25, -24, -23, -23, -21, -21, -19, -18, -16, -13, -12, -10, -8, -7, -5, -3, -2,
0, 2, 3, 5, 7, 8, 10, 11, 12, 13, 14, 15, 16, 15, 16, 16, 16, 17, 16, 17, 16,
17, 16, 16, 16, 16, 15, 15, 14, 13, 12, 11, 12, 10, 9, 9, 8, 7, 7, 7, 5, 4, 1,
-1, -4, -5, -6, -8, -8, -9, -9, -9, -10, -11, -11, -12, -12, -12, -12, -12, -12,
-10, -10, -9, -8, -8, -6, -4, -5, -3, -2, -1, 0, 0, 1, 2, 4, 4, 6, 6, 6, 7, 7,
8, 9, 9, 10, 10, 10, 11, 11, 12, 11, 11, 12, 12, 13, 13, 13, 13, 12, 13, 13, 12,
11, 10, 9, 9, 7, 6, 5, 5, 3, 2, 0, -2, -4, -6, -7, -9, -11, -12, -14, -14, -17,
-18, -20, -20, -22, -22, -23, -24, -24, -24, -24, -25, -25, -25, -24, -24, -23,
-23, -23, -22, -21, -20, -19, -19, -17, -17, -15, -14, -13, -13, -12, -11, -9,
-8, -7, -7, -5, -4, -3, -3, -1, -1, 0, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4,
4, 4, 5, 5, 6, 7, 6, 7, 7, 8, 9, 10, 9, 11, 10, 11, 11, 10, 11, 10, 10, 10, 9,
9, 9, 8, 8, 6, 6, 5, 4, 3, 1, 1, 0, -2, -3, -3, -5, -5, -6, -8, -8, -9, -10,
-12, -14, -16, -20, -26, -35, -45, -57, -69, -79, -89, -96, -98, -101, -101,
-99, -98, -96, -94, -90, -85, -79, -72, -63, -53, -42, -30, -17, -5, };

#endif /* AKWF_0467_512_H_ */