#ifndef AKWF_1416_512_H_
#define AKWF_1416_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1416_512_NUM_CELLS 512
#define AKWF_1416_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1416_512_DATA [] = {4,
12, 19, 25, 33, 40, 46, 53, 59, 66, 71, 77, 83, 88, 93, 98, 102, 106, 109, 113,
115, 118, 122, 124, 125, 127, 127, 127, 127, 127, 126, 124, 122, 119, 116, 114,
111, 107, 103, 98, 94, 88, 84, 79, 75, 70, 66, 62, 57, 53, 49, 45, 41, 37, 34,
31, 28, 27, 25, 23, 24, 23, 22, 24, 24, 25, 25, 25, 25, 25, 24, 24, 23, 21, 20,
18, 15, 12, 10, 7, 3, 2, -2, -5, -10, -12, -16, -19, -23, -26, -29, -32, -34,
-37, -39, -42, -44, -47, -51, -54, -58, -62, -66, -70, -75, -79, -83, -86, -89,
-91, -94, -96, -97, -98, -98, -98, -96, -95, -94, -93, -91, -89, -86, -84, -82,
-81, -79, -79, -78, -76, -77, -77, -77, -77, -77, -77, -79, -79, -80, -81, -81,
-82, -82, -83, -83, -83, -84, -84, -84, -82, -80, -79, -77, -74, -71, -68, -64,
-60, -57, -51, -48, -44, -39, -36, -32, -28, -24, -20, -16, -12, -8, -5, -2, 0,
3, 5, 7, 7, 7, 7, 7, 6, 4, 2, 1, 0, -2, -3, -4, -5, -6, -7, -9, -9, -11, -11,
-12, -10, -10, -10, -9, -7, -6, -4, -1, 0, 3, 5, 6, 9, 10, 13, 14, 17, 19, 21,
23, 26, 29, 31, 34, 36, 39, 41, 44, 47, 48, 51, 51, 53, 54, 55, 55, 56, 56, 56,
54, 54, 54, 53, 52, 51, 52, 52, 52, 53, 54, 56, 58, 61, 64, 65, 69, 72, 75, 78,
80, 84, 87, 88, 90, 92, 95, 95, 98, 99, 98, 99, 98, 98, 97, 97, 96, 93, 93, 91,
89, 87, 86, 85, 84, 82, 81, 79, 79, 78, 76, 76, 74, 73, 71, 71, 70, 69, 68, 66,
64, 63, 61, 60, 57, 56, 53, 51, 49, 46, 43, 41, 39, 36, 33, 32, 31, 29, 27, 25,
24, 22, 20, 18, 16, 15, 12, 10, 6, 4, 0, -2, -6, -9, -14, -17, -21, -24, -29,
-33, -37, -42, -46, -51, -54, -59, -62, -65, -68, -72, -74, -76, -79, -80, -83,
-84, -87, -87, -90, -90, -91, -91, -90, -91, -90, -90, -90, -89, -88, -87, -88,
-87, -87, -86, -86, -85, -85, -85, -83, -82, -81, -79, -78, -77, -76, -76, -75,
-74, -72, -71, -69, -67, -65, -64, -62, -60, -58, -56, -55, -53, -52, -50, -49,
-48, -48, -47, -47, -45, -44, -42, -41, -40, -39, -36, -36, -34, -33, -33, -32,
-30, -28, -28, -27, -25, -23, -22, -20, -17, -16, -15, -14, -14, -13, -13, -13,
-12, -12, -11, -10, -10, -8, -7, -5, -3, -1, 1, 4, 6, 7, 8, 9, 7, 6, 5, 3, 1,
-2, -5, -8, -11, -14, -18, -21, -25, -28, -29, -30, -30, -28, -28, -27, -24,
-21, -17, -13, -11, -6, -2, 1, 5, 7, 9, 11, 12, 14, 15, 15, 16, 17, 16, 16, 16,
15, 13, 11, 10, 8, 5, 3, 2, -1, -4, -5, -7, -9, -11, -13, -16, -16, -17, -16,
-15, -13, -10, -4, 1, };

#endif /* AKWF_1416_512_H_ */