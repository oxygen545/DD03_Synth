#ifndef AKWF_0993_512_H_
#define AKWF_0993_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0993_512_NUM_CELLS 512
#define AKWF_0993_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0993_512_DATA [] = {2,
5, 6, 9, 9, 11, 11, 14, 17, 21, 25, 29, 31, 32, 32, 33, 34, 36, 38, 39, 41, 44,
46, 48, 50, 51, 53, 57, 64, 73, 83, 88, 87, 74, 58, 39, 27, 22, 25, 26, 28, 27,
27, 25, 25, 25, 26, 26, 27, 27, 28, 29, 29, 30, 30, 29, 30, 29, 28, 25, 23, 19,
16, 12, 8, 4, 3, 0, 0, 0, 0, -1, -3, -3, -4, -5, -4, -5, -6, -7, -8, -9, -9,
-10, -10, -12, -12, -14, -14, -15, -16, -16, -17, -19, -19, -20, -21, -22, -23,
-24, -24, -26, -26, -26, -26, -27, -28, -27, -26, -23, -19, -14, -8, -5, -3, -3,
-3, -3, -3, -2, -2, -1, -1, -1, 0, 1, 2, 3, 3, 3, 4, 4, 5, 6, 6, 6, 7, 8, 9, 10,
11, 11, 12, 13, 12, 12, 10, 7, 4, 1, 0, 1, 3, 6, 10, 14, 18, 20, 22, 22, 22, 21,
19, 15, 13, 11, 10, 11, 12, 14, 16, 20, 24, 28, 32, 34, 33, 32, 30, 26, 23, 21,
20, 21, 23, 24, 26, 28, 29, 29, 29, 27, 25, 23, 18, 14, 12, 11, 10, 9, 10, 11,
13, 15, 18, 22, 23, 23, 20, 17, 14, 9, 4, 1, -4, -7, -10, -8, -6, -4, 1, 4, 6,
6, 2, 0, -5, -8, -9, -8, -5, 1, 7, 13, 19, 20, 20, 19, 18, 20, 21, 22, 21, 21,
19, 18, 19, 21, 27, 35, 43, 47, 46, 40, 30, 20, 17, 17, 19, 20, 22, 22, 23, 24,
22, 22, 20, 16, 12, 8, 3, -2, -4, -5, -5, -5, -6, -5, -6, -5, -5, -4, -4, -4,
-4, -3, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2,
-2, -2, -3, -3, -4, -6, -8, -10, -12, -13, -13, -14, -13, -14, -14, -14, -12,
-12, -11, -9, -8, -8, -8, -7, -6, -6, -6, -4, -4, -4, -3, -3, -3, -2, -2, -1, 0,
1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 3, 4, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 4, 4, 6, 6, 7,
7, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 9, 10, 11, 12, 14, 15, 16, 17, 18, 18, 18, 18,
17, 17, 18, 18, 18, 20, 21, 22, 22, 23, 23, 24, 23, 24, 23, 23, 22, 21, 22, 22,
22, 23, 23, 24, 25, 26, 27, 26, 27, 26, 25, 23, 23, 20, 20, 19, 18, 18, 18, 19,
21, 21, 22, 21, 20, 17, 15, 13, 12, 15, 19, 25, 30, 35, 37, 39, 39, 39, 38, 38,
37, 36, 36, 35, 33, 30, 29, 29, 28, 29, 31, 30, 29, 27, 21, 16, 9, 3, -5, -17,
-36, -55, -72, -83, -85, -83, -81, -76, -73, -73, -76, -81, -87, -92, -96, -100,
-104, -109, -113, -116, -118, -120, -121, -123, -124, -126, -128, -128, -127,
-124, -119, -116, -114, -112, -109, -103, -90, -71, -47, -22, -5, };

#endif /* AKWF_0993_512_H_ */
