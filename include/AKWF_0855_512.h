#ifndef AKWF_0855_512_H_
#define AKWF_0855_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0855_512_NUM_CELLS 512
#define AKWF_0855_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0855_512_DATA [] = {4,
10, 14, 20, 25, 30, 35, 40, 45, 49, 54, 57, 61, 65, 69, 72, 75, 78, 81, 83, 85,
86, 88, 90, 91, 91, 92, 92, 92, 91, 89, 87, 85, 82, 80, 78, 75, 73, 70, 67, 64,
61, 58, 55, 51, 48, 45, 42, 39, 36, 32, 29, 28, 25, 22, 19, 18, 15, 12, 11, 9,
7, 7, 5, 4, 2, 2, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, -1, 0, 0, 0,
0, 1, 0, 0, 0, 1, 0, -1, 1, 0, 0, 0, 0, -1, -1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, 4, 6, 7, 10, 13, 15, 18, 21, 24, 27, 30, 33,
37, 40, 44, 47, 51, 54, 57, 61, 64, 68, 71, 74, 79, 81, 85, 88, 91, 94, 97, 100,
102, 104, 107, 110, 112, 113, 116, 118, 119, 121, 122, 124, 124, 126, 126, 127,
127, 127, 127, 127, 126, 123, 121, 117, 114, 109, 105, 101, 96, 91, 86, 81, 76,
71, 65, 59, 54, 48, 41, 36, 30, 24, 18, 12, 6, 1, -5, -11, -16, -22, -26, -31,
-36, -40, -46, -50, -55, -58, -63, -66, -69, -74, -75, -78, -82, -83, -86, -87,
-88, -89, -91, -91, -92, -92, -91, -90, -88, -87, -85, -82, -80, -77, -75, -72,
-69, -67, -63, -60, -57, -54, -51, -47, -44, -41, -39, -35, -32, -29, -27, -25,
-22, -19, -16, -14, -13, -10, -9, -7, -6, -4, -3, -3, -1, -1, 0, -1, 0, -1, 0,
0, 0, -1, -1, 0, -1, -1, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0,
0, 0, -2, -4, -4, -6, -8, -11, -13, -15, -18, -22, -25, -28, -31, -35, -38, -41,
-44, -47, -52, -54, -58, -62, -65, -68, -71, -76, -79, -82, -85, -88, -91, -94,
-98, -100, -103, -105, -108, -110, -112, -115, -116, -118, -121, -122, -123,
-123, -124, -126, -127, -127, -128, -128, -128, -127, -125, -124, -120, -117,
-113, -108, -104, -100, -95, -90, -86, -80, -74, -70, -63, -57, -52, -46, -40,
-34, -28, -22, -17, -12, -5, -1, };

#endif /* AKWF_0855_512_H_ */
