#ifndef AKWF_1748_512_H_
#define AKWF_1748_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1748_512_NUM_CELLS 512
#define AKWF_1748_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1748_512_DATA [] = {6,
16, 22, 31, 39, 46, 53, 60, 67, 73, 79, 84, 90, 96, 100, 105, 109, 113, 116,
119, 121, 123, 125, 126, 127, 127, 127, 127, 127, 126, 125, 123, 122, 119, 116,
114, 111, 108, 105, 100, 96, 94, 89, 84, 80, 76, 72, 66, 63, 58, 54, 47, 44, 39,
34, 30, 26, 21, 16, 13, 8, 5, 1, -3, -7, -9, -13, -16, -20, -22, -25, -27, -29,
-32, -33, -35, -37, -39, -39, -41, -42, -43, -43, -44, -44, -45, -44, -45, -44,
-44, -44, -44, -43, -42, -41, -40, -40, -39, -38, -36, -35, -34, -33, -32, -30,
-29, -28, -26, -24, -24, -21, -20, -20, -18, -16, -16, -14, -12, -11, -10, -9,
-7, -6, -6, -5, -4, -2, -1, 0, 0, 2, 2, 3, 4, 4, 5, 6, 5, 6, 7, 7, 7, 7, 7, 8,
8, 7, 8, 8, 8, 8, 8, 8, 7, 7, 8, 7, 7, 6, 7, 6, 6, 5, 5, 5, 5, 5, 5, 5, 3, 4, 3,
2, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, 0, 0, 0, -2, -1, -2, -2, -3, -2, -2, -3, -3,
-3, -3, -3, -4, -3, -4, -4, -3, -4, -4, -3, -4, -4, -4, -3, -4, -4, -4, -4, -4,
-4, -4, -3, -3, -4, -4, -4, -3, -3, -3, -3, -4, -3, -3, -3, -2, -3, -3, -3, -3,
-3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, -1,
-1, 0, 0, -1, -1, -1, -2, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, -2, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1,
-1, -1, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, -1,
0, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1,
0, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1,
0, 0, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0,
0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, -3, -7, -10, -15, -21, -27, -33, -41, -48,
-54, -61, -68, -74, -81, -86, -92, -96, -101, -105, -108, -111, -112, -114,
-114, -114, -113, -112, -110, -107, -104, -100, -97, -91, -86, -79, -74, -68,
-60, -53, -47, -39, -30, -22, -15, -7, 1, };

#endif /* AKWF_1748_512_H_ */
