#ifndef AKWF_0625_512_H_
#define AKWF_0625_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0625_512_NUM_CELLS 512
#define AKWF_0625_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0625_512_DATA [] = {1,
3, 5, 8, 10, 12, 16, 17, 20, 23, 26, 28, 30, 33, 35, 38, 40, 43, 45, 48, 50, 52,
54, 57, 60, 62, 64, 67, 69, 71, 73, 75, 78, 80, 82, 84, 86, 88, 90, 92, 93, 95,
97, 99, 101, 103, 103, 106, 107, 108, 110, 111, 112, 114, 115, 117, 118, 118,
119, 121, 121, 122, 124, 124, 124, 125, 125, 126, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 125, 125, 126, 127, 126, 125, 125, 125, 126, 125, 125, 124, 125, 124,
123, 124, 123, 123, 123, 123, 122, 123, 122, 121, 121, 120, 121, 120, 119, 119,
118, 119, 118, 118, 116, 116, 116, 116, 115, 115, 114, 114, 113, 112, 112, 111,
110, 110, 109, 108, 107, 107, 106, 105, 105, 104, 104, 101, 101, 100, 100, 98,
97, 96, 96, 95, 93, 92, 91, 91, 89, 88, 87, 86, 85, 84, 82, 81, 80, 79, 77, 76,
75, 73, 72, 70, 69, 68, 67, 65, 63, 61, 60, 58, 57, 56, 54, 53, 51, 49, 47, 46,
44, 42, 40, 39, 38, 36, 33, 32, 30, 28, 27, 25, 22, 21, 19, 18, 15, 14, 11, 9,
8, 7, 4, 2, 0, -2, -3, -6, -7, -10, -11, -14, -15, -18, -20, -21, -23, -25, -27,
-29, -31, -34, -36, -36, -39, -40, -43, -45, -47, -48, -50, -53, -55, -56, -57,
-59, -61, -64, -64, -67, -69, -70, -72, -73, -75, -76, -79, -80, -82, -84, -85,
-87, -89, -89, -91, -93, -95, -96, -97, -99, -99, -101, -103, -103, -104, -106,
-107, -108, -110, -111, -112, -112, -114, -114, -115, -116, -117, -117, -120,
-120, -121, -121, -122, -123, -122, -124, -124, -125, -125, -125, -126, -127,
-127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127,
-128, -128, -127, -127, -128, -127, -127, -128, -128, -127, -127, -127, -127,
-128, -127, -126, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126,
-125, -125, -125, -125, -124, -123, -123, -123, -123, -123, -122, -121, -122,
-121, -120, -120, -120, -118, -119, -118, -118, -117, -116, -115, -115, -114,
-114, -113, -112, -111, -111, -110, -109, -107, -107, -106, -105, -104, -103,
-101, -100, -100, -99, -96, -95, -95, -93, -92, -90, -88, -87, -86, -84, -83,
-81, -80, -78, -76, -75, -73, -71, -69, -67, -65, -64, -62, -60, -57, -56, -54,
-52, -50, -47, -45, -44, -41, -38, -37, -35, -32, -30, -28, -25, -23, -21, -19,
-16, -13, -12, -8, -6, -3, 0, };

#endif /* AKWF_0625_512_H_ */