#ifndef AKWF_1461_512_H_
#define AKWF_1461_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1461_512_NUM_CELLS 512
#define AKWF_1461_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1461_512_DATA [] =
{80, 107, 95, 104, 98, 102, 98, 102, 99, 102, 99, 102, 100, 101, 100, 101, 100,
101, 100, 100, 101, 100, 101, 100, 100, 100, 100, 99, 101, 101, 101, 99, 100,
100, 101, 99, 100, 100, 100, 100, 100, 100, 100, 100, 100, 99, 100, 100, 101,
100, 100, 99, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
100, 100, 100, 100, 100, 100, 99, 100, 99, 100, 100, 100, 100, 100, 100, 100,
100, 100, 99, 99, 100, 100, 100, 99, 99, 99, 99, 100, 99, 99, 99, 100, 99, 100,
100, 99, 99, 99, 99, 99, 99, 98, 99, 99, 99, 99, 99, 99, 99, 98, 99, 99, 99, 99,
99, 99, 99, 99, 99, 99, 99, 99, 99, 98, 99, 98, 99, 99, 99, 99, 99, 99, 99, 99,
99, 98, 99, 99, 99, 99, 99, 98, 99, 99, 98, 99, 99, 99, 99, 98, 99, 98, 99, 98,
99, 98, 99, 99, 99, 99, 99, 99, 98, 98, 98, 99, 98, 99, 99, 99, 99, 98, 98, 99,
98, 98, 99, 99, 98, 98, 98, 97, 99, 99, 99, 98, 99, 98, 99, 98, 99, 98, 98, 98,
97, 97, 99, 99, 97, 98, 98, 98, 98, 98, 98, 98, 97, 98, 98, 98, 98, 98, 98, 99,
97, 98, 97, 98, 98, 97, 98, 98, 98, 97, 98, 98, 97, 98, 98, 97, 98, 98, 97, 97,
96, 98, 98, 97, 97, 97, 98, 97, 97, 97, 97, 98, 98, 97, 98, 97, 98, 97, 98, 97,
98, 97, 98, 96, 98, 96, 98, 95, 98, 96, 99, 96, 98, 96, 98, 96, 98, 96, 97, 97,
97, 98, 94, 100, 92, 105, 83, 123, -38, -128, -113, -128, -120, -127, -123,
-128, -126, -128, -127, -127, -127, -128, -127, -128, -128, -128, -128, -127,
-128, -127, -128, -128, -127, -127, -128, -128, -128, -127, -128, -127, -127,
-127, -128, -127, -128, -127, -128, -128, -128, -127, -127, -127, -127, -128,
-127, -127, -127, -127, -128, -127, -127, -128, -128, -128, -127, -128, -127,
-127, -127, -127, -127, -128, -128, -127, -128, -127, -127, -128, -128, -127,
-128, -128, -127, -128, -127, -128, -127, -127, -128, -127, -127, -127, -127,
-127, -128, -127, -127, -127, -126, -127, -127, -127, -127, -126, -127, -127,
-127, -127, -126, -126, -126, -127, -127, -127, -127, -127, -127, -128, -127,
-127, -126, -126, -126, -126, -127, -126, -127, -127, -126, -127, -126, -126,
-127, -126, -127, -126, -127, -126, -127, -126, -127, -126, -126, -126, -126,
-125, -127, -126, -126, -127, -126, -126, -125, -127, -127, -126, -126, -125,
-126, -126, -127, -127, -126, -127, -126, -126, -126, -126, -125, -126, -126,
-125, -126, -126, -125, -126, -126, -125, -126, -126, -126, -126, -125, -126,
-125, -125, -125, -126, -125, -125, -126, -125, -126, -126, -125, -126, -125,
-125, -125, -125, -126, -125, -125, -126, -126, -125, -126, -125, -126, -124,
-126, -124, -125, -125, -126, -125, -124, -126, -125, -125, -124, -125, -124,
-126, -124, -127, -123, -128, -121, -128, -117, -128, -80, };

#endif /* AKWF_1461_512_H_ */