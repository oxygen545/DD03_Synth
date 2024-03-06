#ifndef AKWF_0155_512_H_
#define AKWF_0155_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0155_512_NUM_CELLS 512
#define AKWF_0155_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0155_512_DATA [] = {5,
14, 23, 33, 43, 54, 63, 72, 78, 83, 87, 91, 92, 91, 90, 88, 86, 85, 82, 80, 80,
80, 80, 80, 81, 81, 81, 81, 79, 79, 77, 74, 72, 69, 66, 63, 63, 61, 62, 64, 68,
74, 80, 86, 95, 102, 109, 115, 122, 126, 127, 127, 125, 123, 118, 112, 104, 96,
88, 81, 75, 69, 66, 63, 61, 61, 62, 63, 64, 66, 68, 69, 69, 68, 66, 64, 60, 57,
54, 49, 46, 44, 42, 42, 43, 45, 47, 50, 54, 59, 62, 66, 69, 71, 71, 71, 70, 70,
67, 65, 63, 62, 61, 61, 62, 63, 66, 69, 73, 77, 80, 83, 85, 84, 84, 80, 75, 70,
64, 57, 50, 42, 35, 29, 25, 22, 21, 23, 25, 29, 33, 38, 45, 51, 55, 60, 62, 63,
64, 62, 59, 54, 49, 44, 39, 32, 27, 23, 19, 16, 13, 11, 8, 7, 6, 3, 1, -3, -5,
-9, -13, -16, -20, -22, -25, -25, -25, -23, -19, -14, -8, -1, 7, 16, 23, 31, 37,
42, 44, 46, 45, 42, 38, 32, 26, 19, 10, 5, 0, -5, -9, -12, -11, -13, -10, -9,
-7, -5, -4, -2, -2, -3, -5, -8, -11, -16, -19, -23, -28, -30, -32, -33, -33,
-32, -29, -28, -24, -20, -17, -14, -13, -12, -10, -12, -13, -16, -18, -19, -22,
-25, -25, -25, -25, -23, -21, -17, -13, -10, -6, -4, -1, -1, -2, -5, -8, -13,
-19, -25, -32, -39, -44, -49, -53, -54, -55, -52, -50, -45, -39, -33, -25, -19,
-13, -9, -5, -3, -2, -4, -7, -10, -14, -19, -24, -30, -36, -40, -44, -48, -51,
-53, -56, -58, -60, -61, -65, -69, -73, -77, -81, -86, -90, -95, -97, -99, -100,
-99, -97, -92, -88, -81, -75, -68, -61, -55, -50, -45, -43, -42, -45, -48, -52,
-59, -65, -72, -79, -86, -91, -95, -98, -99, -99, -98, -96, -92, -89, -85, -82,
-78, -77, -75, -75, -75, -77, -77, -79, -79, -81, -81, -79, -77, -73, -69, -63,
-57, -52, -44, -36, -31, -25, -19, -16, -13, -11, -9, -7, -6, -6, -3, -1, 2, 6,
10, 16, 21, 28, 34, 41, 46, 50, 52, 54, 52, 51, 48, 44, 39, 33, 27, 24, 20, 18,
17, 17, 19, 24, 28, 35, 43, 50, 56, 62, 68, 72, 74, 75, 74, 72, 68, 64, 59, 54,
49, 44, 39, 35, 32, 29, 27, 25, 24, 21, 20, 16, 14, 11, 6, 3, -1, -6, -10, -12,
-13, -14, -12, -9, -5, 0, 6, 14, 21, 29, 35, 40, 44, 44, 45, 43, 40, 35, 29, 21,
14, 5, -2, -8, -12, -17, -20, -22, -22, -21, -19, -18, -16, -15, -14, -15, -15,
-18, -20, -24, -27, -32, -36, -40, -42, -44, -45, -45, -42, -41, -37, -33, -30,
-26, -22, -18, -16, -15, -13, -13, -14, -15, -16, -17, -17, -16, -15, -13, -9,
-5, -1, 5, 11, 16, 20, 24, 27, 27, 27, 25, 22, 18, 14, 10, 4, 2, -2, -3, -3, 0,
1, };

#endif /* AKWF_0155_512_H_ */