#ifndef AKWF_0821_512_H_
#define AKWF_0821_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0821_512_NUM_CELLS 512
#define AKWF_0821_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0821_512_DATA [] = {0,
2, 3, 6, 7, 10, 11, 12, 14, 16, 16, 18, 20, 22, 23, 23, 25, 26, 28, 29, 30, 31,
33, 33, 35, 36, 36, 38, 39, 39, 40, 42, 42, 43, 44, 43, 45, 46, 46, 47, 47, 49,
49, 48, 49, 51, 50, 51, 51, 53, 52, 53, 53, 54, 54, 55, 55, 55, 56, 56, 57, 58,
57, 57, 58, 59, 59, 60, 60, 60, 61, 62, 62, 62, 64, 63, 64, 65, 65, 65, 65, 66,
66, 67, 68, 68, 69, 70, 70, 70, 70, 71, 71, 72, 72, 73, 73, 73, 74, 75, 74, 75,
76, 75, 76, 76, 77, 77, 77, 78, 79, 79, 80, 78, 79, 80, 80, 80, 80, 80, 80, 81,
81, 81, 81, 81, 81, 82, 82, 82, 82, 82, 82, 81, 82, 83, 82, 82, 82, 83, 83, 83,
82, 82, 82, 82, 83, 83, 82, 83, 83, 82, 82, 83, 82, 82, 82, 82, 82, 82, 81, 81,
81, 80, 80, 80, 79, 79, 79, 79, 79, 78, 78, 77, 77, 76, 76, 76, 75, 74, 75, 73,
73, 73, 72, 71, 72, 71, 70, 70, 69, 69, 69, 67, 68, 67, 66, 65, 65, 65, 64, 64,
63, 63, 62, 63, 62, 62, 61, 60, 60, 59, 59, 59, 58, 58, 57, 57, 56, 56, 56, 55,
54, 55, 53, 53, 52, 53, 51, 52, 50, 51, 50, 49, 49, 48, 47, 47, 46, 45, 44, 44,
43, 43, 42, 41, 41, 40, 39, 39, 37, 36, 35, 35, 33, 33, 31, 30, 30, 28, 26, 26,
25, 23, 22, 21, 19, 18, 17, 16, 14, 12, 11, 10, 9, 7, 4, 4, 1, 0, -2, -3, -5,
-6, -8, -10, -12, -13, -15, -17, -19, -21, -23, -24, -27, -27, -30, -31, -33,
-35, -37, -38, -40, -43, -44, -46, -48, -50, -51, -53, -55, -57, -58, -60, -61,
-62, -65, -66, -68, -69, -71, -72, -73, -75, -77, -78, -78, -80, -82, -83, -84,
-85, -87, -87, -88, -90, -91, -92, -92, -93, -95, -95, -96, -98, -98, -99, -100,
-101, -103, -103, -104, -105, -105, -106, -106, -107, -109, -108, -110, -109,
-111, -111, -112, -113, -113, -114, -115, -115, -116, -117, -117, -118, -118,
-119, -120, -120, -119, -120, -120, -121, -122, -122, -123, -122, -123, -124,
-123, -123, -124, -124, -125, -125, -125, -126, -126, -125, -127, -126, -126,
-127, -126, -127, -128, -127, -127, -128, -128, -127, -128, -128, -128, -128,
-127, -128, -128, -127, -128, -128, -128, -128, -128, -128, -127, -127, -127,
-127, -127, -126, -126, -125, -126, -126, -125, -124, -124, -124, -122, -122,
-122, -120, -120, -120, -119, -118, -118, -117, -115, -115, -114, -113, -112,
-111, -109, -108, -107, -105, -105, -103, -102, -100, -99, -98, -96, -95, -92,
-91, -90, -88, -86, -86, -83, -81, -80, -78, -76, -74, -72, -70, -68, -67, -64,
-63, -60, -58, -56, -54, -52, -50, -47, -46, -43, -41, -39, -37, -36, -33, -30,
-29, -26, -25, -22, -20, -17, -16, -14, -12, -10, -8, -6, -4, -3, -1, };

#endif /* AKWF_0821_512_H_ */
