#ifndef AKWF_1422_512_H_
#define AKWF_1422_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1422_512_NUM_CELLS 512
#define AKWF_1422_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1422_512_DATA [] = {1,
5, 7, 9, 10, 10, 10, 11, 11, 13, 14, 17, 20, 21, 20, 19, 16, 15, 16, 16, 20, 22,
25, 27, 27, 25, 24, 23, 22, 21, 21, 22, 25, 26, 28, 29, 28, 27, 24, 23, 24, 27,
29, 32, 31, 31, 30, 29, 30, 31, 33, 35, 37, 37, 38, 39, 42, 45, 46, 47, 45, 45,
45, 46, 49, 54, 56, 56, 56, 53, 53, 57, 60, 64, 64, 65, 64, 64, 66, 69, 73, 76,
77, 77, 76, 75, 77, 79, 80, 81, 80, 78, 78, 79, 82, 84, 85, 84, 82, 80, 79, 81,
84, 86, 85, 83, 81, 80, 80, 83, 85, 85, 84, 81, 80, 80, 82, 84, 84, 83, 81, 76,
75, 75, 77, 78, 81, 82, 82, 80, 75, 70, 63, 55, 51, 49, 50, 55, 58, 61, 61, 58,
57, 60, 67, 69, 63, 44, 13, -21, -50, -68, -69, -59, -51, -48, -55, -68, -81,
-87, -90, -90, -89, -94, -103, -111, -116, -118, -116, -118, -122, -126, -128,
-126, -117, -106, -95, -88, -87, -89, -91, -91, -89, -84, -78, -75, -73, -72,
-70, -69, -67, -65, -65, -65, -64, -62, -58, -55, -51, -52, -57, -66, -76, -83,
-89, -90, -87, -86, -85, -84, -82, -80, -77, -73, -71, -69, -68, -68, -62, -57,
-51, -48, -48, -52, -55, -58, -58, -57, -52, -49, -47, -47, -47, -46, -44, -42,
-40, -38, -37, -37, -34, -32, -29, -29, -29, -32, -33, -35, -34, -32, -29, -26,
-24, -24, -23, -22, -21, -20, -18, -15, -14, -12, -12, -13, -14, -16, -19, -23,
-25, -27, -26, -23, -20, -16, -14, -14, -15, -18, -20, -19, -17, -16, -14, -12,
-13, -14, -15, -14, -16, -17, -18, -16, -13, -8, -3, 1, 5, 4, 4, 4, 4, 4, 5, 7,
8, 8, 10, 9, 7, 4, 2, -1, -2, 1, 2, 5, 8, 7, 6, 4, 3, 2, 2, 3, 4, 5, 7, 5, 5, 3,
3, 1, 1, -1, 0, 1, 5, 9, 13, 16, 15, 13, 10, 9, 9, 12, 14, 16, 16, 13, 9, 6, 4,
5, 7, 10, 13, 15, 14, 13, 10, 7, 7, 6, 6, 7, 8, 7, 6, 4, 2, 1, 1, 2, 5, 8, 9, 9,
8, 6, 4, 2, 2, 3, 5, 7, 8, 10, 9, 9, 7, 5, 4, 4, 7, 8, 10, 10, 9, 5, 2, -1, -3,
-3, -2, 1, 3, 3, 2, 1, -2, -4, -5, -6, -5, -5, -4, -3, -1, -1, -2, -4, -7, -9,
-9, -7, -4, -2, 0, -1, -2, -5, -7, -7, -8, -7, -5, -3, -3, -3, -4, -6, -7, -9,
-9, -7, -6, -4, -3, -3, -4, -7, -10, -14, -17, -18, -17, -12, -10, -6, -6, -8,
-10, -12, -12, -12, -10, -9, -8, -6, -6, -3, -4, -5, -8, -12, -12, -12, -8, -5,
-2, -1, -2, -2, -5, -7, -8, -9, -9, -8, -7, -4, -3, -3, -4, -7, -9, -10, -10,
-9, -8, -5, -2, -2, -2, -2, -3, -4, -4, -4, -2, 0, };

#endif /* AKWF_1422_512_H_ */
