#ifndef AKWF_1826_512_H_
#define AKWF_1826_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1826_512_NUM_CELLS 512
#define AKWF_1826_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1826_512_DATA [] = {0,
3, 7, 9, 12, 15, 18, 21, 23, 24, 27, 28, 30, 31, 33, 34, 35, 37, 38, 38, 39, 40,
40, 41, 40, 41, 42, 42, 42, 42, 42, 42, 42, 42, 42, 41, 42, 41, 41, 40, 40, 40,
39, 39, 38, 38, 38, 37, 38, 36, 35, 36, 34, 34, 34, 33, 32, 32, 32, 32, 32, 30,
30, 28, 25, 24, 22, 21, 18, 17, 15, 14, 13, 11, 10, 9, 9, 7, 7, 6, 5, 5, 4, 3,
2, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -5, -5, -5, -5, -6, -7, -6, -7,
-8, -7, -7, -8, -8, -8, -9, -8, -9, -8, -9, -9, -9, -8, -9, -8, -8, -7, -8, -7,
-8, -6, -5, -6, -5, -4, -3, -2, 0, 1, 3, 4, 6, 8, 10, 12, 15, 18, 22, 25, 29,
32, 37, 41, 47, 51, 56, 62, 68, 73, 79, 84, 90, 96, 101, 106, 110, 114, 118,
121, 124, 126, 127, 127, 127, 127, 126, 125, 122, 120, 115, 112, 108, 104, 99,
94, 89, 84, 80, 74, 69, 63, 59, 53, 48, 44, 39, 35, 30, 26, 23, 19, 15, 12, 8,
5, 2, -1, -4, -7, -10, -12, -14, -17, -20, -22, -24, -26, -27, -30, -32, -33,
-35, -36, -37, -39, -40, -42, -43, -44, -44, -45, -45, -46, -46, -46, -45, -45,
-45, -45, -45, -44, -44, -42, -42, -40, -40, -39, -38, -35, -34, -33, -31, -30,
-27, -26, -25, -22, -21, -18, -16, -14, -12, -10, -8, -6, -3, -1, 0, 3, 5, 5, 6,
7, 7, 7, 7, 5, 3, 1, -2, -5, -8, -12, -17, -22, -27, -32, -37, -42, -48, -51,
-55, -58, -60, -62, -64, -64, -64, -63, -63, -61, -60, -58, -57, -55, -53, -50,
-49, -46, -44, -42, -39, -37, -32, -32, -28, -29, -24, -27, -18, -33, 65, 82,
-33, -25, -24, -20, -20, -17, -15, -15, -13, -11, -10, -8, -5, -4, -2, -1, 1, 3,
7, 8, 11, 13, 16, 19, 22, 24, 28, 31, 35, 39, 42, 46, 50, 53, 55, 58, 59, 60,
59, 60, 57, 55, 52, 50, 45, 42, 36, 32, 28, 23, 18, 14, 10, 5, 2, -2, -5, -8,
-11, -12, -15, -16, -17, -18, -18, -20, -19, -20, -20, -18, -18, -17, -17, -17,
-15, -13, -12, -11, -9, -8, -7, -6, -5, -3, -1, 0, 1, 2, 4, 5, 6, 7, 8, 10, 11,
12, 12, 14, 14, 15, 15, 15, 16, 15, 16, 16, 16, 16, 15, 14, 14, 14, 13, 12, 12,
11, 10, 10, 9, 8, 7, 5, 4, 4, 2, 1, 0, -2, -4, -6, -7, -10, -12, -14, -16, -19,
-21, -25, -27, -31, -34, -38, -42, -47, -51, -57, -62, -67, -72, -78, -82, -88,
-93, -98, -103, -107, -112, -116, -118, -121, -123, -125, -125, -125, -125,
-123, -121, -120, -117, -115, -109, -106, -102, -96, -90, -86, -81, -76, -70,
-64, -58, -54, -47, -43, -37, -32, -27, -23, -18, -14, -10, -6, -2, };

#endif /* AKWF_1826_512_H_ */
