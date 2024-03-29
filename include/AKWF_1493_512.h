#ifndef AKWF_1493_512_H_
#define AKWF_1493_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1493_512_NUM_CELLS 512
#define AKWF_1493_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1493_512_DATA [] = {1,
5, 8, 11, 13, 16, 18, 22, 24, 26, 28, 31, 33, 37, 40, 44, 48, 50, 54, 57, 62,
64, 66, 69, 71, 74, 76, 78, 80, 81, 82, 84, 86, 86, 87, 88, 90, 90, 92, 94, 95,
96, 98, 99, 102, 102, 105, 106, 107, 110, 112, 114, 115, 117, 118, 121, 121,
123, 124, 124, 124, 124, 125, 125, 124, 123, 123, 122, 121, 121, 120, 119, 119,
118, 118, 119, 119, 118, 118, 118, 118, 118, 117, 116, 116, 115, 113, 112, 111,
108, 107, 105, 102, 100, 99, 96, 93, 91, 89, 88, 85, 83, 82, 80, 79, 77, 76, 75,
74, 73, 72, 71, 71, 70, 70, 69, 68, 67, 67, 66, 64, 64, 63, 60, 60, 57, 55, 53,
50, 47, 46, 43, 41, 38, 37, 34, 33, 31, 29, 28, 26, 26, 24, 23, 20, 19, 17, 15,
12, 10, 7, 4, 2, 0, -3, -6, -8, -10, -11, -13, -15, -17, -18, -18, -19, -19,
-20, -21, -20, -21, -20, -19, -19, -19, -18, -17, -15, -14, -12, -11, -9, -5,
-4, -1, 3, 5, 7, 10, 13, 17, 19, 21, 24, 27, 29, 31, 32, 34, 35, 37, 37, 39, 41,
42, 43, 44, 47, 49, 50, 53, 55, 57, 60, 62, 64, 66, 69, 70, 71, 74, 74, 74, 76,
76, 77, 76, 76, 76, 75, 75, 74, 73, 72, 72, 69, 69, 67, 64, 63, 60, 58, 56, 53,
50, 47, 43, 40, 35, 32, 28, 24, 20, 16, 13, 8, 5, 2, -2, -4, -8, -11, -13, -17,
-19, -20, -23, -27, -29, -32, -36, -40, -42, -46, -50, -53, -57, -60, -63, -66,
-69, -71, -73, -75, -77, -79, -81, -83, -83, -86, -86, -88, -89, -89, -92, -92,
-94, -96, -97, -99, -101, -103, -104, -106, -109, -110, -112, -115, -116, -119,
-120, -122, -123, -124, -126, -126, -127, -128, -128, -128, -128, -127, -127,
-126, -125, -125, -124, -124, -123, -123, -123, -123, -123, -122, -123, -123,
-123, -123, -122, -123, -123, -122, -121, -120, -118, -115, -114, -111, -110,
-107, -105, -103, -100, -99, -97, -95, -92, -91, -88, -87, -85, -84, -83, -83,
-81, -80, -79, -78, -77, -76, -76, -75, -75, -73, -73, -72, -71, -70, -69, -68,
-66, -64, -62, -58, -57, -54, -51, -50, -47, -44, -41, -40, -37, -36, -35, -33,
-31, -30, -28, -26, -25, -23, -22, -19, -17, -14, -12, -8, -6, -3, 0, 1, 4, 7,
9, 12, 13, 14, 16, 17, 19, 20, 20, 20, 20, 21, 21, 22, 21, 20, 20, 19, 19, 16,
16, 14, 13, 10, 9, 7, 4, 1, -1, -4, -7, -10, -13, -15, -18, -19, -22, -24, -26,
-27, -29, -31, -31, -33, -34, -34, -36, -38, -39, -41, -43, -45, -47, -49, -52,
-53, -56, -58, -60, -62, -64, -65, -68, -68, -69, -69, -70, -70, -71, -71, -69,
-69, -68, -69, -67, -67, -65, -63, -61, -60, -59, -56, -55, -52, -50, -46, -44,
-41, -38, -34, -31, -27, -23, -20, -15, -12, -8, -3, 0, };

#endif /* AKWF_1493_512_H_ */
