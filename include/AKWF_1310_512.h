#ifndef AKWF_1310_512_H_
#define AKWF_1310_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1310_512_NUM_CELLS 512
#define AKWF_1310_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1310_512_DATA [] = {3,
8, 13, 17, 22, 26, 29, 33, 37, 40, 43, 46, 50, 53, 55, 58, 61, 64, 66, 68, 70,
72, 75, 76, 78, 80, 83, 84, 86, 87, 89, 90, 92, 93, 94, 96, 96, 97, 99, 100,
101, 102, 103, 105, 105, 106, 107, 108, 109, 108, 109, 110, 111, 112, 112, 113,
113, 113, 115, 115, 116, 116, 117, 117, 117, 118, 119, 118, 119, 119, 120, 120,
120, 120, 121, 122, 121, 121, 122, 123, 122, 123, 122, 123, 123, 123, 123, 124,
124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126,
126, 126, 127, 126, 126, 126, 126, 127, 126, 126, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 126, 119, 109, 100, 91, 84, 75, 68, 60, 54, 46, 40, 34,
27, 21, 16, 11, 6, 1, -4, -9, -14, -17, -22, -27, -30, -34, -37, -40, -44, -46,
-50, -54, -56, -58, -61, -63, -65, -68, -71, -73, -75, -76, -78, -81, -82, -84,
-86, -88, -89, -90, -92, -93, -95, -96, -98, -98, -99, -100, -101, -102, -103,
-104, -105, -106, -108, -108, -108, -109, -110, -110, -112, -111, -112, -114,
-114, -114, -115, -116, -116, -115, -116, -118, -118, -117, -118, -118, -119,
-119, -119, -119, -120, -120, -121, -121, -121, -121, -122, -122, -122, -123,
-123, -124, -124, -123, -124, -124, -124, -124, -125, -124, -125, -125, -125,
-125, -125, -126, -125, -126, -125, -126, -126, -125, -125, -126, -125, -125,
-126, -127, -126, -126, -127, -127, -127, -127, -127, -126, -127, -126, -127,
-126, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127,
-127, -127, -127, -127, -127, -127, -127, -127, -128, -127, -128, -127, -128,
-128, -127, -128, -128, -127, -128, -128, -128, -128, -127, -128, -128, -128,
-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127,
-128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -127, -127, -128, -127, -128, -127, -128, -128, -128, -128,
-128, -127, -128, -128, -127, -127, -128, -128, -127, -127, -128, -128, -128,
-128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -125,
-117, -107, -98, -90, -81, -74, -66, -59, -52, -45, -39, -32, -27, -20, -15,
-10, -4, -1, };

#endif /* AKWF_1310_512_H_ */