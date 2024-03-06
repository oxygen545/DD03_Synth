#ifndef AKWF_1828_512_H_
#define AKWF_1828_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1828_512_NUM_CELLS 512
#define AKWF_1828_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1828_512_DATA [] = {0,
1, 2, 3, 4, 4, 5, 6, 6, 7, 9, 8, 9, 10, 10, 12, 11, 12, 13, 13, 13, 13, 14, 15,
15, 16, 16, 15, 16, 17, 17, 18, 17, 18, 19, 19, 19, 20, 20, 19, 20, 21, 20, 21,
21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 21, 21, 22, 21, 21, 23, 22, 22, 22, 21,
21, 22, 22, 22, 22, 21, 22, 22, 21, 22, 22, 22, 22, 21, 21, 22, 22, 22, 21, 21,
21, 21, 22, 21, 21, 20, 21, 21, 21, 21, 21, 21, 19, 21, 21, 20, 21, 20, 19, 20,
19, 20, 20, 19, 19, 19, 19, 18, 18, 19, 19, 19, 17, 18, 18, 17, 18, 18, 18, 18,
17, 17, 17, 17, 17, 17, 17, 17, 16, 17, 17, 16, 16, 17, 15, 16, 16, 16, 15, 15,
15, 14, 15, 15, 15, 15, 15, 15, 14, 14, 15, 15, 14, 13, 14, 13, 13, 14, 13, 13,
14, 13, 13, 12, 12, 13, 13, 13, 13, 12, 12, 12, 13, 12, 11, 11, 11, 11, 12, 12,
12, 11, 11, 11, 12, 11, 11, 3, 13, 56, 78, 86, 90, 90, 90, 87, 86, 83, 81, 79,
76, 75, 72, 71, 69, 66, 65, 63, 61, 59, 57, 55, 54, 52, 51, 49, 48, 47, 46, 43,
43, 42, 39, 39, 38, 37, 35, 34, 34, 32, 31, 30, 29, 29, 28, 27, 26, 25, 25, 23,
23, 22, 20, 20, 33, 68, 82, 68, 59, 54, 51, 49, 47, 44, 45, 43, 42, 41, 40, 39,
37, 38, 36, 36, 34, 33, 33, 32, 31, 31, 29, 29, 29, 28, 27, 27, 26, 26, 25, 25,
25, 23, 24, 23, 23, 23, 22, 21, 21, 21, 20, 20, 19, 19, 19, 19, 19, 19, 18, 17,
18, 17, 17, 17, 18, 17, 17, 17, 16, 17, 17, 17, 17, 17, 17, 17, 16, 16, 16, 16,
15, 16, 15, 16, 16, 16, 16, 17, 16, 16, 16, 16, 16, 16, 15, 15, 16, 16, 16, 15,
16, 16, 15, 16, 15, 15, 15, 15, 15, 14, 14, 14, 15, 15, 14, 14, 13, 12, 13, 12,
10, 10, 10, 9, 9, 7, 7, 6, 5, 4, 3, 1, 0, -1, -2, -4, -5, -7, -9, -10, -13, -15,
-16, -19, -21, -23, -26, -29, -32, -34, -36, -40, -43, -46, -49, -52, -55, -58,
-62, -65, -69, -72, -75, -79, -82, -85, -89, -92, -95, -97, -101, -104, -106,
-108, -111, -113, -115, -118, -120, -120, -122, -123, -126, -125, -127, -127,
-128, -128, -128, -127, -127, -127, -126, -126, -126, -124, -123, -121, -121,
-119, -118, -117, -115, -114, -111, -109, -108, -105, -104, -102, -100, -98,
-95, -93, -91, -88, -87, -85, -83, -80, -77, -75, -74, -71, -68, -67, -65, -62,
-60, -58, -56, -53, -52, -49, -48, -45, -44, -41, -40, -38, -36, -34, -33, -31,
-29, -28, -26, -24, -23, -22, -20, -19, -17, -17, -14, -13, -12, -11, -11, -9,
-8, -7, -5, -4, -4, -2, -1, 0, };

#endif /* AKWF_1828_512_H_ */
