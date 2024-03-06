#ifndef AKWF_1593_512_H_
#define AKWF_1593_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1593_512_NUM_CELLS 512
#define AKWF_1593_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1593_512_DATA [] = {1,
3, 5, 8, 10, 12, 13, 15, 17, 19, 21, 23, 24, 26, 28, 30, 31, 33, 35, 36, 38, 39,
42, 43, 45, 46, 47, 49, 51, 52, 54, 56, 58, 59, 61, 63, 65, 67, 68, 70, 72, 74,
75, 77, 80, 81, 82, 85, 86, 88, 89, 91, 93, 95, 97, 98, 99, 102, 103, 105, 106,
108, 109, 110, 112, 114, 114, 115, 117, 117, 118, 120, 120, 122, 122, 122, 123,
124, 125, 125, 125, 126, 126, 125, 126, 126, 126, 127, 127, 127, 126, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 125, 125, 124, 124,
124, 122, 121, 122, 122, 120, 119, 119, 119, 118, 117, 116, 116, 115, 114, 114,
113, 112, 111, 112, 110, 110, 110, 109, 109, 108, 107, 107, 106, 106, 105, 104,
103, 103, 102, 101, 101, 99, 99, 99, 98, 97, 97, 95, 95, 94, 93, 91, 92, 91, 90,
90, 88, 88, 87, 86, 84, 84, 83, 83, 81, 80, 79, 78, 77, 76, 74, 73, 72, 70, 68,
67, 65, 64, 62, 61, 59, 57, 57, 55, 54, 52, 51, 49, 47, 46, 45, 43, 42, 41, 40,
40, 38, 37, 37, 35, 34, 33, 32, 31, 29, 29, 28, 26, 25, 24, 23, 22, 22, 20, 19,
18, 17, 15, 15, 15, 14, 13, 12, 11, 10, 9, 9, 7, 7, 5, 5, 4, 2, 1, 0, -1, -1,
-2, -3, -5, -5, -7, -8, -9, -10, -10, -11, -12, -13, -13, -14, -15, -16, -17,
-19, -19, -20, -21, -23, -23, -24, -26, -26, -27, -29, -29, -31, -32, -33, -35,
-35, -36, -37, -39, -39, -41, -42, -43, -45, -46, -47, -49, -50, -51, -52, -54,
-55, -57, -58, -60, -61, -64, -64, -66, -68, -69, -71, -72, -73, -75, -76, -77,
-79, -80, -80, -82, -83, -83, -85, -85, -86, -87, -87, -89, -89, -90, -91, -92,
-93, -93, -94, -95, -96, -96, -97, -98, -99, -99, -100, -100, -102, -103, -104,
-103, -103, -105, -105, -106, -107, -108, -108, -109, -109, -110, -110, -110,
-111, -113, -113, -113, -113, -115, -115, -116, -117, -117, -119, -118, -119,
-120, -120, -121, -122, -122, -122, -123, -124, -124, -125, -125, -126, -125,
-126, -127, -127, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -127, -127, -128, -128, -127, -128, -128, -127,
-127, -127, -127, -126, -127, -126, -126, -126, -126, -126, -126, -125, -125,
-125, -124, -123, -122, -123, -122, -120, -120, -118, -119, -118, -116, -114,
-114, -113, -111, -110, -109, -107, -106, -104, -102, -100, -99, -98, -96, -95,
-92, -90, -89, -87, -85, -85, -82, -80, -78, -77, -75, -74, -71, -70, -67, -66,
-65, -63, -61, -59, -57, -56, -54, -53, -50, -49, -47, -45, -43, -43, -40, -39,
-37, -36, -34, -33, -31, -29, -27, -25, -25, -22, -21, -19, -17, -15, -13, -11,
-9, -7, -5, -3, 0, };

#endif /* AKWF_1593_512_H_ */
