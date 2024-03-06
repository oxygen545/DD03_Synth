#ifndef AKWF_0547_512_H_
#define AKWF_0547_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0547_512_NUM_CELLS 512
#define AKWF_0547_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0547_512_DATA [] =
{12, 14, 9, 16, 18, 33, 44, 37, 54, 58, 52, 54, 43, 36, 37, 31, 37, 52, 44, 58,
71, 72, 79, 71, 80, 94, 94, 95, 90, 94, 96, 100, 108, 99, 92, 94, 102, 112, 115,
100, 111, 123, 117, 123, 105, 91, 96, 90, 108, 111, 97, 101, 109, 116, 115, 105,
96, 103, 102, 101, 103, 93, 92, 87, 100, 98, 85, 88, 82, 93, 92, 80, 89, 83, 70,
64, 46, 30, 24, 10, 9, 16, 0, 8, 15, 10, 10, -4, 2, 10, 6, 5, -5, -2, -4, -2, 3,
-8, -17, -16, -8, 1, 0, -15, -2, 9, 2, 7, -14, -25, -21, -28, -9, -8, -21, -17,
-8, -1, -2, -14, -20, -12, -12, -10, -9, -15, -14, -16, 0, 0, -9, -2, -4, 13,
16, 9, 24, 22, 16, 14, 1, -9, -9, -19, -11, -2, -12, 2, 12, 12, 15, 5, 15, 23,
23, 22, 16, 20, 20, 24, 28, 18, 9, 12, 20, 30, 28, 15, 29, 38, 32, 38, 15, 6,
10, 4, 23, 24, 11, 16, 25, 32, 30, 18, 14, 20, 19, 21, 20, 13, 12, 8, 21, 19, 7,
11, 6, 19, 16, 6, 17, 8, -2, -10, -29, -43, -48, -62, -59, -55, -70, -60, -56,
-59, -58, -72, -64, -59, -62, -64, -72, -68, -71, -67, -64, -74, -82, -80, -72,
-62, -65, -77, -62, -54, -60, -53, -76, -83, -80, -83, -65, -65, -76, -68, -58,
-51, -53, -62, -64, -56, -55, -50, -49, -53, -50, -49, -32, -31, -37, -28, -27,
-7, -5, -7, 10, 8, 5, 5, -7, -13, -11, -18, -8, 2, -6, 13, 21, 25, 28, 19, 35,
44, 45, 44, 39, 46, 45, 52, 57, 47, 40, 45, 54, 64, 62, 49, 66, 73, 68, 73, 49,
43, 45, 42, 61, 58, 47, 54, 63, 68, 64, 51, 48, 55, 52, 55, 51, 44, 42, 39, 53,
47, 36, 38, 34, 47, 42, 33, 42, 31, 22, 12, -7, -20, -27, -42, -36, -35, -50,
-37, -35, -38, -40, -54, -42, -40, -43, -47, -54, -51, -54, -49, -48, -60, -66,
-64, -55, -48, -52, -64, -47, -42, -47, -44, -69, -74, -73, -76, -56, -61, -72,
-66, -55, -50, -55, -67, -68, -61, -62, -58, -60, -65, -65, -64, -47, -53, -57,
-52, -52, -33, -36, -38, -22, -28, -33, -36, -50, -57, -58, -67, -54, -50, -58,
-39, -36, -32, -32, -40, -25, -20, -20, -21, -26, -20, -22, -15, -13, -24, -29,
-24, -14, -6, -10, -20, -1, 2, 0, 3, -22, -22, -22, -22, -2, -7, -15, -8, 3, 10,
5, -5, -6, 2, 0, 4, 1, -4, -4, -4, 11, 3, -1, 0, -2, 14, 5, 3, 14, 1, -6, -15,
-33, -42, -48, -61, -52, -53, -62, -48, -48, -47, -50, -61, -48, -45, -45, -50,
-54, -49, -52, -45, -44, -55, -60, -54, -45, -34, -41, -49, -29, -25, -28, -24,
-49, -48, -47, -47, -26, -32, -38, -29, -18, -12, -15, -24, -22, -15, -12, -9,
-7, -11, -6, -5, };

#endif /* AKWF_0547_512_H_ */
