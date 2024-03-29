#ifndef AKWF_1212_512_H_
#define AKWF_1212_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1212_512_NUM_CELLS 512
#define AKWF_1212_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1212_512_DATA [] = {1,
6, 10, 15, 20, 24, 29, 35, 39, 45, 50, 55, 60, 64, 68, 73, 77, 80, 84, 88, 91,
96, 100, 104, 107, 111, 114, 118, 120, 122, 124, 124, 126, 126, 126, 127, 127,
127, 127, 127, 127, 127, 127, 125, 122, 120, 118, 115, 112, 108, 104, 101, 98,
94, 91, 87, 83, 80, 74, 70, 66, 61, 56, 50, 46, 41, 36, 32, 28, 23, 18, 14, 10,
6, 1, -3, -8, -12, -16, -20, -24, -29, -33, -36, -41, -45, -50, -54, -58, -61,
-65, -68, -71, -73, -74, -76, -77, -77, -78, -80, -81, -81, -84, -86, -87, -90,
-91, -94, -94, -95, -96, -95, -94, -92, -90, -89, -85, -83, -80, -78, -76, -74,
-71, -68, -66, -64, -62, -59, -57, -56, -54, -54, -51, -49, -48, -46, -44, -41,
-38, -35, -32, -28, -24, -21, -18, -14, -11, -8, -6, -4, -2, -1, 0, 3, 4, 5, 5,
7, 7, 7, 7, 7, 8, 8, 8, 10, 13, 15, 17, 19, 22, 24, 28, 30, 31, 31, 33, 32, 31,
29, 28, 25, 22, 20, 17, 15, 12, 10, 10, 8, 7, 8, 8, 9, 9, 11, 12, 13, 15, 15,
17, 17, 17, 15, 14, 13, 11, 10, 8, 6, 6, 3, 1, 2, 0, -2, -1, -3, -2, -3, -4, -4,
-4, -3, -4, -4, -4, -4, -5, -5, -5, -6, -8, -8, -8, -9, -9, -9, -8, -7, -7, -5,
-3, 0, 3, 6, 10, 14, 17, 20, 22, 24, 25, 26, 26, 25, 22, 21, 18, 15, 11, 8, 4,
1, -3, -5, -7, -9, -11, -12, -13, -12, -12, -12, -11, -8, -7, -5, -2, -1, 2, 4,
8, 10, 11, 14, 16, 19, 22, 24, 25, 27, 28, 29, 29, 29, 29, 27, 25, 23, 21, 19,
15, 11, 6, 1, -3, -8, -12, -15, -20, -23, -26, -29, -31, -31, -31, -31, -30,
-28, -26, -23, -19, -16, -11, -6, -1, 3, 9, 13, 17, 22, 26, 29, 31, 34, 35, 36,
36, 36, 34, 32, 30, 26, 23, 18, 14, 8, 3, -3, -8, -13, -18, -24, -28, -31, -34,
-37, -39, -42, -41, -43, -42, -40, -38, -35, -32, -29, -25, -21, -16, -13, -7,
-3, 1, 6, 11, 14, 18, 21, 22, 24, 26, 26, 27, 27, 26, 26, 25, 22, 20, 19, 17,
16, 13, 11, 8, 7, 5, 3, 3, 3, 2, 3, 3, 4, 5, 8, 10, 12, 15, 18, 20, 23, 27, 29,
32, 34, 38, 40, 42, 44, 45, 46, 47, 47, 46, 46, 45, 43, 42, 39, 36, 35, 31, 28,
25, 21, 18, 14, 9, 5, 2, -3, -6, -10, -15, -17, -21, -25, -28, -31, -35, -38,
-41, -45, -48, -50, -52, -54, -57, -58, -60, -62, -64, -66, -68, -70, -71, -72,
-74, -76, -77, -79, -80, -82, -82, -82, -83, -84, -85, -84, -85, -85, -85, -85,
-85, -85, -83, -82, -80, -79, -76, -74, -71, -68, -65, -60, -57, -54, -50, -47,
-43, -40, -36, -31, -26, -21, -17, -11, -7, -2, };

#endif /* AKWF_1212_512_H_ */
