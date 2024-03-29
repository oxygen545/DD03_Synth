#ifndef AKWF_0593_512_H_
#define AKWF_0593_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0593_512_NUM_CELLS 512
#define AKWF_0593_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0593_512_DATA [] = {0,
1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1,
1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1,
0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, -1, 1, 0, 1, 0, 1, 4, 7, 1, 0, 1, 0, 0, 1,
-1, -2, 2, 0, 1, 2, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0,
1, 0, 1, 0, 2, -1, 2, -1, 2, -1, 3, -2, 2, -2, 3, -2, 3, -2, 2, 1, -76, -5, 6,
-3, 5, -2, 5, -3, 3, -1, 2, -1, 3, -1, 3, 0, 2, -1, 1, 0, 1, 0, 2, 1, 1, 1, 1,
1, 1, 1, 0, 2, 0, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1,
-3, -2, 1, 0, 1, 0, 1, 1, 0, 1, 2, 1, 1, 0, 1, 0, 4, 6, 13, 7, 0, 2, -1, 2, 0,
0, -4, -6, -12, -9, 2, 0, 1, 1, 0, 1, 0, 2, 1, 1, -1, 1, 0, 2, 1, 2, 0, 1, 1, 1,
0, 1, 1, 1, 2, 0, 2, -1, 1, -1, 2, -2, 3, -2, 4, -3, 5, -4, 6, -4, 6, -6, 9,
-12, -104, 4, 2, -1, 3, -2, 3, -3, 3, -2, 4, -2, 3, -2, 3, -1, 2, -1, 2, -1, 2,
0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 2, 1, 1, 1, 1,
1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, -1, 0, 1, 1, 1, 2, 2,
6, 6, 1, 1, 1, 1, 1, 1, -2, -2, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 2,
1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, -1, 2, 0, 1, 0, 3, -2, 2, -2, 4, -3, 5, -5, 7,
-7, 11, -19, -73, 9, -3, 3, 0, 0, 1, 0, 2, -1, 2, -1, 3, 0, 2, 0, 1, 0, 1, 0, 2,
0, 1, 0, 1, 1, 2, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 2, 0, 0, 0, 1, 0, 1, 0, 1, 1, 2,
0, 1, 1, 1, 0, 0, 1, 0, 2, 0, 1, 1, 1, 1, 1, -2, -2, 1, 0, 1, 2, 0, 2, 5, 10,
15, 2, 0, 1, 0, 1, 1, -2, -4, -8, -5, 3, -1, 2, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1,
0, 2, -1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, -1, 2, -2, 3, -2, 4, -4, 6,
-5, 8, -9, 17, -35, -79, };

#endif /* AKWF_0593_512_H_ */
