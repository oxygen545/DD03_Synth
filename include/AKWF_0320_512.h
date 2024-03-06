#ifndef AKWF_0320_512_H_
#define AKWF_0320_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0320_512_NUM_CELLS 512
#define AKWF_0320_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0320_512_DATA [] = {1,
3, 6, 8, 10, 13, 14, 17, 19, 21, 24, 26, 29, 31, 34, 36, 38, 39, 42, 44, 45, 47,
50, 51, 53, 56, 58, 59, 60, 63, 65, 67, 68, 69, 72, 73, 75, 76, 78, 80, 82, 83,
85, 86, 87, 89, 90, 91, 93, 94, 96, 97, 98, 99, 100, 102, 102, 103, 104, 105,
107, 107, 107, 108, 110, 111, 112, 112, 113, 114, 114, 115, 114, 116, 116, 117,
117, 118, 118, 119, 120, 121, 121, 121, 121, 122, 123, 122, 123, 124, 124, 124,
124, 125, 125, 124, 124, 126, 126, 125, 125, 125, 125, 125, 126, 124, 124, 123,
125, 124, 123, 123, 122, 122, 121, 121, 119, 118, 118, 116, 115, 115, 114, 113,
112, 112, 111, 110, 109, 108, 108, 108, 106, 105, 105, 104, 104, 102, 102, 102,
100, 100, 100, 99, 99, 98, 97, 97, 96, 96, 96, 94, 93, 94, 92, 92, 91, 90, 89,
88, 88, 87, 86, 85, 84, 84, 83, 82, 81, 81, 80, 78, 77, 76, 75, 74, 73, 71, 70,
69, 68, 65, 63, 63, 62, 59, 58, 56, 55, 53, 53, 51, 49, 48, 46, 46, 44, 43, 42,
40, 40, 38, 38, 37, 35, 34, 32, 32, 30, 28, 28, 26, 25, 24, 22, 22, 20, 18, 18,
16, 16, 16, 14, 13, 12, 12, 11, 10, 10, 9, 8, 7, 6, 5, 5, 5, 4, 4, 3, 2, 2, 3,
1, 1, 0, 1, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -3, -5,
-5, -5, -6, -6, -7, -7, -8, -9, -10, -10, -11, -12, -12, -13, -14, -15, -16,
-16, -17, -18, -20, -20, -22, -23, -24, -25, -27, -27, -29, -30, -30, -33, -34,
-34, -36, -37, -39, -40, -41, -42, -43, -45, -46, -47, -48, -49, -50, -52, -53,
-54, -56, -56, -59, -59, -60, -62, -63, -64, -65, -67, -68, -68, -69, -71, -72,
-72, -74, -74, -75, -75, -76, -77, -78, -80, -80, -81, -81, -83, -84, -85, -86,
-87, -87, -90, -89, -91, -92, -93, -93, -94, -95, -96, -96, -97, -99, -99, -100,
-101, -102, -102, -104, -103, -105, -106, -106, -108, -109, -110, -111, -112,
-113, -114, -116, -117, -118, -119, -120, -121, -121, -122, -123, -123, -123,
-125, -125, -125, -126, -126, -127, -127, -127, -128, -127, -127, -128, -128,
-128, -128, -128, -128, -128, -128, -127, -127, -127, -126, -127, -127, -127,
-126, -126, -126, -125, -125, -124, -125, -124, -124, -124, -123, -123, -122,
-121, -122, -120, -119, -119, -119, -117, -117, -115, -116, -114, -114, -112,
-112, -111, -111, -109, -109, -107, -107, -107, -105, -105, -104, -105, -103,
-102, -102, -102, -102, -101, -100, -99, -99, -98, -96, -95, -95, -94, -93, -92,
-90, -89, -89, -87, -86, -85, -83, -82, -80, -79, -78, -76, -75, -73, -71, -69,
-68, -67, -64, -62, -60, -58, -56, -54, -52, -49, -47, -44, -43, -40, -38, -35,
-33, -30, -27, -25, -21, -19, -16, -12, -9, -7, -4, -1, };

#endif /* AKWF_0320_512_H_ */
