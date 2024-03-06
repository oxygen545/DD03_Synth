#ifndef AKWF_squ2bit_512_H_
#define AKWF_squ2bit_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_squ2bit_512_NUM_CELLS 512
#define AKWF_squ2bit_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_squ2bit_512_DATA [] =
{102, 127, 122, 127, 124, 127, 125, 127, 126, 127, 126, 127, 126, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 126, 126, 126,
127, 126, 126, 126, 127, 127, 127, 126, 127, 127, 126, 126, 126, 126, 126, 126,
127, 126, 126, 127, 126, 125, 127, 126, 126, 126, 126, 126, 127, 126, 127, 127,
125, 126, 126, 127, 126, 126, 126, 126, 126, 126, 126, 125, 126, 126, 126, 126,
126, 126, 127, 125, 126, 126, 125, 125, 126, 126, 126, 125, 125, 126, 125, 125,
126, 126, 125, 125, 125, 126, 126, 125, 126, 125, 125, 125, 125, 126, 125, 125,
125, 126, 125, 126, 125, 125, 126, 125, 126, 125, 125, 125, 125, 125, 125, 125,
125, 125, 125, 124, 124, 125, 125, 125, 125, 125, 124, 125, 125, 124, 125, 125,
125, 125, 125, 125, 125, 126, 125, 124, 125, 124, 125, 125, 124, 125, 124, 125,
124, 126, 125, 125, 125, 124, 124, 125, 124, 124, 124, 124, 125, 124, 125, 123,
125, 122, 126, 122, 127, 121, 127, 120, 127, 118, 127, 117, 127, 113, 127, 86,
-128, -124, -128, -128, -127, -128, -126, -128, -126, -128, -125, -128, -126,
-128, -126, -128, -126, -128, -127, -128, -127, -128, -128, -127, -127, -128,
-128, -128, -128, -127, -128, -128, -127, -127, -128, -128, -128, -127, -128,
-128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128,
-128, -127, -128, -128, -127, -128, -128, -128, -128, -127, -127, -127, -127,
-128, -128, -128, -128, -127, -128, -127, -128, -127, -126, -127, -128, -127,
-127, -128, -128, -127, -127, -128, -127, -127, -127, -127, -127, -128, -127,
-127, -126, -127, -127, -126, -127, -127, -127, -127, -126, -128, -127, -127,
-127, -127, -128, -127, -127, -127, -127, -127, -127, -126, -127, -127, -126,
-127, -126, -127, -127, -126, -127, -126, -127, -127, -127, -127, -127, -126,
-126, -126, -126, -127, -126, -126, -126, -126, -126, -126, -126, -127, -126,
-126, -126, -126, -126, -126, -126, -126, -127, -126, -126, -126, -126, -126,
-125, -125, -126, -126, -125, -125, -126, -126, -126, -126, -125, -126, -126,
-126, -125, -126, -125, -126, -126, -126, -126, -126, -126, -125, -126, -125,
-125, -126, -125, -126, -125, -125, -125, -125, -125, -126, -126, -126, -125,
-125, -126, -125, -125, -125, -125, -125, -125, -126, -125, -125, -125, -125,
-125, -125, -124, -125, -125, -125, -125, -125, -125, -125, -124, -125, -124,
-125, -125, -125, -124, -125, -124, -126, -124, -124, -124, -125, -125, -126,
-124, -124, -124, -125, -125, -125, -125, -124, -124, -124, -125, -124, -126,
-122, -126, -122, -128, -120, -128, -116, -128, -80, };

#endif /* AKWF_squ2bit_512_H_ */
