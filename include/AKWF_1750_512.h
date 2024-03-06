#ifndef AKWF_1750_512_H_
#define AKWF_1750_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1750_512_NUM_CELLS 512
#define AKWF_1750_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1750_512_DATA [] = {1,
4, 5, 8, 10, 11, 13, 15, 16, 19, 20, 22, 23, 26, 27, 29, 30, 31, 34, 35, 37, 39,
40, 41, 43, 45, 47, 48, 49, 51, 52, 54, 55, 56, 57, 58, 60, 61, 63, 64, 65, 68,
68, 69, 71, 72, 74, 75, 76, 78, 79, 81, 81, 83, 83, 85, 85, 87, 88, 91, 90, 92,
93, 95, 96, 98, 98, 100, 101, 102, 103, 104, 105, 106, 107, 109, 110, 109, 113,
112, 115, 114, 117, 116, 120, 118, 123, 120, 125, 121, 127, 121, 127, 111, 12,
19, 19, 21, 24, 24, 28, 28, 32, 30, 34, 34, 38, 36, 41, 39, 44, 43, 47, 45, 50,
48, 52, 52, 54, 56, 57, 59, 59, 64, 59, 74, -17, -53, -39, -49, -42, -50, -46,
-51, -48, -52, -50, -53, -53, -55, -54, -57, -56, -58, -60, -60, -62, -63, -65,
-64, -69, -68, -76, -69, -50, -47, -41, -37, -33, -29, -27, -24, -21, -19, -16,
-13, -10, -7, -6, -4, -1, 1, 3, 5, 7, 9, 10, 13, 14, 17, 18, 20, 21, 23, 25, 27,
28, 30, 31, 34, 34, 36, 38, 39, 41, 43, 44, 46, 47, 48, 49, 51, 53, 54, 56, 56,
58, 60, 62, 61, 65, 64, 68, 65, 72, 67, 75, 69, 79, 69, 88, 47, -63, -48, -56,
-54, -57, -57, -58, -60, -59, -63, -61, -66, -64, -69, -67, -75, -74, -55, -47,
-43, -38, -35, -30, -29, -24, -21, -18, -17, -14, -12, -9, -6, -11, -13, -14,
-14, -14, -16, -16, -16, -17, -18, -19, -20, -20, -21, -21, -22, -23, -23, -23,
-25, -26, -25, -27, -27, -28, -29, -29, -30, -31, -31, -32, -33, -34, -34, -36,
-37, -37, -37, -39, -39, -40, -42, -42, -43, -43, -44, -44, -46, -46, -48, -48,
-49, -50, -51, -53, -53, -54, -55, -57, -58, -59, -59, -62, -61, -64, -65, -66,
-69, -70, -76, -58, -47, -44, -38, -34, -31, -28, -25, -22, -19, -16, -13, -10,
-8, -6, -4, -2, -1, 3, 3, 7, 7, 11, 10, 18, 3, -22, -17, -21, -19, -21, -21,
-22, -24, -24, -25, -25, -26, -26, -26, -27, -28, -29, -30, -31, -31, -32, -32,
-34, -34, -36, -36, -38, -37, -39, -39, -41, -41, 8, 14, 11, 13, 9, 11, 8, 11,
8, 9, 7, 8, 7, 7, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, -1, 0, -2, -2, -2, -3, -4, -4,
-4, -5, -5, -7, -7, -7, -8, -9, -9, -10, -11, -12, -12, -13, -13, -14, -14, -15,
-16, -17, -17, -18, -19, -19, -20, -21, -22, -22, -22, -24, -24, -24, -26, -25,
-26, -28, -28, -29, -30, -31, -31, -33, -33, -33, -34, -34, -36, -37, -37, -39,
-38, -39, -40, -42, -42, -43, -43, -45, -46, -46, -47, -47, -48, -50, -50, -52,
-53, -53, -54, -56, -57, -59, -59, -60, -61, -64, -63, -67, -67, -75, -69, -49,
-45, -40, -36, -32, -29, -24, -22, -20, -16, -14, -11, -9, -6, -5, -2, 0, };

#endif /* AKWF_1750_512_H_ */
