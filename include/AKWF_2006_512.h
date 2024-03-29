#ifndef AKWF_2006_512_H_
#define AKWF_2006_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_2006_512_NUM_CELLS 512
#define AKWF_2006_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_2006_512_DATA [] = {1,
5, 11, 15, 19, 24, 29, 33, 37, 41, 46, 50, 53, 56, 60, 64, 67, 69, 73, 75, 79,
81, 84, 86, 88, 91, 92, 94, 96, 98, 99, 102, 103, 104, 105, 106, 108, 108, 109,
110, 110, 111, 112, 114, 112, 113, 114, 115, 114, 114, 115, 114, 114, 114, 114,
114, 114, 113, 112, 112, 112, 111, 110, 111, 110, 109, 109, 108, 107, 107, 106,
106, 105, 104, 103, 102, 101, 100, 98, 97, 96, 94, 93, 92, 90, 89, 88, 86, 85,
83, 82, 80, 78, 76, 76, 74, 72, 71, 70, 68, 67, 66, 64, 63, 62, 61, 60, 59, 58,
56, 55, 55, 55, 55, 53, 52, 53, 52, 51, 52, 53, 52, 52, 53, 53, 54, 55, 55, 56,
57, 59, 59, 60, 62, 63, 65, 67, 69, 70, 71, 74, 74, 77, 79, 80, 81, 84, 85, 88,
89, 90, 93, 94, 96, 97, 98, 99, 101, 103, 103, 104, 106, 106, 106, 107, 108,
107, 107, 108, 107, 107, 107, 106, 106, 104, 103, 102, 101, 99, 97, 96, 94, 92,
90, 88, 86, 83, 80, 77, 76, 72, 71, 67, 64, 61, 59, 55, 52, 48, 46, 43, 40, 37,
34, 31, 28, 24, 22, 20, 17, 14, 11, 9, 7, 5, 2, -1, -2, -3, -6, -8, -9, -11,
-12, -14, -14, -16, -17, -18, -18, -19, -19, -20, -21, -21, -20, -21, -21, -21,
-20, -20, -20, -20, -19, -19, -19, -17, -18, -16, -16, -16, -15, -14, -14, -13,
-13, -12, -11, -10, -8, -8, -7, -7, -5, -5, -4, -4, -3, -3, -3, -2, -1, -1, -2,
-1, 0, -1, 1, -1, 0, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0,
0, 0, -1, -2, -2, -2, -3, -3, -3, -5, -5, -5, -7, -8, -8, -10, -11, -12, -13,
-14, -14, -16, -17, -19, -21, -21, -23, -25, -27, -28, -30, -31, -34, -35, -37,
-40, -42, -44, -47, -49, -51, -53, -55, -58, -61, -64, -66, -69, -71, -73, -76,
-78, -80, -83, -84, -87, -90, -91, -94, -96, -98, -100, -103, -104, -106, -107,
-109, -109, -111, -112, -114, -115, -116, -116, -117, -117, -118, -118, -118,
-119, -118, -118, -118, -117, -117, -116, -115, -114, -113, -112, -110, -110,
-108, -106, -105, -103, -101, -100, -98, -96, -95, -93, -90, -89, -87, -85, -83,
-82, -80, -78, -77, -75, -73, -72, -71, -69, -69, -67, -66, -65, -65, -64, -63,
-63, -63, -63, -63, -62, -63, -63, -64, -64, -65, -66, -66, -69, -69, -71, -73,
-74, -76, -78, -79, -82, -84, -86, -88, -90, -92, -95, -97, -99, -101, -104,
-105, -107, -110, -112, -113, -115, -117, -118, -120, -121, -123, -123, -125,
-125, -127, -127, -128, -128, -128, -127, -128, -127, -126, -125, -124, -123,
-121, -119, -117, -115, -113, -110, -108, -104, -102, -99, -95, -91, -88, -84,
-80, -76, -72, -68, -64, -59, -54, -50, -45, -40, -36, -31, -26, -21, -16, -10,
-7, -1, };

#endif /* AKWF_2006_512_H_ */
