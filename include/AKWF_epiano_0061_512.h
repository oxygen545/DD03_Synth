#ifndef AKWF_epiano_0061_512_H_
#define AKWF_epiano_0061_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0061_512_NUM_CELLS 512
#define AKWF_epiano_0061_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0061_512_DATA
[] = {1, 5, 10, 13, 16, 21, 25, 28, 31, 35, 39, 42, 46, 49, 52, 56, 59, 61, 65,
68, 72, 74, 77, 80, 83, 85, 88, 90, 93, 96, 97, 99, 101, 103, 105, 107, 109,
110, 111, 112, 114, 116, 117, 117, 118, 118, 121, 121, 122, 121, 122, 122, 123,
123, 123, 123, 122, 123, 123, 122, 122, 121, 121, 121, 120, 119, 117, 118, 116,
116, 114, 113, 111, 110, 110, 109, 108, 106, 104, 103, 102, 100, 98, 97, 96, 94,
92, 91, 89, 87, 86, 84, 82, 80, 79, 77, 75, 74, 72, 70, 68, 66, 65, 62, 60, 60,
57, 56, 55, 52, 51, 49, 47, 46, 45, 43, 41, 40, 38, 37, 36, 34, 32, 32, 31, 29,
27, 27, 26, 26, 24, 22, 23, 22, 20, 20, 18, 19, 18, 17, 17, 17, 16, 16, 15, 15,
15, 14, 15, 15, 14, 15, 16, 16, 16, 16, 17, 16, 17, 18, 18, 19, 20, 20, 21, 21,
22, 23, 23, 25, 26, 26, 28, 29, 29, 30, 32, 33, 33, 35, 36, 36, 38, 39, 39, 41,
41, 42, 44, 45, 45, 47, 47, 48, 48, 50, 51, 52, 52, 53, 53, 55, 55, 56, 57, 57,
57, 58, 58, 59, 60, 60, 61, 61, 61, 61, 63, 62, 63, 63, 64, 64, 64, 63, 63, 63,
64, 64, 64, 64, 64, 64, 64, 64, 63, 64, 63, 63, 63, 62, 62, 62, 62, 61, 61, 60,
59, 59, 59, 58, 58, 57, 57, 57, 55, 54, 54, 54, 52, 52, 51, 51, 49, 49, 48, 46,
45, 44, 44, 42, 41, 40, 39, 38, 37, 36, 35, 33, 32, 30, 29, 28, 27, 26, 25, 23,
22, 21, 19, 18, 16, 15, 12, 11, 10, 8, 7, 5, 3, 3, 0, -1, -2, -4, -5, -7, -9,
-11, -12, -13, -15, -16, -18, -20, -21, -23, -24, -26, -27, -29, -30, -32, -32,
-34, -35, -37, -38, -39, -40, -41, -42, -44, -44, -47, -47, -48, -50, -51, -51,
-53, -53, -54, -55, -57, -57, -59, -59, -61, -61, -62, -63, -64, -65, -65, -66,
-67, -68, -69, -70, -70, -71, -73, -73, -73, -74, -75, -77, -76, -78, -78, -80,
-80, -81, -81, -82, -83, -84, -84, -86, -86, -87, -88, -89, -89, -89, -91, -92,
-94, -94, -95, -95, -96, -97, -98, -98, -100, -100, -101, -101, -103, -104,
-105, -106, -106, -107, -107, -109, -109, -110, -111, -111, -113, -113, -114,
-115, -115, -116, -117, -118, -118, -119, -120, -120, -121, -121, -121, -123,
-123, -123, -124, -125, -125, -124, -125, -125, -127, -126, -126, -128, -128,
-128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-127, -127, -125, -126, -125, -125, -125, -123, -123, -122, -122, -120, -120,
-119, -118, -117, -115, -114, -113, -110, -110, -107, -107, -105, -104, -101,
-99, -97, -96, -93, -90, -89, -86, -85, -82, -78, -76, -73, -69, -67, -64, -61,
-58, -54, -51, -48, -44, -41, -37, -35, -30, -27, -24, -20, -15, -13, -8, -4,
-1, };

#endif /* AKWF_epiano_0061_512_H_ */