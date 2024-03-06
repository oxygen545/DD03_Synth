#ifndef AKWF_0416_512_H_
#define AKWF_0416_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0416_512_NUM_CELLS 512
#define AKWF_0416_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0416_512_DATA [] =
{69, 59, 67, 66, 32, 31, 1, 5, -14, -9, -19, -13, -17, -12, -13, -8, -8, -6, -4,
-3, -1, -1, 2, 0, 3, 0, 3, 1, 2, 1, 2, 1, 2, 0, 2, 1, 2, 1, 1, 0, 1, 0, 1, 1, 1,
2, 1, 2, 2, 2, 1, 1, 0, 1, 0, 0, -1, 0, -2, -1, -2, -3, -4, -4, -5, -4, -3, -3,
-2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 3, 2, 3, 3, 3, 2, 2, 1, 2, 2, 2, 1, 1, 0, 1,
-1, -1, -1, 0, -1, 0, -2, 0, -1, -1, -1, 0, 0, 0, 1, 0, 1, -1, 1, -2, 2, -2, 3,
-3, 3, -3, 3, -4, 5, -5, 5, -8, -19, -94, -48, 83, 21, 65, 30, 27, 14, 2, 1,
-11, -7, -15, -8, -14, -6, -11, -3, -8, -2, -5, 0, -2, 1, 0, 2, 0, 1, 0, 1, 1,
0, 2, 1, 1, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 2, 2, 2, 2,
1, 1, 2, 0, 0, 0, 0, -1, 0, -1, 0, -1, -2, -3, -3, -4, -4, -3, -3, -3, -2, -2,
-1, -1, -1, 0, 1, 0, 2, 1, 2, 3, 3, 2, 4, 2, 2, 2, 2, 1, 1, 0, 0, 1, 0, 0, -1,
0, -1, 0, -2, 1, -3, 1, -3, 1, -3, 2, -3, 2, -4, 3, -3, 3, -3, 2, -3, 2, -1, -2,
-24, -71, -10, -40, 38, 36, 39, 45, 21, 28, 5, 11, -8, 0, -13, -5, -14, -6, -12,
-6, -8, -5, -5, -3, -2, -1, 0, -1, 1, 0, 2, 0, 2, 0, 2, 1, 2, 1, 2, 1, 2, 1, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, -2, -1, 0, -1, -1, -1, 0, 0, 0, 0, 1, -1, 0, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 2, 1, 2, 2, 2,
3, 2, 2, 1, 1, 1, 0, 0, -1, 0, 0, -1, -1, -1, -3, -3, -4, -4, -3, -3, -3, -3,
-2, -1, -1, 0, 0, 0, 1, 1, 2, 1, 1, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0,
-1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1,
-1, -2, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0,
0, 1, -1, 1, 0, 1, -1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 4, -28, -128, -70, };

#endif /* AKWF_0416_512_H_ */
