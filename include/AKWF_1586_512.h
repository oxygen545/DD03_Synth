#ifndef AKWF_1586_512_H_
#define AKWF_1586_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1586_512_NUM_CELLS 512
#define AKWF_1586_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1586_512_DATA [] =
{28, 81, 80, 84, 87, 92, 99, 107, 115, 121, 126, 127, 127, 125, 120, 113, 106,
101, 95, 91, 90, 90, 91, 93, 94, 96, 95, 95, 92, 89, 86, 82, 79, 76, 74, 73, 72,
72, 72, 73, 74, 74, 73, 71, 70, 68, 66, 65, 63, 62, 61, 61, 61, 61, 60, 61, 60,
61, 60, 59, 58, 58, 56, 55, 55, 55, 54, 54, 54, 54, 53, 53, 53, 53, 52, 52, 52,
51, 50, 49, 49, 49, 49, 49, 48, 49, 49, 48, 47, 47, 47, 46, 46, 46, 45, 44, 45,
44, 44, 44, 44, 44, 44, 43, 42, 43, 41, 42, 41, 41, 40, 40, 40, 39, 39, 38, 39,
39, 39, 37, 38, 37, 37, 36, 38, 34, 40, 15, -54, -69, -71, -73, -74, -77, -77,
-78, -79, -81, -80, -81, -82, -83, -83, -83, -84, -84, -85, -85, -85, -86, -85,
-86, -86, -86, -85, -85, -85, -85, -85, -84, -84, -84, -83, -83, -83, -82, -82,
-81, -81, -80, -80, -79, -78, -79, -76, -77, -77, -75, -75, -74, -73, -72, -72,
-71, -70, -69, -69, -68, -68, -67, -67, -65, -64, -64, -64, -62, -62, -60, -60,
-60, -59, -58, -57, -56, -55, -54, -54, -54, -53, -52, -50, -50, -49, -48, -49,
-47, -46, -45, -45, -44, -44, -44, -42, -42, -40, -40, -40, -39, -38, -37, -37,
-36, -36, -35, -35, -33, -33, -31, -32, -30, -30, -29, -29, -29, -27, -27, -26,
-26, -25, -25, -24, -23, -22, -23, -22, -21, -21, -20, -20, -19, -20, -19, -17,
-17, -17, -16, -16, -16, -15, -14, -14, -14, -13, -12, -12, -12, -11, -12, -11,
-11, -11, -10, -9, -9, -9, -9, -9, -8, -7, -7, -7, -7, -6, -6, -6, -5, -5, -5,
-5, -4, -4, -4, -3, -2, -2, -3, -2, -2, -2, -2, 0, -1, -1, -1, 0, 0, 0, 1, 1, 1,
1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 3, 2, 3, 4, 4, 3, 4, 3, 3, 3, 4, 5, 4, 5, 4, 5,
4, 4, 4, 5, 4, 4, 4, 5, 6, 5, 6, 5, 5, 5, 5, 6, 5, 6, 6, 5, 5, 6, 5, 5, 5, 6, 5,
6, 5, 6, 5, 6, 5, 5, 5, 5, 5, 5, 5, 6, 5, 5, 5, 6, 6, 5, 4, 6, 5, 5, 4, 5, 5, 5,
5, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 3, 4, 4, 3, 3, 4, 3, 2, 3, 3, 3, 4, 3, 2, 2,
3, 3, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1,
-2, -1, -2, -1, -2, -2, -1, -1, -2, -2, -3, -2, -3, -3, -3, -3, -4, -3, -4, -4,
-5, -4, -5, -5, -5, -5, -4, -5, -5, -6, -6, -7, -6, -7, -7, -7, -7, -7, -8, -7,
-7, -8, -7, -8, -9, -8, -8, -10, -9, -10, -9, -10, -10, -11, -11, -10, -11, -12,
-4, };

#endif /* AKWF_1586_512_H_ */
