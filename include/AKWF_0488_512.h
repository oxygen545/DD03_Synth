#ifndef AKWF_0488_512_H_
#define AKWF_0488_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0488_512_NUM_CELLS 512
#define AKWF_0488_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0488_512_DATA [] = {1,
3, 5, 7, 9, 10, 12, 12, 14, 14, 15, 16, 16, 16, 15, 15, 14, 14, 13, 13, 11, 10,
10, 9, 7, 5, 5, 3, 2, -1, -2, -2, -4, -5, -7, -8, -9, -10, -10, -12, -11, -12,
-12, -12, -12, -12, -11, -11, -11, -9, -8, -7, -6, -5, -3, -1, 0, 2, 4, 6, 8,
10, 13, 15, 16, 19, 21, 23, 25, 27, 29, 32, 33, 35, 37, 39, 40, 42, 42, 44, 45,
45, 47, 47, 48, 48, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 48, 48, 48, 47, 47,
47, 47, 46, 45, 46, 46, 45, 46, 46, 46, 46, 46, 47, 47, 47, 49, 49, 50, 51, 52,
53, 55, 55, 57, 58, 60, 61, 61, 14, -18, 24, 27, 14, 27, 27, 14, 7, -4, -18,
-26, -32, -37, -41, -42, -46, -49, -55, -61, -67, -74, -79, -83, -86, -87, -89,
-89, -89, -90, -90, -91, -92, -91, -90, -87, -86, -82, -79, -76, -72, -68, -64,
-60, -55, -50, -45, -41, -36, -30, -24, -20, -15, -10, -5, -1, 5, 9, 13, 17, 21,
24, 27, 31, 33, 36, 37, 39, 40, 41, 42, 42, 42, 41, 41, 40, 39, 39, 37, 35, 34,
32, 29, 27, 25, 23, 21, 19, 17, 15, 13, 10, 9, 8, 6, 4, 3, 3, 1, 1, 1, 1, 1, 1,
1, 2, 4, 4, 7, 7, 9, 12, 13, 15, 18, 19, 22, 24, 27, 29, 33, 34, 38, 39, 42, 44,
46, 48, 50, 53, 54, 55, 56, 58, 58, 59, 60, 60, 60, 60, 59, 59, 59, 58, 56, 56,
54, 53, 51, 50, 48, 47, 45, 43, 41, 39, 37, 35, 34, 32, 30, 28, 27, 26, 24, 23,
22, 20, 20, 19, 19, 19, 19, 18, 19, 19, 19, 19, 20, 21, 22, 24, 24, 26, 27, 29,
30, 31, 34, 35, 37, 37, 40, 41, 43, 45, 46, 47, 48, 50, 51, 52, 53, 53, 54, 56,
55, 56, 56, 56, 56, 57, 56, 56, 55, 55, 55, 52, 52, 51, 50, 49, 48, 48, 46, 44,
43, 42, 41, 40, 39, 38, 37, 36, 36, 35, 35, 34, 33, 32, 32, 32, 32, 32, 31, 31,
32, 32, 33, 33, 34, 35, 35, 36, 37, 30, -23, -36, 4, -4, -11, 2, -4, -17, -24,
-35, -48, -56, -63, -68, -70, -73, -77, -81, -87, -94, -101, -108, -113, -117,
-119, -121, -122, -123, -123, -125, -127, -128, -128, -128, -127, -126, -124,
-120, -117, -114, -110, -108, -105, -101, -96, -91, -87, -82, -77, -72, -68,
-63, -58, -54, -49, -45, -41, -36, -32, -29, -27, -22, -19, -17, -15, -12, -11,
-9, -9, -8, -8, -7, -8, -8, -8, -9, -10, -11, -12, -14, -17, -17, -19, -22, -25,
-26, -28, -31, -33, -35, -37, -38, -39, -41, -42, -43, -45, -46, -47, -46, -47,
-47, -47, -47, -46, -45, -44, -43, -41, -40, -38, -36, -34, -32, -29, -27, -25,
-22, -21, -18, -15, -13, -10, -7, -4, -2, -1, };

#endif /* AKWF_0488_512_H_ */
