#ifndef AKWF_1983_512_H_
#define AKWF_1983_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1983_512_NUM_CELLS 512
#define AKWF_1983_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1983_512_DATA [] = {1,
4, 5, 8, 8, 10, 12, 12, 15, 15, 18, 18, 20, 21, 23, 25, 26, 27, 29, 32, 33, 34,
36, 36, 38, 39, 41, 41, 43, 44, 46, 47, 48, 50, 50, 52, 53, 55, 56, 58, 58, 59,
60, 61, 61, 63, 64, 64, 66, 67, 69, 69, 69, 71, 73, 72, 74, 74, 76, 76, 77, 79,
80, 81, 81, 82, 84, 84, 85, 86, 87, 88, 89, 89, 91, 92, 93, 94, 94, 95, 96, 96,
97, 98, 99, 99, 101, 101, 102, 102, 103, 104, 105, 106, 106, 108, 108, 108, 110,
111, 111, 112, 113, 113, 114, 114, 115, 116, 117, 118, 119, 120, 121, 121, 123,
122, 124, 124, 124, 124, 124, 125, 124, 126, 125, 125, 126, 126, 126, 127, 127,
127, 127, 127, 127, 127, 127, 126, 125, 125, 123, 123, 122, 121, 121, 119, 119,
118, 117, 117, 116, 115, 114, 113, 112, 112, 111, 109, 108, 108, 107, 106, 105,
104, 104, 102, 101, 101, 100, 99, 99, 98, 97, 95, 95, 94, 93, 92, 91, 90, 89,
89, 87, 87, 87, 85, 84, 84, 82, 82, 81, 81, 80, 79, 78, 76, 76, 74, 74, 73, 71,
71, 69, 69, 68, 67, 66, 65, 64, 63, 63, 61, 60, 59, 57, 57, 55, 55, 54, 53, 52,
50, 50, 49, 47, 47, 46, 44, 43, 43, 41, 40, 39, 38, 36, 35, 33, 33, 32, 30, 29,
27, 27, 25, 24, 22, 21, 20, 18, 16, 15, 13, 11, 10, 8, 6, 4, 3, 0, -2, -3, -4,
-6, -8, -9, -12, -13, -15, -17, -17, -21, -21, -22, -24, -26, -27, -29, -30,
-32, -33, -35, -37, -38, -40, -42, -43, -44, -46, -46, -48, -48, -50, -51, -53,
-53, -54, -55, -56, -58, -59, -61, -60, -62, -63, -65, -65, -65, -67, -69, -68,
-70, -71, -73, -74, -74, -75, -76, -78, -78, -79, -80, -81, -81, -82, -84, -85,
-86, -86, -87, -88, -89, -90, -91, -91, -92, -93, -94, -95, -96, -97, -97, -98,
-99, -100, -101, -101, -102, -103, -103, -104, -105, -105, -107, -107, -109,
-108, -110, -110, -111, -112, -113, -114, -114, -116, -116, -117, -117, -117,
-118, -120, -120, -121, -121, -122, -123, -123, -124, -124, -125, -126, -126,
-128, -127, -128, -128, -126, -126, -126, -127, -126, -127, -126, -126, -126,
-124, -124, -124, -124, -124, -124, -124, -123, -122, -120, -120, -119, -118,
-117, -117, -115, -114, -113, -111, -111, -110, -109, -109, -108, -106, -106,
-105, -103, -103, -102, -101, -101, -100, -99, -98, -97, -96, -95, -95, -95,
-93, -92, -92, -90, -90, -90, -88, -86, -87, -85, -84, -84, -82, -81, -81, -80,
-79, -79, -77, -77, -75, -75, -73, -72, -71, -71, -69, -68, -68, -66, -65, -64,
-63, -63, -62, -61, -60, -60, -58, -57, -56, -56, -54, -53, -52, -51, -50, -49,
-48, -46, -45, -44, -43, -42, -41, -39, -39, -38, -36, -35, -35, -33, -30, -29,
-27, -25, -22, -20, -18, -16, -14, -12, -10, -8, -5, -4, -1, -1, };

#endif /* AKWF_1983_512_H_ */
