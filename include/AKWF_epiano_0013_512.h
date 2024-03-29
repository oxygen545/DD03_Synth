#ifndef AKWF_epiano_0013_512_H_
#define AKWF_epiano_0013_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0013_512_NUM_CELLS 512
#define AKWF_epiano_0013_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0013_512_DATA
[] = {1, 5, 12, 16, 18, 20, 22, 24, 23, 24, 23, 23, 24, 25, 26, 26, 27, 30, 31,
33, 36, 40, 43, 48, 52, 59, 64, 70, 75, 81, 85, 90, 93, 94, 94, 96, 96, 94, 93,
92, 93, 94, 95, 96, 97, 100, 103, 105, 108, 108, 109, 111, 110, 109, 109, 108,
106, 104, 103, 101, 98, 96, 91, 88, 82, 77, 71, 65, 58, 52, 44, 37, 30, 23, 16,
8, 2, -5, -11, -18, -25, -30, -33, -38, -43, -45, -47, -49, -50, -53, -54, -56,
-57, -58, -59, -61, -62, -64, -63, -64, -63, -61, -60, -58, -56, -54, -53, -52,
-53, -54, -59, -64, -69, -77, -86, -95, -105, -112, -116, -121, -126, -128,
-126, -123, -121, -118, -113, -109, -104, -99, -96, -93, -91, -87, -86, -83,
-81, -80, -76, -71, -68, -64, -59, -56, -52, -49, -48, -48, -48, -49, -48, -47,
-47, -46, -42, -35, -29, -24, -17, -11, -5, 1, 4, 5, 6, 7, 6, 5, 3, 2, 1, 0, 0,
-2, -1, 0, 2, 4, 6, 10, 12, 15, 17, 14, 12, 10, 5, -1, -10, -19, -25, -29, -32,
-37, -39, -38, -34, -32, -29, -24, -20, -15, -11, -6, 0, 6, 11, 15, 20, 24, 27,
27, 24, 22, 21, 15, 11, 4, -2, -8, -13, -19, -26, -32, -38, -44, -51, -57, -63,
-69, -74, -79, -82, -84, -86, -87, -84, -81, -78, -72, -62, -53, -43, -33, -23,
-13, -3, 4, 8, 11, 14, 14, 11, 6, 4, -1, -5, -10, -13, -18, -18, -18, -19, -17,
-11, -4, 4, 11, 20, 31, 40, 49, 55, 59, 63, 67, 66, 63, 62, 59, 56, 53, 49, 45,
42, 41, 39, 36, 34, 31, 28, 25, 22, 18, 13, 10, 5, 2, -3, -6, -9, -12, -13, -17,
-18, -21, -23, -25, -28, -30, -33, -35, -38, -39, -39, -40, -40, -38, -35, -32,
-29, -26, -20, -16, -13, -7, -3, 2, 7, 9, 11, 13, 15, 14, 10, 10, 6, 5, 4, 0, 0,
2, 5, 9, 13, 18, 21, 26, 30, 30, 29, 28, 25, 20, 12, 6, -1, -7, -11, -17, -22,
-25, -24, -22, -20, -17, -9, -3, 4, 11, 17, 23, 28, 33, 34, 33, 35, 33, 29, 24,
18, 14, 6, -1, -9, -16, -23, -30, -38, -44, -46, -48, -52, -55, -51, -46, -43,
-40, -36, -32, -27, -25, -22, -23, -21, -22, -22, -21, -22, -22, -20, -16, -10,
-6, 1, 10, 19, 28, 38, 44, 54, 61, 67, 68, 71, 73, 72, 69, 65, 63, 59, 55, 51,
48, 45, 45, 44, 44, 44, 44, 45, 45, 45, 47, 46, 47, 48, 48, 47, 47, 46, 42, 40,
37, 33, 27, 19, 12, 4, -5, -14, -23, -32, -40, -48, -56, -62, -65, -68, -72,
-74, -74, -70, -66, -62, -55, -45, -33, -23, -10, 2, 17, 31, 42, 52, 60, 70, 75,
75, 76, 77, 74, 66, 60, 54, 46, 37, 27, 18, 10, 3, -4, -11, -15, -17, -18, -19,
-19, -15, -10, -6, -2, };

#endif /* AKWF_epiano_0013_512_H_ */
