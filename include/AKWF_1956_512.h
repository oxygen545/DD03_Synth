#ifndef AKWF_1956_512_H_
#define AKWF_1956_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1956_512_NUM_CELLS 512
#define AKWF_1956_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1956_512_DATA [] = {5,
18, 29, 41, 51, 62, 71, 81, 88, 97, 104, 109, 114, 119, 122, 125, 127, 127, 127,
127, 127, 125, 122, 120, 118, 115, 111, 108, 105, 102, 97, 95, 91, 88, 86, 84,
82, 80, 78, 76, 76, 74, 73, 73, 72, 72, 71, 71, 70, 70, 69, 69, 68, 68, 67, 65,
64, 63, 62, 60, 58, 57, 56, 54, 51, 49, 47, 45, 44, 41, 39, 38, 36, 34, 33, 31,
30, 28, 27, 26, 24, 23, 22, 21, 20, 19, 19, 17, 16, 15, 15, 12, 12, 11, 10, 8,
7, 6, 5, 4, 2, 1, 1, -1, 0, -2, -2, -3, -2, -3, -3, -3, -3, -3, -3, -2, -2, -1,
-1, -1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 1, 2, 2, 0, 0, 0, -1, -1, -1,
-2, -1, -3, -2, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 2, 1, 2, 2,
2, 3, 3, 3, 2, 3, 1, 2, 2, 1, 0, 0, -1, -1, -1, -2, -1, -2, -3, -2, -2, -2, -3,
-2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 2, 2, 1, 2, 2, 3, 2, 3, 2, 3, 1, 1, 1, 1,
0, 0, -1, -1, -2, -1, -1, -2, -3, -2, -3, -3, -2, -2, -2, -2, -2, -2, -1, 0, 0,
1, 1, 1, 2, 1, 3, 2, 2, 2, 2, 3, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -2, -2, -1, -1, -2, 0, 0, 1, 2, 1, 2, 3, 2, 2, 2, 3, 2,
3, 2, 2, 3, 1, 2, 0, 0, 0, -1, -1, -1, -2, -2, -3, -2, -2, -3, -3, -3, -2, -3,
-2, -1, -1, -1, 0, 1, 1, 0, 1, 2, 3, 3, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 0, 1, 0,
-1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -3, -4, -2, -2, -1, 0, 0, -1, 0, 0, 1,
2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 1, 0, 0, -1, -2, -2, -3, -4, -4, -4,
-4, -4, -4, -5, -4, -3, -2, -2, -1, -1, -1, 1, 1, 2, 2, 3, 3, 4, 5, 4, 4, 5, 4,
3, 4, 3, 3, 2, 2, 1, 0, -1, -1, -3, -4, -3, -4, -4, -5, -5, -6, -6, -5, -5, -4,
-4, -3, -3, -3, -2, 0, -2, 0, 0, 0, -1, 0, -1, -2, -3, -5, -6, -8, -10, -13,
-15, -18, -19, -22, -25, -29, -31, -35, -38, -41, -43, -46, -47, -49, -51, -52,
-52, -53, -53, -54, -53, -54, -53, -52, -52, -50, -50, -50, -49, -49, -49, -50,
-50, -51, -53, -55, -57, -59, -62, -67, -70, -74, -78, -82, -86, -92, -97, -101,
-105, -110, -113, -116, -119, -121, -122, -122, -121, -121, -119, -115, -112,
-105, -100, -93, -84, -77, -68, -57, -47, -36, -25, -13, -3, };

#endif /* AKWF_1956_512_H_ */
