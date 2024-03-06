#ifndef AKWF_1484_512_H_
#define AKWF_1484_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1484_512_NUM_CELLS 512
#define AKWF_1484_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1484_512_DATA [] = {1,
2, 4, 8, 13, 18, 24, 32, 40, 49, 57, 66, 75, 83, 91, 99, 105, 111, 117, 121,
124, 125, 127, 127, 127, 126, 126, 124, 121, 118, 115, 111, 107, 104, 100, 96,
92, 88, 84, 80, 77, 73, 70, 67, 63, 60, 57, 55, 52, 51, 48, 46, 43, 42, 41, 39,
37, 36, 35, 34, 34, 33, 33, 32, 30, 30, 31, 30, 29, 29, 29, 28, 28, 28, 28, 28,
28, 28, 28, 29, 28, 28, 29, 28, 28, 28, 27, 28, 28, 27, 27, 27, 28, 28, 27, 28,
28, 27, 27, 28, 27, 27, 27, 27, 27, 26, 26, 26, 26, 25, 25, 26, 25, 24, 25, 24,
25, 24, 24, 24, 23, 24, 23, 22, 22, 22, 23, 22, 22, 21, 21, 21, 20, 21, 21, 20,
20, 20, 20, 19, 19, 19, 18, 18, 18, 19, 17, 17, 18, 17, 17, 17, 17, 16, 17, 17,
16, 16, 16, 15, 15, 15, 15, 14, 14, 14, 15, 15, 14, 15, 14, 13, 14, 13, 13, 13,
13, 13, 12, 13, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10,
9, 10, 9, 10, 10, 8, 9, 8, 9, 9, 8, 8, 8, 8, 7, 8, 7, 7, 8, 7, 6, 7, 7, 6, 7, 6,
6, 6, 6, 6, 6, 5, 5, 4, 5, 5, 5, 5, 4, 4, 5, 4, 4, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3,
3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 0, -1, -4, -7, -11, -16, -21, -29, -36, -43, -51,
-57, -66, -73, -79, -87, -91, -97, -102, -105, -108, -111, -113, -113, -112,
-112, -111, -110, -108, -106, -103, -101, -98, -95, -92, -89, -86, -83, -80,
-77, -74, -71, -68, -66, -63, -61, -58, -57, -54, -52, -50, -49, -47, -46, -45,
-43, -42, -41, -40, -39, -38, -37, -37, -37, -36, -36, -35, -35, -34, -35, -34,
-34, -33, -34, -34, -32, -32, -33, -33, -33, -32, -32, -33, -33, -32, -32, -32,
-32, -32, -32, -32, -31, -31, -31, -31, -31, -30, -31, -31, -31, -31, -30, -30,
-30, -30, -29, -29, -29, -29, -29, -28, -28, -27, -28, -28, -28, -27, -26, -27,
-25, -26, -26, -25, -26, -25, -25, -25, -24, -24, -24, -24, -23, -22, -22, -23,
-22, -22, -21, -22, -21, -20, -21, -20, -20, -20, -21, -20, -20, -20, -19, -18,
-19, -18, -18, -18, -18, -18, -17, -17, -17, -17, -16, -16, -15, -17, -16, -16,
-15, -15, -15, -15, -14, -14, -15, -13, -15, -13, -13, -13, -13, -12, -12, -13,
-12, -12, -12, -11, -11, -11, -11, -11, -11, -11, -11, -9, -10, -10, -10, -10,
-9, -9, -10, -9, -9, -8, -9, -8, -8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -7,
-7, -6, -6, -6, -6, -6, -6, -5, -5, -5, -4, -5, -5, -5, -4, -5, -4, -4, -4, -4,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -3, -1, -2, 0, };

#endif /* AKWF_1484_512_H_ */