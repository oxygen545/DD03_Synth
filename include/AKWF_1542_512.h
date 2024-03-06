#ifndef AKWF_1542_512_H_
#define AKWF_1542_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1542_512_NUM_CELLS 512
#define AKWF_1542_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1542_512_DATA [] = {1,
2, 4, 5, 7, 9, 11, 12, 14, 16, 18, 19, 21, 23, 26, 27, 29, 32, 34, 37, 39, 41,
45, 48, 50, 52, 55, 58, 62, 65, 67, 70, 73, 76, 79, 82, 84, 87, 90, 93, 95, 98,
101, 103, 105, 107, 110, 112, 114, 116, 117, 119, 120, 122, 123, 124, 124, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 124, 123, 122, 121,
120, 118, 116, 114, 112, 110, 107, 106, 103, 102, 99, 96, 94, 91, 87, 85, 82,
79, 76, 72, 70, 68, 64, 61, 58, 54, 51, 47, 44, 41, 39, 36, 33, 29, 27, 23, 20,
16, 14, 11, 9, 4, 2, 0, -3, -6, -8, -10, -13, -16, -18, -21, -22, -25, -27, -29,
-31, -33, -35, -37, -39, -41, -42, -44, -46, -47, -48, -49, -51, -52, -53, -55,
-56, -58, -59, -59, -59, -60, -62, -63, -63, -63, -64, -64, -65, -65, -64, -65,
-65, -65, -64, -64, -64, -62, -63, -62, -62, -61, -61, -60, -58, -57, -57, -55,
-55, -54, -53, -51, -50, -48, -47, -46, -43, -43, -41, -38, -37, -36, -35, -31,
-30, -28, -26, -25, -22, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1, 1, 2,
4, 5, 7, 9, 11, 12, 14, 15, 17, 19, 20, 22, 22, 24, 25, 26, 27, 29, 29, 30, 31,
31, 32, 34, 34, 34, 35, 35, 36, 37, 36, 36, 37, 37, 37, 37, 37, 37, 36, 36, 37,
35, 36, 36, 35, 35, 33, 33, 32, 32, 31, 30, 30, 28, 28, 28, 26, 25, 24, 23, 21,
21, 20, 19, 17, 16, 15, 13, 12, 11, 9, 7, 6, 4, 2, 0, -1, -3, -5, -7, -9, -10,
-12, -15, -17, -18, -21, -23, -24, -27, -29, -31, -34, -35, -36, -39, -41, -43,
-45, -47, -49, -51, -54, -55, -57, -59, -61, -62, -64, -65, -67, -68, -68, -70,
-72, -72, -72, -74, -74, -75, -76, -75, -76, -76, -76, -75, -74, -74, -73, -73,
-71, -70, -69, -68, -67, -64, -62, -60, -58, -55, -53, -51, -48, -46, -42, -39,
-36, -33, -31, -27, -24, -21, -17, -15, -11, -8, -4, -1, 2, 4, 7, 10, 12, 14,
18, 21, 23, 25, 26, 29, 31, 32, 33, 36, 37, 37, 38, 39, 40, 41, 42, 40, 41, 40,
39, 39, 39, 38, 37, 35, 35, 32, 31, 30, 28, 27, 23, 21, 19, 17, 14, 10, 9, 6, 4,
0, -3, -6, -9, -12, -14, -18, -21, -24, -27, -30, -34, -37, -39, -43, -45, -47,
-50, -51, -55, -56, -58, -60, -62, -63, -65, -68, -68, -70, -70, -70, -72, -72,
-73, -73, -73, -74, -73, -74, -73, -74, -73, -71, -72, -70, -70, -70, -68, -67,
-66, -65, -64, -63, -60, -59, -58, -57, -55, -53, -52, -50, -48, -46, -45, -44,
-42, -41, -39, -38, -36, -34, -33, -31, -30, -28, -26, -25, -24, -23, -21, -20,
-17, -16, -15, -14, -12, -10, -9, -8, -6, -5, -5, -2, -1, 0, };

#endif /* AKWF_1542_512_H_ */
