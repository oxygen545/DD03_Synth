#ifndef AKWF_0931_512_H_
#define AKWF_0931_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0931_512_NUM_CELLS 512
#define AKWF_0931_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0931_512_DATA [] = {1,
5, 11, 16, 22, 27, 32, 38, 43, 49, 53, 58, 63, 67, 73, 76, 81, 85, 89, 93, 96,
100, 103, 106, 109, 111, 113, 115, 118, 119, 121, 123, 124, 125, 126, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 125, 124, 123, 122, 121, 119, 118, 116,
115, 114, 112, 110, 109, 106, 104, 103, 101, 98, 97, 94, 92, 91, 88, 87, 85, 83,
80, 78, 77, 75, 73, 72, 69, 68, 66, 64, 62, 61, 59, 56, 55, 53, 52, 50, 48, 48,
45, 43, 42, 40, 37, 37, 35, 33, 31, 29, 27, 26, 24, 22, 20, 18, 17, 14, 13, 10,
9, 7, 5, 3, 2, 0, -2, -3, -6, -7, -9, -10, -12, -14, -15, -16, -17, -18, -21,
-21, -22, -23, -24, -25, -24, -26, -26, -26, -26, -26, -26, -26, -25, -25, -25,
-24, -23, -22, -22, -20, -19, -17, -16, -13, -12, -10, -8, -6, -4, -2, 0, 2, 5,
7, 9, 11, 14, 16, 19, 21, 23, 25, 29, 30, 33, 35, 37, 40, 41, 43, 45, 47, 48,
50, 51, 53, 54, 55, 57, 56, 58, 58, 59, 59, 59, 60, 59, 59, 58, 58, 58, 58, 57,
56, 54, 54, 53, 51, 51, 48, 47, 46, 44, 43, 41, 40, 38, 37, 35, 33, 31, 30, 28,
27, 25, 23, 22, 20, 19, 17, 16, 15, 14, 13, 11, 11, 10, 9, 8, 7, 7, 5, 4, 5, 4,
3, 3, 2, 2, 2, 2, 1, 0, 1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -3, -2, -3, -4,
-4, -5, -6, -6, -7, -8, -9, -10, -11, -12, -14, -14, -16, -17, -19, -20, -21,
-23, -25, -26, -27, -29, -31, -32, -34, -35, -38, -39, -41, -42, -44, -45, -46,
-48, -49, -51, -51, -54, -54, -56, -56, -57, -57, -58, -59, -59, -59, -60, -60,
-59, -59, -59, -58, -58, -56, -56, -55, -53, -52, -50, -49, -48, -46, -44, -42,
-40, -38, -36, -34, -31, -29, -27, -26, -22, -20, -18, -15, -13, -11, -8, -6,
-3, -2, 1, 3, 5, 7, 9, 11, 13, 14, 16, 18, 19, 21, 21, 23, 23, 24, 25, 26, 26,
26, 26, 27, 26, 25, 26, 26, 25, 24, 23, 22, 21, 21, 20, 19, 18, 15, 14, 13, 11,
10, 7, 7, 5, 3, 1, -1, -3, -4, -6, -8, -9, -12, -13, -16, -18, -20, -21, -23,
-25, -26, -28, -30, -32, -33, -35, -38, -39, -41, -43, -44, -46, -48, -50, -51,
-53, -54, -55, -57, -60, -61, -63, -64, -67, -69, -70, -72, -74, -76, -77, -79,
-81, -83, -85, -87, -89, -92, -94, -96, -97, -99, -101, -103, -105, -107, -109,
-111, -112, -114, -115, -117, -118, -121, -121, -122, -123, -124, -126, -126,
-126, -127, -127, -127, -128, -128, -128, -127, -126, -125, -125, -123, -123,
-120, -119, -117, -115, -113, -110, -107, -105, -101, -98, -95, -91, -87, -84,
-79, -75, -70, -66, -61, -56, -50, -46, -41, -35, -31, -25, -20, -14, -9, -3, };

#endif /* AKWF_0931_512_H_ */
