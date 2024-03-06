#ifndef AKWF_1782_512_H_
#define AKWF_1782_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1782_512_NUM_CELLS 512
#define AKWF_1782_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1782_512_DATA [] = {5,
14, 21, 29, 36, 42, 47, 50, 54, 58, 59, 61, 62, 62, 60, 60, 58, 56, 54, 51, 49,
47, 44, 41, 38, 35, 33, 30, 28, 26, 24, 22, 21, 18, 18, 16, 14, 12, 10, 9, 6, 4,
1, -1, -3, -8, -10, -14, -18, -21, -24, -28, -32, -35, -38, -42, -44, -47, -49,
-50, -50, -51, -51, -50, -48, -46, -43, -39, -35, -31, -26, -22, -16, -10, -3,
3, 9, 16, 24, 30, 36, 42, 48, 53, 59, 63, 68, 72, 76, 78, 81, 84, 85, 88, 88,
90, 89, 89, 90, 89, 90, 89, 88, 87, 86, 84, 83, 82, 81, 79, 78, 77, 76, 74, 74,
72, 70, 69, 67, 65, 63, 62, 59, 58, 55, 52, 49, 47, 45, 42, 39, 37, 33, 30, 27,
25, 22, 20, 18, 16, 14, 13, 12, 10, 10, 10, 10, 10, 11, 12, 13, 15, 17, 18, 22,
23, 26, 29, 32, 35, 38, 41, 44, 46, 49, 51, 53, 56, 57, 59, 62, 62, 63, 65, 64,
64, 65, 65, 65, 65, 65, 63, 63, 63, 62, 60, 60, 59, 57, 55, 55, 54, 53, 51, 50,
49, 47, 46, 44, 42, 40, 39, 37, 33, 31, 29, 27, 25, 23, 21, 18, 16, 12, 10, 8,
6, 4, 1, -1, -3, -5, -7, -8, -10, -12, -12, -13, -14, -14, -14, -14, -15, -15,
-14, -14, -13, -12, -12, -12, -10, -9, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 0,
1, 2, 2, 3, 3, 3, 3, 4, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 1, 1, 1, -1, -1, -2, -2,
-4, -5, -6, -7, -8, -10, -12, -12, -13, -15, -16, -18, -19, -21, -22, -23, -25,
-25, -28, -29, -31, -31, -33, -34, -35, -36, -37, -38, -38, -39, -40, -41, -41,
-41, -41, -41, -41, -41, -42, -41, -41, -40, -39, -39, -37, -37, -36, -35, -33,
-32, -31, -29, -29, -27, -27, -25, -24, -23, -22, -22, -21, -20, -20, -18, -18,
-19, -18, -18, -17, -18, -17, -19, -18, -18, -19, -19, -19, -20, -20, -20, -21,
-21, -22, -23, -23, -23, -23, -24, -23, -24, -24, -25, -26, -26, -26, -25, -26,
-25, -27, -26, -27, -26, -26, -26, -26, -26, -25, -25, -24, -24, -24, -24, -23,
-23, -22, -22, -21, -22, -20, -19, -19, -18, -17, -16, -16, -14, -13, -12, -12,
-10, -9, -7, -6, -4, -2, -1, 0, 2, 4, 6, 6, 8, 10, 11, 12, 13, 14, 14, 15, 15,
15, 15, 15, 14, 14, 12, 11, 10, 8, 7, 5, 4, 1, -1, -3, -5, -8, -9, -12, -14,
-16, -18, -19, -22, -23, -25, -27, -28, -29, -31, -31, -32, -33, -33, -35, -35,
-36, -36, -36, -37, -37, -38, -40, -42, -44, -46, -49, -53, -57, -61, -66, -71,
-75, -80, -87, -92, -97, -102, -108, -111, -117, -120, -123, -126, -127, -128,
-128, -127, -125, -121, -118, -111, -106, -100, -92, -84, -75, -67, -58, -48,
-38, -27, -19, -9, -1, };

#endif /* AKWF_1782_512_H_ */