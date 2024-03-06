#ifndef AKWF_1916_512_H_
#define AKWF_1916_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1916_512_NUM_CELLS 512
#define AKWF_1916_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1916_512_DATA [] = {2,
4, 5, 7, 9, 10, 11, 14, 14, 16, 16, 17, 18, 19, 20, 21, 22, 22, 23, 23, 24, 24,
25, 27, 27, 27, 28, 29, 31, 31, 31, 32, 33, 33, 34, 35, 35, 36, 36, 37, 38, 38,
39, 39, 41, 40, 42, 43, 42, 43, 45, 45, 46, 47, 47, 47, 48, 49, 49, 51, 52, 53,
53, 54, 56, 55, 57, 57, 58, 60, 60, 61, 61, 62, 62, 64, 64, 64, 64, 65, 66, 67,
66, 66, 66, 67, 68, 68, 68, 68, 68, 68, 68, 68, 68, 69, 69, 69, 69, 69, 69, 70,
70, 70, 71, 71, 71, 72, 72, 73, 72, 74, 74, 76, 76, 77, 77, 78, 79, 79, 81, 80,
82, 83, 84, 85, 85, 87, 88, 89, 89, 90, 91, 92, 93, 95, 96, 96, 97, 98, 99, 101,
101, 102, 103, 104, 105, 106, 107, 108, 108, 110, 111, 112, 112, 113, 114, 114,
116, 115, 116, 117, 117, 118, 118, 119, 119, 119, 119, 119, 120, 120, 120, 120,
120, 120, 120, 119, 120, 119, 120, 119, 119, 118, 118, 118, 117, 117, 116, 116,
116, 116, 115, 115, 114, 113, 113, 112, 111, 110, 110, 109, 109, 107, 106, 105,
104, 103, 102, 101, 100, 98, 97, 95, 94, 92, 92, 89, 88, 86, 83, 83, 81, 78, 77,
75, 73, 70, 68, 67, 64, 61, 60, 57, 55, 52, 50, 47, 45, 44, 41, 39, 36, 34, 31,
30, 27, 24, 21, 18, 17, 14, 11, 9, 6, 3, 2, 0, -3, -5, -7, -10, -11, -12, -14,
-15, -17, -18, -19, -19, -21, -22, -21, -23, -23, -23, -23, -23, -24, -23, -22,
-23, -22, -22, -21, -22, -21, -20, -21, -20, -20, -20, -20, -21, -20, -20, -21,
-21, -22, -23, -24, -25, -25, -26, -28, -28, -29, -30, -32, -32, -34, -35, -35,
-37, -39, -39, -41, -41, -42, -42, -44, -45, -46, -46, -47, -47, -48, -48, -49,
-50, -51, -50, -50, -51, -51, -52, -52, -52, -53, -53, -54, -54, -54, -55, -55,
-56, -56, -57, -58, -58, -59, -60, -61, -62, -63, -64, -65, -66, -66, -67, -69,
-69, -71, -73, -73, -75, -76, -77, -79, -80, -81, -82, -83, -84, -86, -87, -88,
-89, -90, -92, -94, -94, -95, -96, -98, -99, -101, -101, -102, -103, -105, -106,
-108, -108, -109, -110, -111, -113, -114, -114, -115, -116, -117, -118, -119,
-120, -120, -120, -121, -122, -123, -124, -125, -125, -124, -125, -126, -126,
-126, -127, -127, -127, -128, -128, -128, -127, -128, -128, -127, -127, -128,
-128, -128, -128, -128, -127, -127, -126, -126, -126, -126, -126, -125, -125,
-124, -123, -122, -122, -122, -121, -121, -119, -119, -118, -117, -116, -115,
-114, -113, -112, -112, -110, -110, -109, -108, -107, -105, -105, -103, -102,
-100, -100, -98, -96, -95, -93, -92, -91, -89, -86, -84, -82, -80, -79, -75,
-73, -71, -68, -65, -63, -60, -57, -53, -50, -47, -44, -41, -38, -34, -31, -28,
-25, -22, -20, -17, -14, -11, -8, -6, -4, -1, -1, };

#endif /* AKWF_1916_512_H_ */