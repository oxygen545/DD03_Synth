#ifndef AKWF_1280_512_H_
#define AKWF_1280_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1280_512_NUM_CELLS 512
#define AKWF_1280_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1280_512_DATA [] = {1,
2, 4, 6, 7, 8, 9, 12, 13, 15, 16, 17, 18, 21, 21, 23, 23, 26, 26, 28, 28, 30,
31, 32, 33, 34, 35, 36, 37, 38, 38, 39, 40, 42, 41, 42, 42, 43, 44, 44, 45, 45,
46, 46, 47, 47, 47, 48, 48, 48, 48, 48, 48, 49, 49, 49, 49, 50, 49, 49, 50, 50,
50, 49, 50, 50, 50, 49, 49, 49, 49, 49, 50, 49, 49, 49, 49, 49, 49, 49, 48, 49,
48, 49, 49, 49, 49, 48, 49, 48, 50, 49, 50, 49, 49, 49, 49, 50, 50, 50, 51, 51,
50, 50, 51, 51, 51, 52, 52, 53, 54, 54, 54, 54, 54, 55, 56, 56, 57, 56, 58, 57,
57, 58, 58, 59, 59, 59, 59, 60, 61, 62, 62, 62, 63, 63, 63, 64, 65, 64, 64, 64,
65, 65, 65, 66, 67, 67, 66, 66, 68, 68, 68, 67, 68, 68, 68, 67, 68, 68, 68, 68,
67, 67, 68, 67, 67, 66, 66, 66, 66, 66, 65, 65, 65, 65, 64, 65, 64, 64, 62, 63,
62, 61, 60, 60, 59, 59, 59, 58, 57, 57, 56, 56, 55, 54, 54, 53, 52, 51, 51, 50,
49, 49, 47, 47, 47, 46, 45, 44, 44, 42, 42, 41, 41, 40, 39, 38, 38, 37, 36, 36,
35, 34, 33, 33, 32, 32, 31, 30, 29, 29, 27, 27, 26, 26, 26, 24, 23, 23, 23, 22,
21, 21, 20, 20, 20, 18, 17, 17, 17, 16, 15, 16, 15, 13, 14, 12, 12, 12, 10, 10,
10, 10, 9, 9, 8, 8, 6, 7, 6, 5, 4, 3, 1, -1, -5, -8, -12, -16, -21, -27, -34,
-40, -46, -52, -58, -64, 21, 68, 56, 60, 57, 64, 66, 74, 79, 86, 86, 85, 79, 68,
56, 42, 28, 14, 4, -5, -10, -14, -15, -15, -16, -18, -20, -26, -31, -39, -47,
-56, -63, -69, -75, -78, -82, -83, -84, -85, -86, -88, -91, -94, -98, -101,
-106, -111, -113, -116, -117, -119, -120, -119, -120, -120, -120, -121, -121,
-122, -123, -125, -126, -127, -128, -128, -128, -128, -127, -126, -126, -125,
-124, -124, -124, -124, -124, -124, -123, -123, -122, -122, -120, -118, -116,
-115, -113, -110, -108, -106, -103, -100, -96, -94, -91, -89, -85, -82, -78,
-76, -73, -70, -67, -65, -63, -60, -58, -56, -54, -53, -51, -50, -47, -47, -46,
-44, -43, -42, -41, -40, -39, -39, -37, -37, -37, -37, -36, -36, -35, -35, -34,
-34, -34, -35, -34, -35, -35, -34, -34, -35, -34, -34, -36, -37, -37, -36, -37,
-38, -38, -38, -39, -40, -40, -40, -41, -41, -41, -41, -43, -43, -43, -45, -44,
-45, -45, -46, -45, -47, -47, -47, -46, -47, -48, -47, -47, -48, -47, -48, -47,
-46, -47, -46, -46, -45, -45, -45, -44, -43, -44, -43, -41, -41, -40, -39, -39,
-38, -37, -36, -35, -34, -32, -31, -30, -29, -27, -27, -26, -24, -23, -21, -20,
-19, -16, -15, -14, -12, -11, -10, -7, -6, -4, -3, -2, -1, };

#endif /* AKWF_1280_512_H_ */
