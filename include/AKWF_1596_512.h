#ifndef AKWF_1596_512_H_
#define AKWF_1596_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1596_512_NUM_CELLS 512
#define AKWF_1596_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1596_512_DATA [] = {0,
0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10, 11, 13,
14, 14, 16, 17, 19, 21, 21, 23, 25, 26, 28, 30, 32, 33, 35, 36, 40, 41, 44, 46,
47, 49, 51, 53, 55, 58, 60, 62, 65, 66, 69, 71, 73, 75, 77, 78, 81, 83, 85, 87,
90, 91, 93, 94, 97, 98, 101, 103, 104, 105, 107, 109, 110, 110, 112, 114, 114,
115, 118, 118, 119, 119, 120, 121, 122, 123, 124, 124, 124, 125, 125, 125, 126,
126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 126, 126, 126, 125, 124, 123, 123, 123, 121, 121, 119, 119, 117, 118,
116, 115, 115, 113, 112, 111, 109, 107, 107, 105, 105, 103, 101, 100, 99, 98,
95, 94, 93, 91, 90, 89, 87, 85, 85, 83, 81, 80, 79, 77, 76, 74, 73, 72, 70, 69,
67, 66, 65, 64, 62, 61, 60, 59, 58, 56, 56, 55, 52, 52, 51, 50, 49, 48, 48, 46,
46, 44, 44, 44, 43, 43, 42, 42, 42, 41, 41, 40, 39, 39, 39, 38, 37, 37, 37, 36,
36, 35, 35, 35, 34, 32, 32, 31, 30, 31, 30, 29, 29, 28, 28, 27, 26, 25, 24, 23,
23, 22, 22, 21, 19, 20, 18, 17, 16, 15, 15, 15, 13, 13, 11, 11, 10, 9, 9, 8, 7,
6, 5, 4, 3, 2, 1, 0, 0, -1, -2, -3, -4, -5, -6, -7, -8, -8, -8, -9, -11, -12,
-13, -14, -14, -15, -16, -17, -17, -18, -19, -20, -20, -21, -23, -22, -24, -24,
-25, -26, -26, -27, -28, -29, -29, -29, -30, -30, -31, -33, -33, -34, -34, -35,
-34, -35, -37, -36, -37, -37, -38, -39, -40, -39, -41, -40, -41, -41, -42, -42,
-43, -43, -44, -44, -45, -46, -46, -48, -48, -49, -50, -51, -52, -54, -54, -55,
-57, -58, -58, -60, -61, -62, -63, -65, -66, -67, -68, -70, -71, -73, -74, -75,
-77, -78, -80, -81, -83, -84, -86, -88, -88, -90, -91, -93, -95, -97, -97, -99,
-100, -102, -103, -104, -106, -107, -108, -110, -111, -112, -113, -114, -115,
-116, -117, -119, -119, -120, -121, -122, -122, -123, -124, -124, -125, -125,
-127, -127, -126, -127, -127, -128, -127, -128, -128, -128, -128, -128, -128,
-128, -127, -127, -127, -127, -127, -126, -126, -125, -125, -125, -124, -124,
-124, -122, -122, -122, -121, -120, -119, -118, -117, -116, -115, -113, -112,
-111, -110, -108, -107, -105, -104, -102, -100, -98, -97, -95, -93, -91, -89,
-88, -85, -83, -81, -79, -77, -75, -73, -70, -68, -67, -65, -63, -60, -58, -56,
-54, -52, -50, -47, -46, -43, -41, -39, -37, -35, -33, -31, -30, -29, -26, -25,
-23, -21, -20, -18, -18, -15, -15, -13, -12, -10, -10, -9, -8, -7, -6, -6, -5,
-5, -3, -3, -3, -2, -2, -2, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, };

#endif /* AKWF_1596_512_H_ */
