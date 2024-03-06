#ifndef AKWF_1519_512_H_
#define AKWF_1519_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1519_512_NUM_CELLS 512
#define AKWF_1519_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1519_512_DATA [] = {1,
1, 3, 4, 5, 7, 7, 8, 9, 9, 10, 12, 13, 13, 14, 15, 16, 16, 18, 19, 19, 20, 21,
22, 24, 24, 25, 26, 27, 28, 30, 30, 32, 32, 34, 34, 36, 37, 38, 40, 41, 41, 42,
44, 45, 46, 48, 49, 50, 52, 53, 54, 55, 55, 57, 59, 60, 61, 62, 64, 65, 65, 67,
69, 69, 70, 72, 73, 74, 76, 77, 78, 79, 81, 82, 83, 84, 86, 87, 87, 89, 90, 91,
92, 94, 94, 96, 98, 97, 99, 100, 101, 103, 103, 105, 106, 107, 108, 109, 110,
110, 112, 112, 114, 115, 115, 116, 117, 118, 119, 119, 120, 121, 123, 123, 123,
125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 126, 126, 125, 124, 124, 124, 122, 122, 121, 120, 119, 117, 117,
116, 115, 114, 114, 113, 112, 110, 110, 108, 108, 106, 105, 104, 104, 102, 102,
100, 99, 98, 97, 95, 94, 94, 93, 91, 90, 89, 88, 86, 86, 83, 83, 82, 80, 80, 78,
77, 76, 74, 73, 72, 70, 70, 68, 68, 66, 65, 63, 62, 61, 60, 58, 57, 55, 54, 54,
53, 51, 50, 48, 48, 47, 45, 45, 43, 43, 40, 40, 38, 37, 36, 36, 34, 33, 31, 31,
30, 29, 27, 26, 25, 24, 24, 23, 21, 20, 19, 18, 17, 16, 16, 15, 15, 13, 12, 12,
12, 11, 9, 9, 9, 8, 7, 5, 3, 2, 2, 0, -1, -1, -3, -4, -6, -6, -8, -9, -10, -10,
-10, -11, -12, -13, -13, -14, -15, -17, -17, -18, -19, -20, -20, -22, -23, -24,
-25, -26, -27, -28, -29, -30, -31, -33, -32, -35, -35, -37, -38, -39, -40, -41,
-42, -44, -44, -45, -47, -49, -50, -51, -52, -52, -54, -55, -56, -58, -59, -60,
-61, -62, -64, -65, -66, -67, -68, -70, -71, -72, -73, -75, -76, -78, -78, -80,
-82, -83, -83, -84, -86, -87, -88, -89, -91, -92, -94, -93, -95, -97, -97, -98,
-100, -101, -101, -102, -104, -105, -106, -107, -108, -109, -110, -110, -112,
-112, -115, -115, -115, -117, -118, -118, -119, -119, -120, -121, -122, -123,
-124, -125, -126, -126, -126, -127, -128, -127, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -127, -127, -126, -126, -126, -125, -124, -123, -123,
-122, -121, -121, -120, -119, -117, -117, -115, -115, -113, -114, -113, -111,
-110, -109, -108, -107, -106, -105, -105, -102, -102, -101, -100, -98, -98, -96,
-95, -94, -93, -92, -91, -90, -89, -87, -86, -86, -83, -82, -82, -80, -79, -78,
-76, -76, -74, -73, -72, -71, -69, -68, -66, -65, -65, -63, -62, -61, -59, -57,
-56, -55, -54, -53, -52, -51, -49, -48, -47, -46, -45, -43, -43, -42, -40, -38,
-39, -37, -36, -34, -33, -33, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22,
-21, -20, -19, -17, -18, -17, -15, -15, -14, -12, -12, -11, -11, -10, -9, -8,
-8, -6, -5, -4, -2, -2, 1, };

#endif /* AKWF_1519_512_H_ */
