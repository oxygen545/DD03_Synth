#ifndef AKWF_1264_512_H_
#define AKWF_1264_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1264_512_NUM_CELLS 512
#define AKWF_1264_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1264_512_DATA [] = {0,
1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7, 7, 7, 9, 9, 10, 10, 11, 12, 12, 14, 14, 14, 15,
17, 17, 18, 18, 19, 20, 20, 20, 22, 21, 23, 23, 24, 24, 26, 26, 27, 27, 28, 30,
30, 31, 31, 33, 33, 34, 35, 35, 37, 38, 37, 39, 39, 40, 40, 41, 42, 43, 43, 45,
45, 46, 46, 48, 48, 49, 50, 51, 51, 52, 53, 54, 54, 55, 55, 57, 57, 58, 58, 59,
60, 60, 61, 62, 63, 64, 64, 65, 66, 67, 67, 68, 69, 70, 70, 71, 72, 72, 74, 73,
74, 74, 75, 75, 76, 76, 78, 78, 79, 79, 76, 20, -87, -128, -125, -123, -121,
-118, -116, -114, -112, -111, -109, -107, -105, -104, -101, -100, -98, -96, -94,
-92, -90, -89, -87, -85, -83, -82, -80, -77, -77, -75, -73, -71, -70, -68, -67,
-65, -64, -62, -60, -58, -57, -55, -54, -52, -51, -50, -49, -46, -46, -44, -43,
-42, -40, -38, -36, -36, -34, -33, -32, -31, -30, -29, -27, -26, -25, -24, -22,
-22, -20, -19, -18, -17, -16, -15, -13, -13, -12, -11, -10, -9, -8, -6, -6, -5,
-4, -4, -3, -1, 0, 0, 1, 3, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 12, 13,
13, 14, 14, 16, 15, 15, 16, 17, 17, 18, 19, 18, 19, 19, 19, 21, 20, 20, 22, 22,
22, 22, 23, 22, 23, 22, 23, 24, 23, 23, 23, 25, 24, 24, 24, 25, 24, 24, 26, 24,
24, 25, 25, 26, 25, 24, 25, 24, 25, 25, 25, 25, 24, 25, 24, 24, 24, 25, 23, 24,
25, 23, 23, 24, 23, 23, 23, 23, 22, 22, 22, 22, 22, 21, 21, 21, 21, 20, 20, 19,
19, 19, 19, 18, 18, 17, 18, 18, 17, 17, 16, 15, 15, 16, 15, 14, 13, 13, 13, 13,
13, 12, 12, 11, 11, 11, 10, 10, 9, 8, 9, 8, 8, 7, 7, 6, 7, 6, 5, 5, 5, 4, 4, 3,
2, 3, 2, 2, 1, 1, 0, 0, 0, -1, -2, -1, -2, -2, -2, -4, -4, -4, -5, -5, -5, -5,
-6, -6, -7, -7, -8, -8, -9, -9, -10, -10, -10, -10, -10, -11, -11, -12, -11,
-13, -12, -13, -13, -14, -14, -14, -14, -14, -14, -15, -15, -16, -15, -16, -17,
-17, -18, -18, -18, -18, -18, -18, -18, -18, -19, -19, -19, -20, -19, -19, -19,
-20, -21, -20, -20, -21, -20, -20, -20, -21, -21, -21, -20, -21, -20, -21, -21,
-20, -21, -21, -21, -20, -21, -21, -21, -20, -20, -21, -21, -20, -20, -20, -20,
-20, -20, -20, -20, -20, -19, -20, -19, -19, -19, -19, -18, -18, -18, -18, -18,
-18, -16, -18, -17, -16, -16, -16, -15, -16, -15, -15, -14, -13, -14, -13, -13,
-13, -12, -12, -11, -11, -10, -10, -10, -9, -9, -8, -8, -7, -7, -6, -6, -5, -6,
-5, -4, -4, -4, -2, -2, -1, -1, 0, 0, };

#endif /* AKWF_1264_512_H_ */
