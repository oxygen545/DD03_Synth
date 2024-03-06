#ifndef AKWF_0412_512_H_
#define AKWF_0412_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0412_512_NUM_CELLS 512
#define AKWF_0412_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0412_512_DATA [] = {0,
0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 2, 0, 0, 1, 1, 1, 1, 1, 1, 0, 2, 1, 1, 1, 1, 2,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 5, 22, 54, 91, 118, 127, 126, 117,
104, 92, 78, 66, 58, 49, 40, 27, 12, -4, -19, -33, -44, -51, -56, -57, -60, -60,
-62, -62, -64, -65, -66, -66, -66, -66, -66, -67, -66, -67, -65, -65, -64, -65,
-64, -63, -63, -61, -61, -60, -60, -58, -58, -56, -55, -53, -51, -49, -47, -44,
-42, -37, -33, -29, -24, -21, -18, -15, -12, -9, -5, -1, 3, 7, 11, 13, 15, 18,
19, 20, 22, 23, 25, 27, 28, 30, 30, 32, 33, 34, 35, 35, 36, 36, 36, 36, 36, 37,
36, 37, 36, 35, 36, 34, 34, 33, 32, 31, 31, 30, 29, 27, 27, 26, 25, 24, 24, 23,
21, 22, 21, 20, 20, 19, 18, 17, 16, 16, 15, 16, 18, 34, 60, 90, 109, 114, 108,
95, 80, 66, 59, 53, 46, 39, 30, 18, 5, -8, -20, -29, -37, -44, -48, -52, -53,
-55, -57, -58, -58, -59, -60, -59, -60, -60, -60, -61, -61, -60, -60, -60, -59,
-59, -58, -58, -57, -56, -55, -55, -54, -52, -51, -50, -48, -46, -44, -41, -39,
-35, -32, -29, -25, -22, -20, -18, -16, -13, -11, -8, -4, -1, 1, 4, 6, 10, 11,
14, 15, 16, 17, 18, 19, 20, 21, 21, 22, 22, 23, 24, 24, 24, 25, 25, 26, 26, 25,
25, 26, 25, 26, 26, 25, 25, 24, 24, 24, 22, 23, 22, 21, 21, 20, 20, 20, 19, 19,
19, 18, 17, 17, 16, 15, 15, 15, 14, 13, 12, 13, 12, 17, 35, 67, 101, 122, 127,
124, 114, 104, 89, 77, 66, 56, 48, 37, 24, 9, -8, -24, -36, -47, -53, -58, -59,
-60, -62, -63, -64, -64, -65, -66, -67, -68, -67, -68, -68, -68, -68, -67, -66,
-66, -66, -64, -64, -63, -62, -62, -61, -59, -59, -58, -57, -55, -54, -52, -50,
-49, -45, -41, -39, -35, -31, -26, -23, -19, -16, -13, -10, -5, -1, 3, 6, 10,
13, 15, 18, 19, 20, 22, 24, 25, 27, 28, 29, 31, 32, 34, 34, 35, 36, 36, 36, 37,
36, 37, 37, 37, 36, 36, 36, 35, 35, 35, 33, 33, 32, 31, 30, 29, 29, 27, 27, 26,
24, 24, 24, 23, 21, 21, 21, 19, 18, 17, 17, 17, 16, 16, 15, 14, 13, 12, 11, 10,
9, 8, 7, 6, 5, 3, 3, 2, 1, 0, 0, 0, 0, -1, -2, -3, -4, -3, -4, -4, -4, -5, -6,
-6, -6, -6, -6, -7, -6, -6, -7, -7, -8, -8, -7, -7, -6, -7, -8, -7, -6, -6, -7,
-7, -7, -6, -6, -5, -5, -6, -6, -5, -5, -4, -4, -4, -4, -3, -3, -3, -3, -2, -3,
-2, -2, -2, -2, -1, -2, -1, -2, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, };

#endif /* AKWF_0412_512_H_ */