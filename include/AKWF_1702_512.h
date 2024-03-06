#ifndef AKWF_1702_512_H_
#define AKWF_1702_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1702_512_NUM_CELLS 512
#define AKWF_1702_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1702_512_DATA [] = {0,
6, 12, 17, 24, 29, 35, 42, 47, 52, 57, 64, 68, 74, 77, 81, 86, 89, 92, 95, 98,
101, 103, 105, 109, 112, 115, 119, 122, 124, 126, 127, 127, 126, 124, 121, 120,
116, 113, 111, 109, 107, 106, 105, 103, 102, 102, 101, 100, 98, 98, 97, 97, 97,
96, 97, 97, 98, 98, 99, 99, 99, 99, 99, 98, 98, 98, 98, 97, 97, 98, 98, 100,
100, 101, 102, 104, 105, 106, 106, 107, 107, 108, 109, 109, 108, 109, 107, 107,
106, 106, 106, 104, 104, 103, 103, 104, 104, 104, 104, 105, 105, 105, 105, 105,
104, 102, 101, 100, 99, 96, 95, 93, 92, 91, 90, 90, 87, 86, 85, 83, 81, 77, 75,
73, 70, 66, 64, 60, 57, 53, 50, 46, 41, 37, 32, 26, 20, 14, 8, 1, -5, -11, -19,
-24, -30, -36, -41, -47, -52, -57, -61, -66, -70, -73, -76, -77, -79, -81, -82,
-82, -84, -85, -86, -88, -89, -88, -89, -90, -90, -89, -89, -89, -87, -87, -86,
-84, -83, -83, -82, -81, -80, -79, -79, -78, -77, -75, -74, -72, -70, -67, -66,
-63, -62, -60, -59, -58, -56, -56, -55, -53, -52, -51, -51, -50, -50, -50, -50,
-52, -53, -56, -57, -60, -62, -65, -66, -67, -68, -70, -70, -69, -68, -67, -65,
-64, -62, -59, -58, -55, -53, -51, -48, -47, -45, -43, -42, -40, -39, -38, -36,
-35, -34, -32, -30, -28, -27, -24, -21, -20, -17, -14, -11, -7, -3, 0, 5, 8, 13,
17, 21, 25, 28, 29, 32, 34, 34, 36, 37, 36, 37, 38, 36, 34, 35, 33, 31, 30, 29,
26, 24, 21, 19, 16, 12, 8, 3, -2, -7, -14, -20, -27, -34, -42, -50, -57, -65,
-71, -78, -84, -90, -98, -102, -107, -111, -115, -118, -121, -124, -125, -127,
-128, -128, -128, -128, -128, -127, -127, -127, -127, -126, -125, -125, -124,
-122, -120, -118, -115, -112, -108, -104, -99, -95, -90, -85, -80, -75, -69,
-65, -60, -56, -51, -46, -43, -39, -37, -32, -29, -26, -24, -22, -19, -16, -13,
-11, -7, -4, -2, 1, 4, 6, 9, 12, 12, 14, 16, 16, 17, 18, 19, 19, 22, 21, 22, 23,
24, 25, 24, 26, 26, 26, 26, 26, 26, 27, 26, 25, 24, 23, 21, 19, 17, 14, 12, 8,
7, 3, 0, -2, -6, -9, -13, -15, -18, -21, -22, -23, -24, -25, -25, -26, -26, -26,
-25, -25, -25, -24, -23, -22, -21, -21, -20, -19, -19, -19, -18, -18, -17, -16,
-15, -14, -13, -12, -9, -8, -7, -4, -2, 0, 1, 3, 5, 5, 7, 8, 8, 9, 10, 10, 10,
10, 9, 10, 10, 9, 10, 10, 10, 8, 9, 7, 6, 4, 2, 0, -4, -5, -9, -12, -17, -19,
-22, -26, -28, -31, -34, -35, -37, -39, -40, -40, -40, -39, -38, -38, -38, -39,
-38, -39, -39, -40, -41, -42, -42, -43, -42, -41, -41, -40, -39, -38, -36, -34,
-33, -32, -29, -26, -23, -20, -17, -12, -8, -3, };

#endif /* AKWF_1702_512_H_ */
