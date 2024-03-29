#ifndef AKWF_1718_512_H_
#define AKWF_1718_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1718_512_NUM_CELLS 512
#define AKWF_1718_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1718_512_DATA [] = {1,
5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 32, 32, 33, 34, 34, 34, 35, 35, 37, 39,
40, 41, 41, 42, 42, 43, 44, 46, 47, 49, 50, 51, 53, 53, 53, 54, 54, 55, 54, 55,
53, 52, 51, 49, 48, 48, 46, 45, 44, 43, 41, 39, 38, 37, 36, 35, 35, 34, 35, 36,
37, 38, 38, 36, 37, 36, 37, 37, 37, 36, 36, 35, 36, 36, 36, 38, 39, 39, 39, 41,
41, 43, 45, 47, 48, 51, 54, 56, 59, 62, 65, 68, 71, 73, 76, 78, 80, 82, 84, 85,
87, 89, 90, 92, 94, 96, 97, 100, 103, 106, 108, 110, 111, 113, 113, 114, 115,
115, 116, 116, 117, 117, 118, 118, 117, 117, 118, 118, 119, 120, 120, 121, 121,
122, 122, 122, 122, 121, 120, 119, 118, 118, 120, 120, 119, 119, 119, 119, 119,
119, 119, 117, 119, 119, 120, 120, 121, 120, 121, 121, 121, 122, 123, 125, 127,
127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 125, 125, 123, 121, 118, 117,
114, 113, 113, 113, 111, 111, 111, 109, 109, 108, 107, 105, 103, 102, 100, 100,
98, 97, 96, 95, 92, 90, 88, 84, 82, 79, 77, 74, 71, 69, 67, 66, 64, 61, 59, 56,
54, 52, 51, 50, 49, 49, 47, 46, 44, 43, 43, 41, 41, 40, 39, 37, 34, 32, 30, 27,
25, 22, 22, 20, 18, 17, 15, 11, 10, 10, 7, 6, 5, 2, 1, 0, 1, 0, -1, 0, -1, -1,
-3, -5, -6, -7, -10, -11, -13, -15, -17, -19, -21, -21, -23, -25, -27, -30, -33,
-35, -37, -39, -40, -41, -42, -42, -43, -45, -47, -47, -48, -49, -49, -51, -53,
-54, -57, -59, -62, -65, -66, -68, -70, -73, -75, -77, -79, -83, -86, -88, -91,
-92, -94, -96, -98, -98, -100, -101, -102, -104, -106, -108, -108, -108, -110,
-110, -110, -111, -111, -114, -114, -115, -118, -119, -121, -123, -124, -125,
-127, -127, -127, -127, -127, -127, -127, -128, -128, -128, -126, -125, -123,
-123, -121, -121, -121, -120, -120, -120, -120, -119, -119, -118, -118, -118,
-118, -118, -119, -118, -120, -120, -120, -119, -119, -119, -121, -121, -122,
-121, -121, -122, -122, -121, -121, -120, -119, -118, -117, -118, -118, -117,
-117, -117, -117, -116, -115, -115, -115, -113, -113, -111, -111, -109, -107,
-105, -103, -99, -97, -95, -93, -92, -90, -88, -87, -85, -84, -82, -80, -78,
-74, -73, -71, -67, -65, -61, -58, -56, -52, -50, -48, -46, -44, -43, -42, -41,
-40, -39, -39, -37, -37, -37, -35, -36, -36, -37, -36, -37, -36, -37, -37, -37,
-37, -38, -37, -35, -35, -35, -36, -35, -36, -38, -38, -40, -42, -44, -45, -45,
-47, -47, -49, -50, -51, -52, -53, -54, -54, -54, -55, -54, -54, -54, -52, -51,
-49, -48, -47, -46, -44, -42, -42, -42, -41, -41, -40, -38, -37, -36, -35, -33,
-34, -33, -33, -32, -31, -31, -28, -25, -22, -19, -17, -13, -10, -7, -4, 0, };

#endif /* AKWF_1718_512_H_ */
