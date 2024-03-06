#ifndef AKWF_1279_512_H_
#define AKWF_1279_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1279_512_NUM_CELLS 512
#define AKWF_1279_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1279_512_DATA [] = {1,
3, 5, 9, 11, 14, 18, 20, 23, 25, 28, 30, 31, 34, 35, 37, 38, 38, 39, 39, 39, 38,
37, 36, 35, 33, 31, 30, 28, 27, 26, 24, 22, 22, 21, 20, 20, 18, 19, 18, 18, 19,
19, 20, 21, 22, 24, 25, 27, 28, 30, 33, 33, 36, 38, 38, 40, 42, 43, 45, 45, 45,
46, 47, 47, 47, 48, 49, 48, 48, 49, 49, 49, 48, 49, 49, 49, 49, 50, 51, 53, 54,
54, 57, 58, 60, 62, 64, 65, 68, 69, 72, 74, 77, 80, 81, 84, 87, 88, 91, 93, 96,
97, 100, 101, 102, 104, 105, 106, 105, 106, 107, 107, 106, 106, 105, 104, 102,
101, 101, 99, 97, 97, 94, 92, 91, 89, 88, 86, 84, 81, 79, 77, 74, 72, 70, 67,
64, 61, 59, 56, 53, 50, 47, 44, 41, 39, 36, 34, 31, 29, 25, 22, 20, 18, 16, 13,
10, 7, 4, 1, -1, -4, -8, -9, -13, -16, -17, -20, -22, -24, -25, -26, -28, -28,
-29, -30, -29, -30, -30, -31, -30, -31, -31, -31, -31, -31, -31, -31, -30, -29,
-29, -28, -26, -24, -24, -23, -22, -21, -20, -18, -15, -15, -14, -12, -11, -10,
-8, -7, -5, -4, -1, 1, 3, 5, 7, 10, 13, 16, 18, 21, 23, 26, 28, 31, 33, 34, 36,
38, 39, 41, 42, 43, 44, 46, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 55, 54, 55,
55, 55, 54, 53, 52, 50, 49, 47, 45, 43, 40, 39, 36, 34, 31, 29, 27, 25, 21, 19,
16, 13, 10, 7, 4, 0, -3, -7, -11, -15, -20, -23, -28, -32, -36, -40, -45, -49,
-53, -56, -60, -64, -68, -71, -75, -79, -82, -86, -90, -92, -95, -100, -103,
-105, -108, -111, -114, -116, -119, -121, -123, -125, -125, -126, -127, -128,
-128, -128, -128, -127, -127, -127, -126, -124, -124, -124, -122, -121, -120,
-118, -119, -117, -117, -114, -114, -112, -112, -111, -110, -109, -107, -106,
-105, -103, -102, -101, -98, -96, -96, -93, -91, -89, -87, -84, -82, -80, -77,
-74, -72, -70, -68, -64, -63, -61, -59, -56, -54, -52, -50, -48, -46, -45, -45,
-42, -43, -42, -40, -40, -39, -38, -36, -36, -35, -34, -32, -30, -30, -28, -27,
-24, -23, -20, -19, -16, -15, -12, -10, -8, -5, -3, -3, 0, 1, 4, 4, 6, 6, 7, 8,
8, 8, 7, 8, 7, 6, 5, 5, 4, 3, 2, 2, 1, 0, -2, -1, -2, -1, -2, 0, 0, 0, 1, 2, 3,
4, 6, 7, 9, 9, 10, 11, 11, 12, 13, 13, 12, 12, 11, 10, 8, 7, 6, 3, 2, 0, -3, -5,
-9, -11, -13, -17, -19, -21, -23, -24, -25, -25, -25, -26, -25, -25, -23, -22,
-21, -19, -17, -15, -13, -10, -9, -6, -4, -2, -2, 0, 1, 2, 4, 4, 4, 4, 3, 3, 2,
1, 0, -1, -3, -4, -5, -6, -8, -8, -9, -9, -9, -9, -9, -9, -7, -5, -4, -2, 0, };

#endif /* AKWF_1279_512_H_ */
