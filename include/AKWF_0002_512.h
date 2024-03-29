#ifndef AKWF_0002_512_H_
#define AKWF_0002_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0002_512_NUM_CELLS 512
#define AKWF_0002_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0002_512_DATA [] = {0,
6, 13, 19, 28, 35, 43, 50, 58, 65, 71, 77, 83, 89, 94, 98, 102, 107, 109, 112,
115, 118, 119, 120, 121, 122, 123, 122, 123, 122, 122, 120, 119, 117, 116, 113,
110, 107, 104, 100, 97, 93, 88, 84, 79, 74, 70, 64, 59, 53, 48, 42, 37, 31, 27,
22, 17, 13, 9, 5, 2, 0, -3, -5, -8, -10, -13, -16, -17, -20, -21, -23, -24, -25,
-25, -26, -26, -26, -26, -26, -25, -24, -23, -23, -21, -20, -19, -18, -16, -15,
-13, -12, -10, -8, -7, -6, -4, -3, -2, -1, -1, 1, 1, 3, 3, 4, 5, 5, 6, 6, 6, 6,
7, 7, 6, 6, 6, 6, 6, 4, 4, 3, 3, 2, 2, 1, 0, 0, -1, -2, -3, -3, -4, -4, -5, -6,
-7, -7, -7, -7, -9, -9, -8, -9, -8, -8, -7, -7, -6, -6, -6, -5, -3, -3, -2, -1,
1, 2, 3, 4, 7, 8, 10, 12, 15, 16, 19, 22, 23, 25, 28, 30, 32, 34, 37, 38, 39,
41, 42, 44, 45, 45, 46, 46, 46, 46, 46, 45, 43, 43, 41, 40, 38, 36, 36, 32, 30,
27, 25, 22, 18, 16, 12, 9, 6, 3, 0, -1, -5, -8, -12, -15, -20, -23, -27, -30,
-34, -38, -42, -45, -48, -51, -54, -56, -58, -61, -62, -64, -64, -65, -66, -66,
-65, -66, -64, -63, -62, -60, -58, -57, -54, -51, -48, -46, -42, -39, -35, -31,
-27, -23, -18, -14, -11, -7, -3, 0, 2, 5, 9, 13, 17, 21, 25, 29, 33, 38, 40, 44,
48, 50, 52, 56, 58, 60, 60, 61, 62, 63, 64, 64, 64, 62, 61, 61, 59, 58, 55, 53,
51, 48, 46, 44, 39, 36, 34, 30, 26, 23, 19, 16, 12, 9, 5, 3, 1, -2, -4, -7, -10,
-13, -15, -19, -21, -23, -26, -29, -30, -32, -34, -36, -37, -38, -39, -39, -40,
-39, -39, -40, -38, -38, -37, -36, -35, -34, -32, -30, -29, -28, -26, -25, -22,
-20, -18, -17, -15, -13, -12, -9, -8, -6, -6, -3, -2, -2, -1, 0, 0, 1, 2, 3, 3,
3, 4, 4, 5, 4, 5, 4, 4, 4, 3, 3, 2, 1, 1, 1, 0, -1, -1, -1, -2, -3, -4, -5, -6,
-6, -7, -8, -8, -9, -10, -11, -10, -11, -10, -11, -10, -10, -10, -8, -8, -7, -7,
-7, -6, -4, -4, -2, -1, 1, 2, 3, 4, 7, 9, 10, 12, 15, 16, 18, 21, 23, 25, 27,
29, 31, 33, 34, 36, 37, 38, 39, 40, 39, 40, 39, 38, 37, 36, 35, 33, 32, 30, 27,
24, 21, 18, 15, 11, 7, 4, 1, -3, -5, -11, -16, -21, -26, -32, -37, -44, -50,
-55, -62, -68, -73, -79, -84, -90, -94, -98, -103, -107, -110, -113, -117, -119,
-120, -123, -124, -125, -127, -127, -128, -128, -128, -127, -127, -126, -125,
-123, -120, -118, -115, -113, -109, -104, -99, -95, -89, -84, -77, -70, -63,
-56, -48, -40, -33, -24, -17, -10, -3, };

#endif /* AKWF_0002_512_H_ */
