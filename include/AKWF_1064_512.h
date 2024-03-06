#ifndef AKWF_1064_512_H_
#define AKWF_1064_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1064_512_NUM_CELLS 512
#define AKWF_1064_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1064_512_DATA [] = {0,
-1, 0, 1, 0, 1, 0, 2, 1, 2, 2, 2, 2, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9, 10, 10, 11,
13, 15, 15, 17, 18, 20, 20, 22, 24, 26, 27, 28, 31, 32, 35, 36, 38, 40, 42, 44,
46, 48, 49, 51, 53, 56, 58, 60, 63, 65, 67, 69, 71, 74, 76, 78, 80, 82, 84, 87,
89, 90, 92, 94, 96, 97, 100, 101, 104, 105, 107, 108, 110, 112, 112, 114, 115,
118, 119, 119, 120, 121, 123, 124, 124, 125, 125, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126, 125,
125, 125, 124, 123, 123, 122, 121, 120, 120, 118, 118, 116, 116, 115, 112, 112,
110, 110, 107, 106, 105, 103, 101, 100, 99, 97, 95, 93, 91, 89, 87, 86, 83, 81,
79, 78, 75, 73, 71, 68, 67, 64, 62, 60, 58, 56, 53, 51, 49, 47, 44, 42, 41, 38,
37, 35, 33, 30, 29, 27, 25, 24, 22, 20, 19, 18, 16, 14, 13, 12, 10, 9, 8, 7, 5,
5, 4, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 0,
0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, 1, 0, 0, 0, 1, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1,
-2, -1, -2, -3, -3, -3, -4, -5, -5, -7, -7, -7, -8, -9, -10, -11, -12, -14, -15,
-16, -17, -19, -20, -21, -23, -24, -26, -27, -29, -31, -33, -34, -36, -38, -40,
-42, -44, -46, -48, -50, -52, -55, -57, -59, -61, -63, -66, -67, -70, -72, -73,
-76, -78, -80, -82, -84, -87, -89, -91, -93, -94, -96, -98, -100, -103, -104,
-105, -108, -109, -111, -112, -113, -115, -116, -117, -118, -121, -121, -121,
-122, -124, -125, -125, -125, -127, -126, -127, -128, -127, -128, -127, -128,
-128, -128, -128, -127, -128, -128, -127, -127, -127, -127, -126, -125, -126,
-125, -125, -125, -124, -124, -123, -122, -121, -121, -119, -117, -117, -115,
-115, -114, -113, -111, -110, -109, -108, -106, -104, -102, -101, -100, -98,
-97, -95, -92, -90, -88, -87, -85, -83, -81, -79, -77, -74, -73, -70, -69, -65,
-64, -62, -60, -57, -55, -53, -51, -49, -47, -45, -42, -40, -38, -36, -35, -32,
-31, -29, -27, -25, -23, -21, -19, -18, -17, -15, -14, -12, -12, -10, -8, -8,
-6, -5, -5, -4, -3, -2, -2, -2, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 1,
0, 0, 0, -1, 0, 0, 1, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, -1, 0, 0, 0, -1, 0, 1, 0, 0, 0, -1, 0, -1, 0, };

#endif /* AKWF_1064_512_H_ */
