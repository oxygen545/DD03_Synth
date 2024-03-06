#ifndef AKWF_1823_512_H_
#define AKWF_1823_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1823_512_NUM_CELLS 512
#define AKWF_1823_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1823_512_DATA [] = {4,
20, 35, 47, 58, 67, 75, 81, 86, 88, 91, 92, 92, 92, 92, 90, 88, 88, 85, 83, 81,
80, 78, 74, 74, 71, 69, 67, 65, 64, 62, 60, 59, 56, 56, 53, 53, 51, 49, 48, 46,
46, 44, 42, 43, 41, 40, 39, 38, 37, 37, 35, 34, 33, 32, 31, 31, 30, 28, 29, 28,
27, 27, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20, 20, 19, 19, 19, 19, 17, 18,
17, 16, 16, 16, 16, 15, 15, 14, 14, 14, 13, 13, 12, 13, 12, 12, 11, 11, 10, 11,
10, 9, 10, 9, 9, 9, 9, 8, 9, 8, 8, 7, 7, 7, 7, 7, 6, 7, 6, 5, 6, 5, 6, 5, 5, 5,
5, 5, 4, 5, 4, 4, 5, 4, 3, 3, 3, 3, 4, 3, 3, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 1, 1,
1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0,
1, 0, 1, 1, 1, 0, 2, 0, 3, 1, 2, 1, 4, 1, 5, 2, 5, 4, 7, 9, 14, 20, 31, 46, 77,
67, -99, -116, -83, -88, -128, -40, 94, 58, 43, 22, 20, 10, 10, 5, 5, 4, 4, 3,
3, 3, 2, 2, 1, 1, 0, 2, 1, 1, 0, 1, 0, 2, 1, 0, 0, 2, 0, 0, -1, 1, 0, 1, 0, 1,
1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3,
3, 2, 3, 3, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 4, 6, 6, 6, 6, 6, 7, 7, 6, 7,
7, 7, 8, 8, 7, 9, 8, 8, 9, 9, 10, 9, 10, 10, 10, 11, 10, 11, 11, 12, 12, 13, 12,
14, 13, 14, 13, 15, 15, 15, 16, 16, 17, 16, 17, 18, 18, 19, 19, 19, 20, 20, 21,
21, 21, 23, 22, 23, 24, 24, 25, 25, 26, 27, 27, 29, 29, 29, 30, 31, 32, 33, 34,
35, 35, 37, 37, 38, 39, 40, 41, 43, 43, 44, 46, 47, 49, 50, 52, 52, 54, 56, 57,
59, 61, 62, 64, 66, 68, 70, 72, 74, 75, 79, 79, 82, 84, 85, 88, 89, 89, 90, 90,
90, 87, 86, 82, 76, 69, 62, 52, 40, 26, 12, -4, -20, -37, -52, -67, -79, -91,
-101, -110, -115, -120, -124, -125, -127, -127, -128, -127, -127, -125, -123,
-122, -120, -117, -116, -114, -112, -109, -107, -105, -103, -102, -99, -97, -97,
-94, -92, -91, -90, -88, -86, -85, -85, -82, -82, -80, -79, -78, -79, -79, -81,
-83, -84, -84, -85, -87, -89, -90, -92, -93, -95, -97, -98, -100, -102, -104,
-106, -108, -110, -112, -114, -116, -117, -119, -121, -123, -124, -125, -125,
-125, -125, -125, -121, -119, -113, -108, -99, -90, -79, -66, -52, -37, -20, -5,
};

#endif /* AKWF_1823_512_H_ */