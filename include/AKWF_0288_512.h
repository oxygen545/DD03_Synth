#ifndef AKWF_0288_512_H_
#define AKWF_0288_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0288_512_NUM_CELLS 512
#define AKWF_0288_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0288_512_DATA [] = {1,
5, 7, 9, 12, 13, 15, 16, 17, 19, 19, 20, 20, 21, 21, 21, 21, 22, 22, 21, 22, 21,
21, 21, 20, 20, 19, 20, 19, 18, 17, 17, 16, 16, 15, 15, 15, 15, 14, 13, 13, 12,
12, 11, 11, 11, 9, 9, 9, 9, 7, 8, 7, 7, 6, 6, 5, 5, 5, 5, 4, 5, 3, 3, 3, 3, 3,
2, 2, 1, 2, 2, 2, 1, 0, 1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, 0, -2, -2, -1, -1, -1, -2, -1, -2, -1, -2, -1, -2, -2, -2, -2, -2, -2, -2,
-1, -2, -2, -2, -1, -3, -1, -2, -2, -2, -2, -2, -1, -1, -2, -1, -2, -2, -1, -3,
-1, -1, -2, -2, -2, -2, -1, -2, -1, -2, -2, -1, -2, -2, -1, -1, -2, -2, -2, -1,
-1, -1, -1, -1, -2, -1, -1, -2, -1, -1, -2, -1, -2, -1, -1, -1, 0, -1, -1, -1,
-2, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1,
0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0,
0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1,
1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1,
1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1,
0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1,
0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1,
0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0,
0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1,
0, 1, -1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0,
1, -2, 3, -2, 4, -4, 6, -8, 16, -54, -128, -100, -100, -81, -76, -62, -56, -47,
-40, -33, -27, -22, -16, -12, -7, -4, 0, };

#endif /* AKWF_0288_512_H_ */
