#ifndef AKWF_0306_512_H_
#define AKWF_0306_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0306_512_NUM_CELLS 512
#define AKWF_0306_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0306_512_DATA [] = {1,
-2, -22, -50, -80, -105, -121, -126, -120, -106, -81, -52, -19, 15, 47, 75, 99,
115, 125, 127, 126, 118, 104, 89, 70, 51, 32, 13, -2, -17, -28, -37, -41, -44,
-45, -43, -39, -33, -28, -22, -16, -10, -4, 0, 4, 8, 10, 12, 12, 12, 11, 10, 8,
7, 6, 4, 2, 1, -1, 0, -2, -3, -3, -3, -3, -3, -3, -3, -2, -1, -1, -1, 0, 0, 0,
0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, -1,
0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, -1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0,
0, 0, 1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, -1, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, 0, 1, 0, 0, 0, 0, 0, 1, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 1, 0, 1, -1,
0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
-1, 0, 0, 0, 0, -1, 1, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0,
0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, -1, 0,
0, 0, 0, -1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1,
0, 0, 0, 0, 1, 1, 0, 0, 0, -1, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1,
0, 0, };

#endif /* AKWF_0306_512_H_ */
