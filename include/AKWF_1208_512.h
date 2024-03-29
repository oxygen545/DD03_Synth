#ifndef AKWF_1208_512_H_
#define AKWF_1208_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1208_512_NUM_CELLS 512
#define AKWF_1208_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1208_512_DATA [] = {2,
5, 8, 11, 13, 17, 20, 22, 25, 28, 30, 32, 34, 36, 38, 40, 43, 43, 45, 47, 48,
50, 51, 51, 53, 54, 54, 55, 56, 55, 55, 56, 56, 55, 56, 55, 55, 55, 54, 53, 53,
51, 51, 50, 49, 47, 47, 45, 43, 41, 41, 39, 38, 36, 34, 32, 30, 28, 27, 25, 24,
21, 20, 18, 16, 14, 13, 10, 9, 7, 5, 3, 2, 0, -2, -4, -6, -7, -9, -10, -12, -13,
-14, -15, -18, -18, -20, -20, -21, -23, -23, -24, -25, -26, -26, -28, -28, -29,
-29, -29, -29, -29, -29, -30, -30, -30, -30, -30, -29, -30, -29, -28, -28, -27,
-27, -26, -26, -26, -24, -24, -23, -22, -21, -20, -20, -19, -18, -17, -15, -14,
-13, -12, -11, -10, -10, -7, -7, -6, -5, -4, -2, -1, -1, 2, 2, 3, 5, 5, 6, 7, 8,
9, 10, 11, 12, 13, 13, 13, 15, 15, 16, 16, 17, 18, 18, 19, 19, 20, 20, 21, 21,
22, 21, 22, 22, 22, 22, 21, 22, 22, 22, 22, 22, 22, 21, 21, 20, 21, 20, 19, 20,
19, 19, 18, 18, 18, 16, 17, 16, 15, 14, 14, 13, 13, 13, 12, 10, 11, 9, 9, 8, 7,
6, 5, 5, 5, 3, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -4, -5, -7, -7, -7,
-7, -8, -8, -8, -9, -10, -10, -11, -11, -10, -12, -12, -12, -12, -12, -13, -14,
-13, -14, -13, -14, -13, -15, -13, -14, -14, -14, -15, -14, -14, -15, -14, -13,
-13, -13, -12, -13, -12, -13, -12, -12, -12, -11, -11, -11, -11, -10, -9, -9,
-10, -9, -8, -8, -8, -8, -7, -7, -6, -5, -6, -6, -5, -5, -4, -3, -4, -3, -3, -3,
-2, -2, -2, -1, 0, 0, 0, -1, 0, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 3,
3, 4, 4, 4, 4, 4, 3, 3, 3, 4, 4, 4, 4, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 2, 3, 2,
2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -2,
-1, -2, -2, -2, -2, -2, -2, -2, -3, -2, -3, -3, -2, -3, -3, -3, -3, -4, -3, -3,
-4, -4, -3, -4, -4, -4, -4, -4, -3, -3, -3, -4, -4, -3, -4, -4, -4, -3, -4, -4,
-4, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -1, -2, -1, -1,
-1, -1, -2, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1,
1, 1, 1, 1, 2, 1, 1, 1, 2, 0, 2, 1, 1, 2, 1, 3, -12, -73, -126, -123, -92, -70,
-66, -69, -75, -76, -74, -69, -64, -59, -56, -53, -52, -49, -46, -42, -39, -36,
-32, -29, -26, -22, -19, -15, -12, -8, -6, -3, 0, };

#endif /* AKWF_1208_512_H_ */
