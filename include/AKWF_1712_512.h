#ifndef AKWF_1712_512_H_
#define AKWF_1712_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1712_512_NUM_CELLS 512
#define AKWF_1712_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1712_512_DATA [] = {0,
4, 7, 10, 11, 13, 15, 17, 20, 23, 25, 27, 30, 34, 36, 37, 40, 41, 43, 45, 47,
49, 50, 52, 54, 55, 58, 60, 62, 64, 65, 65, 66, 66, 65, 65, 63, 62, 62, 63, 64,
63, 64, 66, 66, 67, 68, 70, 70, 70, 71, 72, 73, 72, 74, 74, 72, 74, 72, 72, 70,
69, 69, 67, 65, 64, 62, 61, 59, 58, 54, 52, 52, 49, 48, 46, 44, 41, 39, 36, 34,
30, 29, 27, 25, 23, 22, 21, 20, 20, 19, 19, 19, 19, 18, 19, 19, 19, 19, 20, 20,
20, 21, 22, 24, 25, 26, 28, 30, 31, 33, 33, 36, 36, 37, 40, 40, 41, 42, 43, 44,
46, 47, 49, 51, 52, 55, 57, 58, 60, 62, 65, 67, 70, 72, 75, 79, 81, 85, 89, 92,
94, 98, 100, 104, 107, 110, 112, 113, 114, 115, 116, 117, 119, 119, 120, 120,
120, 120, 120, 120, 122, 121, 122, 122, 123, 123, 124, 122, 123, 123, 124, 124,
124, 123, 121, 119, 118, 117, 115, 116, 113, 113, 112, 111, 111, 109, 108, 109,
108, 107, 107, 106, 105, 103, 103, 102, 100, 99, 98, 97, 95, 95, 93, 92, 90, 89,
87, 86, 84, 83, 80, 78, 76, 73, 69, 68, 66, 62, 59, 55, 51, 48, 45, 42, 38, 36,
33, 31, 29, 26, 25, 23, 22, 19, 18, 16, 15, 13, 12, 11, 9, 7, 6, 6, 5, 5, 4, 4,
5, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 10, 8, 8, 8, 6, 4, 3, 1, 1, 0, -2, -3, -4,
-5, -6, -9, -11, -13, -16, -18, -21, -23, -26, -29, -32, -35, -39, -42, -46,
-48, -51, -52, -55, -57, -61, -63, -65, -67, -69, -70, -72, -74, -76, -76, -78,
-81, -81, -83, -84, -86, -87, -89, -90, -92, -93, -94, -96, -95, -97, -97, -100,
-100, -101, -104, -105, -108, -109, -109, -111, -113, -116, -118, -120, -121,
-120, -121, -121, -122, -122, -122, -123, -124, -125, -125, -124, -125, -125,
-125, -126, -126, -127, -128, -127, -126, -126, -125, -125, -124, -124, -123,
-120, -118, -116, -113, -110, -107, -104, -101, -99, -96, -93, -90, -87, -84,
-82, -80, -77, -76, -73, -72, -70, -68, -66, -64, -62, -60, -58, -57, -56, -56,
-54, -52, -51, -48, -46, -44, -42, -38, -37, -36, -34, -32, -30, -28, -27, -25,
-24, -24, -23, -23, -21, -20, -19, -19, -18, -17, -17, -17, -17, -19, -20, -21,
-22, -24, -26, -27, -29, -30, -33, -35, -37, -40, -41, -43, -46, -47, -48, -50,
-53, -54, -57, -58, -60, -61, -63, -65, -65, -67, -66, -67, -69, -68, -70, -69,
-70, -69, -70, -69, -69, -68, -67, -66, -65, -66, -66, -67, -67, -68, -69, -70,
-71, -72, -73, -74, -75, -74, -72, -72, -70, -68, -67, -66, -65, -65, -64, -64,
-63, -61, -59, -58, -55, -52, -50, -49, -46, -44, -42, -40, -38, -37, -36, -34,
-31, -30, -27, -23, -20, -16, -12, -7, -4, -1, };

#endif /* AKWF_1712_512_H_ */
