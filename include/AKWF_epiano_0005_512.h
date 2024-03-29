#ifndef AKWF_epiano_0005_512_H_
#define AKWF_epiano_0005_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0005_512_NUM_CELLS 512
#define AKWF_epiano_0005_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0005_512_DATA
[] = {0, 1, 1, 2, 3, 4, 6, 6, 7, 7, 7, 9, 10, 10, 10, 12, 12, 13, 15, 14, 16,
15, 17, 17, 17, 18, 18, 18, 19, 19, 20, 21, 21, 21, 22, 22, 21, 23, 22, 23, 22,
24, 23, 24, 24, 24, 24, 24, 24, 25, 24, 25, 24, 25, 25, 25, 26, 25, 25, 25, 25,
27, 26, 26, 26, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28, 29, 28, 28, 29,
29, 29, 30, 30, 30, 30, 31, 31, 32, 32, 33, 33, 34, 33, 34, 34, 35, 36, 37, 37,
38, 39, 39, 40, 40, 40, 42, 43, 44, 45, 46, 46, 47, 49, 50, 51, 50, 53, 53, 54,
56, 57, 59, 60, 62, 62, 64, 65, 67, 68, 70, 72, 73, 75, 75, 78, 79, 81, 83, 84,
86, 87, 88, 90, 92, 92, 94, 96, 97, 99, 100, 101, 102, 103, 104, 104, 105, 106,
106, 107, 107, 106, 106, 105, 104, 101, 99, 95, 91, 83, 75, 67, 56, 44, 31, 17,
2, -13, -28, -44, -57, -70, -82, -92, -101, -107, -111, -114, -117, -116, -116,
-113, -110, -108, -103, -99, -94, -90, -87, -83, -78, -75, -73, -70, -68, -66,
-64, -63, -62, -62, -60, -60, -60, -59, -60, -58, -59, -58, -59, -57, -57, -58,
-57, -57, -56, -56, -56, -55, -53, -53, -52, -52, -52, -51, -49, -49, -49, -47,
-47, -47, -46, -45, -44, -44, -44, -42, -42, -41, -41, -40, -40, -38, -38, -38,
-37, -37, -37, -36, -36, -36, -36, -34, -34, -34, -33, -34, -32, -32, -31, -31,
-30, -30, -30, -28, -27, -27, -27, -25, -25, -24, -23, -23, -22, -22, -20, -19,
-18, -17, -17, -16, -15, -14, -13, -11, -11, -10, -9, -7, -6, -5, -4, -3, -2,
-2, 0, 1, 2, 3, 4, 5, 6, 8, 8, 9, 10, 12, 13, 13, 14, 15, 16, 17, 18, 20, 21,
21, 23, 23, 24, 25, 26, 27, 28, 30, 30, 31, 32, 33, 35, 34, 36, 37, 39, 39, 40,
41, 42, 44, 45, 46, 48, 49, 51, 51, 52, 54, 55, 56, 58, 59, 61, 61, 63, 64, 66,
67, 69, 70, 71, 73, 74, 76, 77, 79, 81, 82, 82, 83, 84, 84, 84, 85, 83, 81, 78,
74, 69, 62, 54, 45, 35, 23, 10, -3, -19, -33, -48, -62, -75, -86, -99, -106,
-115, -121, -125, -127, -128, -127, -126, -124, -119, -116, -113, -109, -104,
-100, -97, -92, -89, -87, -84, -81, -78, -76, -74, -73, -71, -70, -68, -67, -66,
-65, -64, -64, -62, -61, -60, -59, -58, -57, -56, -54, -53, -52, -51, -49, -49,
-47, -46, -45, -43, -43, -41, -40, -39, -37, -37, -36, -35, -34, -32, -32, -30,
-31, -30, -29, -27, -28, -26, -26, -25, -24, -24, -23, -23, -22, -21, -21, -21,
-20, -19, -19, -18, -17, -17, -17, -16, -15, -15, -15, -14, -13, -12, -12, -11,
-11, -11, -10, -9, -8, -8, -7, -6, -6, -5, -4, -3, -3, -1, -1, 0, };

#endif /* AKWF_epiano_0005_512_H_ */
