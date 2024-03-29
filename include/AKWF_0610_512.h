#ifndef AKWF_0610_512_H_
#define AKWF_0610_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0610_512_NUM_CELLS 512
#define AKWF_0610_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0610_512_DATA [] = {5,
13, 19, 26, 33, 41, 47, 54, 61, 67, 74, 81, 88, 94, 102, 109, 115, 123, 127,
121, 114, 106, 100, 93, 86, 79, 73, 66, 59, 52, 45, 38, 31, 25, 18, 11, 3, 0, 0,
0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0,
-1, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0,
0, -1, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0,
0, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1,
0, 0, 0, -1, -2, -1, -1, -1, -1, 0, -1, 0, 0, -1, 0, 0, -2, 0, -1, -1, -1, 0,
-1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1,
0, -1, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
-1, 0, 0, -1, -1, 0, 0, -2, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1,
-1, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1,
0, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, -2, -2, -1, -1, -1, 0, -1, -1, 0,
0, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, 0, -1, -1,
-1, -1, 0, -2, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, 0, -1, 0, -4, -11, -16, -23, -29, -35, -41,
-47, -53, -58, -65, -71, -77, -82, -89, -95, -101, -107, -112, -108, -101, -95,
-89, -84, -77, -72, -65, -59, -53, -47, -41, -35, -29, -24, -17, -11, -5, -1,
-1, -1, 0, 1, -1, 0, 1, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0,
0, 0, 0, -1, -1, 0, 0, 0, 1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0,
0, 0, 1, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, };

#endif /* AKWF_0610_512_H_ */
