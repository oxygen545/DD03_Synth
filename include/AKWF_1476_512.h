#ifndef AKWF_1476_512_H_
#define AKWF_1476_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1476_512_NUM_CELLS 512
#define AKWF_1476_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1476_512_DATA [] =
{10, 26, 23, 24, 23, 23, 23, 24, 23, 23, 23, 23, 22, 22, 22, 23, 22, 22, 22, 21,
22, 22, 22, 21, 21, 21, 21, 21, 21, 21, 21, 20, 20, 21, 20, 20, 21, 20, 19, 20,
21, 20, 20, 20, 20, 20, 19, 20, 19, 19, 19, 19, 19, 18, 18, 19, 19, 18, 19, 19,
19, 19, 19, 18, 18, 19, 18, 18, 18, 18, 18, 17, 17, 17, 18, 17, 18, 17, 17, 17,
16, 17, 16, 17, 16, 16, 16, 16, 16, 16, 16, 15, 16, 15, 15, 15, 16, 15, 16, 15,
15, 15, 14, 15, 15, 15, 16, 14, 15, 15, 14, 14, 14, 15, 15, 14, 14, 15, 14, 14,
14, 14, 13, 14, 14, 14, 14, 13, 14, 13, 14, 14, 14, 13, 13, 12, 13, 13, 12, 13,
13, 13, 13, 12, 12, 12, 13, 12, 12, 11, 12, 12, 12, 12, 11, 12, 12, 11, 12, 11,
12, 11, 12, 12, 12, 11, 11, 11, 11, 10, 11, 10, 11, 11, 11, 11, 11, 10, 10, 10,
11, 10, 10, 10, 11, 10, 11, 11, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9,
10, 10, 9, 9, 8, 8, 10, 9, 9, 9, 8, 9, 9, 9, 9, 8, 8, 9, 8, 9, 8, 9, 8, 8, 8, 7,
8, 8, 9, 8, 8, 8, 8, 8, 9, 8, 8, 8, 7, 8, 7, 7, 7, 8, 7, 7, 7, 7, 7, 7, 8, 7, 7,
15, 50, 93, 108, 107, 106, 105, 105, 104, 103, 103, 102, 102, 101, 101, 100,
100, 99, 98, 98, 97, 97, 96, 95, 95, 94, 93, 93, 92, 91, 91, 91, 90, 90, 89, 88,
87, 87, 86, 86, 86, 86, 85, 84, 84, 83, 82, 82, 81, 81, 80, 80, 80, 79, 79, 78,
69, 32, -11, -26, -24, -24, -25, -24, -24, -23, -24, -23, -24, -24, -23, -24,
-23, -23, -23, -23, -23, -23, -22, -24, -23, -23, -22, -23, -23, -22, -22, -22,
-21, -22, -21, -21, -22, -22, -21, -21, -21, -21, -21, -21, -20, -21, -20, -20,
-21, -20, -20, -19, -21, -19, -20, -20, -19, -19, -19, -19, -20, -20, -19, -19,
-19, -19, -18, -19, -18, -19, -18, -18, -18, -19, -17, -18, -19, -18, -17, -18,
-17, -17, -18, -17, -18, -17, -17, -18, -17, -16, -17, -17, -17, -17, -17, -17,
-17, -16, -16, -16, -16, -16, -16, -16, -15, -16, -16, -16, -15, -15, -16, -15,
-15, -15, -15, -15, -15, -15, -16, -14, -15, -15, -14, -15, -15, -14, -14, -14,
-14, -14, -14, -14, -14, -14, -14, -13, -13, -14, -14, -14, -13, -14, -13, -15,
-37, -89, -125, -128, -126, -125, -125, -124, -123, -123, -122, -121, -121,
-120, -120, -119, -117, -117, -116, -115, -115, -115, -114, -113, -112, -111,
-111, -111, -109, -109, -108, -107, -107, -106, -106, -105, -104, -104, -102,
-102, -102, -102, -100, -100, -99, -99, -99, -98, -97, -96, -95, -96, -94, -94,
-93, -91, -67, -16, };

#endif /* AKWF_1476_512_H_ */
