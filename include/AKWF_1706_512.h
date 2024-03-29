#ifndef AKWF_1706_512_H_
#define AKWF_1706_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1706_512_NUM_CELLS 512
#define AKWF_1706_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1706_512_DATA [] = {2,
8, 14, 21, 27, 33, 38, 43, 48, 52, 54, 57, 58, 58, 59, 61, 60, 61, 62, 63, 64,
65, 67, 69, 72, 75, 76, 79, 82, 86, 88, 90, 92, 94, 95, 96, 96, 97, 96, 96, 95,
94, 91, 89, 87, 84, 81, 79, 76, 73, 70, 67, 64, 62, 60, 59, 57, 55, 53, 52, 52,
52, 51, 51, 51, 51, 52, 51, 52, 52, 52, 52, 53, 53, 53, 53, 51, 52, 50, 49, 49,
47, 45, 43, 42, 39, 38, 36, 34, 32, 30, 28, 26, 25, 23, 20, 19, 18, 16, 16, 14,
12, 12, 12, 12, 10, 10, 10, 9, 10, 9, 8, 8, 8, 7, 7, 7, 6, 6, 5, 4, 3, 2, 3, 3,
4, 5, 7, 9, 13, 17, 22, 27, 32, 37, 42, 48, 53, 58, 63, 66, 69, 72, 74, 75, 74,
74, 72, 70, 67, 64, 59, 55, 50, 46, 40, 35, 31, 27, 22, 18, 15, 11, 9, 8, 6, 4,
5, 4, 6, 6, 7, 8, 11, 12, 14, 16, 18, 20, 21, 23, 23, 25, 25, 25, 24, 25, 23,
22, 20, 18, 15, 13, 11, 8, 6, 3, 0, -3, -5, -8, -9, -11, -13, -15, -16, -18,
-19, -19, -19, -19, -19, -19, -19, -18, -17, -17, -16, -17, -16, -15, -16, -15,
-16, -15, -15, -16, -16, -17, -17, -19, -19, -21, -22, -24, -25, -27, -28, -29,
-31, -32, -34, -34, -35, -35, -37, -38, -39, -41, -43, -47, -50, -52, -57, -63,
-68, -73, -79, -85, -91, -97, -103, -109, -114, -118, -121, -125, -126, -128,
-128, -127, -124, -120, -115, -109, -100, -92, -82, -72, -61, -51, -41, -30,
-20, -11, -2, 5, 10, 16, 19, 21, 22, 21, 18, 15, 11, 6, 0, -7, -14, -21, -29,
-35, -43, -49, -54, -60, -65, -69, -72, -74, -74, -74, -74, -71, -68, -65, -61,
-57, -52, -47, -42, -37, -33, -28, -24, -19, -17, -14, -11, -10, -9, -9, -10,
-11, -12, -15, -17, -21, -23, -26, -30, -34, -38, -41, -44, -48, -50, -54, -55,
-57, -58, -58, -59, -58, -58, -57, -56, -54, -53, -50, -48, -46, -44, -41, -39,
-37, -36, -34, -33, -33, -31, -31, -31, -31, -32, -32, -33, -33, -34, -33, -32,
-31, -29, -27, -23, -19, -15, -11, -5, 0, 5, 10, 16, 20, 24, 29, 31, 34, 37, 38,
38, 38, 37, 36, 34, 32, 29, 26, 22, 19, 16, 12, 8, 5, 2, -1, -5, -7, -8, -9,
-10, -12, -11, -10, -10, -9, -7, -6, -4, -2, -1, 1, 4, 5, 6, 8, 9, 10, 11, 12,
12, 11, 10, 10, 9, 8, 6, 3, 2, 0, -3, -4, -7, -8, -11, -12, -14, -15, -17, -19,
-19, -20, -21, -20, -21, -20, -21, -20, -20, -20, -19, -18, -18, -17, -16, -16,
-16, -14, -15, -14, -14, -14, -15, -15, -16, -17, -17, -18, -20, -20, -21, -22,
-23, -24, -26, -26, -28, -29, -30, -30, -31, -31, -30, -30, -28, -24, -22, -17,
-13, -8, -2, };

#endif /* AKWF_1706_512_H_ */
