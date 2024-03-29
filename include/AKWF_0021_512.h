#ifndef AKWF_0021_512_H_
#define AKWF_0021_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0021_512_NUM_CELLS 512
#define AKWF_0021_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0021_512_DATA [] = {0,
-2, -5, -7, -9, -12, -14, -16, -18, -21, -23, -25, -29, -31, -33, -35, -39, -41,
-43, -46, -49, -51, -54, -56, -59, -61, -63, -66, -68, -70, -72, -74, -77, -79,
-80, -82, -84, -85, -86, -88, -90, -91, -92, -93, -94, -96, -96, -97, -98, -99,
-99, -101, -102, -102, -103, -104, -105, -106, -106, -108, -108, -109, -109,
-111, -110, -113, -113, -114, -114, -116, -116, -118, -118, -119, -120, -120,
-121, -123, -123, -123, -124, -125, -126, -125, -126, -127, -126, -128, -128,
-128, -128, -128, -127, -128, -127, -127, -127, -126, -127, -126, -125, -124,
-123, -123, -122, -121, -120, -119, -118, -117, -115, -114, -113, -112, -111,
-110, -109, -109, -107, -107, -106, -105, -105, -105, -104, -104, -104, -104,
-103, -104, -104, -104, -105, -104, -106, -105, -106, -106, -107, -108, -108,
-109, -110, -109, -110, -111, -111, -111, -112, -112, -112, -112, -112, -111,
-111, -111, -110, -110, -110, -108, -108, -107, -106, -105, -104, -103, -102,
-100, -100, -98, -96, -95, -94, -93, -90, -89, -87, -87, -85, -83, -82, -81,
-79, -77, -76, -75, -73, -72, -71, -68, -68, -67, -66, -64, -63, -62, -62, -60,
-59, -59, -57, -56, -55, -55, -54, -52, -51, -50, -48, -47, -45, -43, -43, -40,
-39, -37, -35, -33, -30, -27, -25, -22, -19, -16, -14, -10, -8, -5, -1, 2, 5, 8,
11, 14, 18, 21, 24, 26, 29, 32, 36, 37, 40, 42, 44, 46, 49, 49, 52, 52, 54, 55,
56, 57, 58, 59, 59, 61, 61, 62, 62, 63, 63, 63, 64, 64, 63, 65, 65, 65, 65, 65,
66, 66, 67, 68, 67, 69, 69, 70, 71, 73, 73, 74, 75, 76, 77, 79, 79, 81, 82, 84,
85, 86, 87, 89, 90, 91, 92, 93, 95, 96, 97, 97, 98, 99, 100, 100, 100, 102, 101,
102, 102, 102, 102, 101, 102, 102, 102, 101, 101, 101, 100, 99, 98, 97, 97, 95,
96, 95, 94, 93, 93, 92, 91, 91, 90, 89, 89, 88, 88, 88, 88, 87, 87, 87, 87, 87,
86, 87, 87, 88, 88, 88, 88, 89, 89, 89, 90, 90, 91, 91, 91, 91, 92, 92, 92, 92,
91, 93, 91, 92, 91, 92, 91, 92, 91, 90, 90, 89, 88, 88, 87, 87, 86, 86, 85, 85,
84, 84, 84, 83, 83, 82, 81, 81, 81, 81, 81, 80, 80, 80, 80, 79, 79, 79, 79, 79,
79, 79, 79, 79, 79, 79, 80, 80, 79, 81, 80, 81, 81, 81, 81, 81, 81, 81, 81, 82,
82, 81, 81, 81, 81, 81, 81, 80, 80, 79, 79, 78, 77, 77, 76, 75, 75, 74, 73, 72,
71, 71, 70, 69, 67, 67, 66, 65, 63, 63, 60, 60, 58, 58, 57, 56, 54, 54, 53, 52,
50, 49, 49, 48, 47, 47, 45, 45, 44, 43, 42, 41, 41, 39, 39, 38, 36, 36, 35, 34,
34, 32, 31, 31, 30, 29, 28, 26, 25, 23, 22, 22, 19, 19, 17, 15, 14, 12, 10, 8,
7, 5, 2, 1, };

#endif /* AKWF_0021_512_H_ */
