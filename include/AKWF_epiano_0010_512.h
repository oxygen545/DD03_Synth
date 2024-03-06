#ifndef AKWF_epiano_0010_512_H_
#define AKWF_epiano_0010_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0010_512_NUM_CELLS 512
#define AKWF_epiano_0010_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0010_512_DATA
[] = {0, 2, 4, 6, 7, 9, 12, 13, 14, 16, 19, 21, 23, 26, 28, 30, 32, 34, 37, 39,
41, 44, 45, 48, 50, 53, 55, 58, 61, 63, 65, 68, 70, 73, 75, 77, 78, 81, 84, 86,
87, 90, 91, 94, 96, 98, 99, 101, 103, 105, 107, 109, 111, 112, 112, 115, 115,
117, 117, 119, 120, 121, 122, 123, 123, 125, 125, 126, 126, 126, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 125, 125, 125, 124,
123, 123, 121, 121, 120, 120, 118, 117, 116, 115, 114, 113, 112, 111, 110, 108,
107, 106, 105, 103, 102, 100, 100, 98, 96, 95, 93, 92, 91, 90, 88, 87, 85, 83,
83, 81, 79, 78, 75, 75, 72, 71, 70, 68, 66, 65, 63, 61, 60, 58, 57, 55, 54, 52,
50, 48, 47, 46, 44, 42, 40, 39, 37, 36, 34, 32, 31, 29, 28, 25, 25, 22, 21, 19,
18, 16, 14, 13, 11, 9, 7, 6, 5, 3, 1, 0, -1, -3, -5, -7, -8, -9, -11, -13, -14,
-15, -18, -19, -20, -22, -23, -25, -27, -28, -28, -31, -32, -33, -34, -37, -39,
-40, -42, -42, -44, -46, -46, -48, -50, -50, -52, -53, -54, -55, -57, -58, -59,
-61, -62, -64, -65, -67, -67, -68, -71, -71, -72, -73, -74, -76, -77, -78, -80,
-81, -82, -83, -84, -85, -87, -87, -88, -90, -90, -92, -93, -94, -95, -96, -98,
-98, -99, -100, -101, -102, -103, -104, -105, -105, -107, -107, -108, -109,
-109, -110, -111, -111, -112, -114, -113, -114, -115, -115, -115, -116, -117,
-118, -118, -118, -118, -118, -119, -120, -120, -121, -120, -120, -121, -121,
-120, -122, -121, -122, -121, -121, -121, -120, -121, -120, -120, -120, -120,
-119, -119, -118, -118, -116, -117, -115, -115, -114, -114, -112, -111, -110,
-109, -108, -107, -105, -105, -103, -102, -100, -98, -97, -96, -94, -91, -91,
-89, -87, -84, -83, -80, -79, -77, -74, -72, -70, -68, -66, -63, -61, -59, -56,
-53, -51, -49, -45, -44, -41, -38, -37, -34, -31, -29, -26, -24, -21, -19, -17,
-14, -12, -9, -7, -3, -2, 0, 1, 2, 3, 4, 6, 8, 10, 13, 14, 16, 17, 19, 21, 23,
24, 26, 26, 29, 30, 31, 33, 33, 34, 35, 36, 36, 38, 39, 39, 39, 39, 40, 41, 41,
40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 40, 39, 38, 38, 37, 37, 37, 35, 35, 34,
33, 33, 32, 32, 31, 28, 28, 27, 26, 25, 23, 24, 21, 21, 20, 18, 17, 15, 14, 13,
13, 11, 11, 9, 8, 7, 5, 5, 4, 2, 1, 0, -2, -2, -3, -5, -5, -6, -8, -8, -9, -10,
-11, -12, -13, -13, -14, -15, -17, -17, -17, -19, -18, -19, -20, -20, -20, -21,
-20, -21, -21, -21, -21, -22, -22, -21, -21, -22, -21, -20, -21, -20, -20, -19,
-19, -18, -17, -16, -16, -15, -13, -13, -12, -11, -11, -9, -7, -6, -4, -3, -1,
0, };

#endif /* AKWF_epiano_0010_512_H_ */