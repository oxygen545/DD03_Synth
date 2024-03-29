#ifndef AKWF_epiano_0060_512_H_
#define AKWF_epiano_0060_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0060_512_NUM_CELLS 512
#define AKWF_epiano_0060_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0060_512_DATA
[] = {2, 5, 10, 14, 18, 22, 25, 30, 33, 38, 41, 45, 48, 53, 56, 59, 63, 66, 70,
73, 76, 78, 82, 85, 87, 91, 93, 96, 99, 101, 102, 105, 108, 109, 112, 112, 114,
116, 117, 119, 120, 121, 123, 123, 125, 125, 126, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 125, 124, 123, 123, 123, 121, 119, 119,
118, 117, 115, 114, 112, 111, 110, 108, 106, 105, 103, 102, 100, 98, 96, 94, 93,
91, 88, 86, 85, 83, 81, 79, 77, 75, 73, 71, 69, 67, 65, 63, 61, 60, 58, 55, 54,
52, 50, 47, 46, 45, 43, 40, 39, 37, 36, 34, 33, 31, 30, 28, 26, 25, 23, 22, 20,
19, 19, 16, 16, 15, 13, 13, 13, 11, 10, 10, 10, 8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 6,
7, 6, 7, 7, 6, 7, 8, 8, 10, 10, 10, 11, 11, 13, 14, 15, 16, 17, 18, 19, 20, 22,
23, 23, 25, 26, 27, 29, 30, 32, 32, 33, 36, 37, 38, 39, 40, 41, 43, 45, 46, 46,
48, 49, 50, 52, 53, 54, 55, 56, 57, 58, 59, 61, 61, 61, 62, 64, 65, 66, 67, 67,
68, 69, 69, 70, 70, 71, 71, 73, 73, 74, 74, 74, 74, 75, 75, 76, 76, 75, 76, 76,
76, 77, 77, 76, 77, 76, 76, 77, 76, 76, 76, 75, 75, 75, 74, 74, 75, 74, 73, 72,
72, 71, 71, 70, 69, 69, 68, 67, 66, 65, 65, 63, 63, 61, 59, 59, 57, 58, 55, 55,
54, 52, 51, 50, 48, 46, 45, 44, 43, 41, 40, 38, 35, 35, 33, 31, 29, 27, 25, 24,
23, 20, 18, 17, 14, 12, 10, 9, 6, 4, 3, 1, -2, -4, -5, -7, -9, -11, -13, -15,
-18, -19, -20, -23, -25, -27, -29, -30, -33, -34, -36, -38, -40, -42, -43, -44,
-46, -47, -49, -51, -52, -53, -56, -57, -57, -59, -61, -62, -63, -65, -66, -66,
-68, -68, -70, -71, -72, -73, -73, -74, -75, -76, -77, -78, -78, -79, -80, -81,
-80, -82, -83, -84, -84, -86, -85, -86, -88, -88, -89, -88, -89, -90, -91, -91,
-92, -93, -93, -95, -95, -95, -96, -97, -97, -98, -99, -99, -100, -101, -101,
-101, -102, -103, -104, -104, -105, -106, -107, -107, -108, -108, -108, -110,
-111, -111, -112, -113, -113, -113, -114, -115, -115, -117, -117, -117, -118,
-119, -120, -120, -120, -121, -121, -122, -123, -123, -123, -124, -124, -124,
-125, -125, -125, -126, -126, -126, -127, -126, -128, -127, -127, -127, -128,
-128, -127, -128, -128, -127, -127, -128, -127, -128, -127, -126, -126, -127,
-126, -125, -125, -124, -123, -123, -123, -122, -120, -121, -119, -119, -118,
-117, -115, -114, -113, -113, -110, -108, -108, -105, -104, -103, -101, -100,
-97, -95, -92, -90, -88, -85, -83, -80, -78, -75, -71, -69, -66, -62, -59, -56,
-53, -50, -47, -43, -38, -35, -31, -27, -24, -20, -17, -13, -8, -5, 0, };

#endif /* AKWF_epiano_0060_512_H_ */
