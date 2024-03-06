#ifndef AKWF_1090_512_H_
#define AKWF_1090_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1090_512_NUM_CELLS 512
#define AKWF_1090_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1090_512_DATA [] = {2,
5, 9, 13, 17, 21, 24, 29, 32, 35, 40, 44, 47, 51, 53, 57, 61, 64, 68, 71, 74,
78, 81, 84, 86, 89, 92, 95, 97, 99, 102, 104, 107, 109, 110, 113, 113, 115, 117,
119, 120, 121, 122, 122, 124, 124, 126, 125, 126, 126, 127, 126, 126, 126, 125,
126, 127, 126, 122, 118, 117, 114, 110, 107, 105, 102, 99, 95, 92, 89, 87, 84,
80, 78, 75, 72, 70, 72, 69, 64, 59, 57, 54, 49, 47, 44, 41, 39, 38, 35, 32, 31,
29, 27, 24, 22, 21, 19, 20, 20, 16, 12, 11, 8, 6, 4, 2, 0, -2, -3, -4, -6, -9,
-10, -13, -16, -19, -21, -24, -27, -31, -33, -36, -39, -44, -46, -48, -52, -53,
-56, -59, -60, -62, -63, -65, -66, -66, -68, -68, -68, -68, -65, -63, -64, -63,
-61, -61, -59, -57, -54, -52, -50, -47, -45, -41, -38, -35, -31, -29, -26, -22,
-19, -16, -12, -9, -5, -1, 1, 5, 8, 12, 14, 18, 21, 25, 28, 31, 34, 37, 39, 42,
45, 48, 50, 53, 55, 57, 59, 62, 64, 66, 66, 69, 70, 72, 73, 73, 74, 76, 76, 77,
76, 77, 77, 77, 80, 80, 76, 73, 72, 69, 66, 64, 62, 58, 57, 53, 51, 47, 45, 42,
39, 38, 34, 32, 30, 31, 31, 27, 22, 20, 19, 15, 14, 11, 10, 8, 7, 5, 3, 1, -2,
-4, -6, -9, -13, -15, -19, -22, -26, -30, -32, -36, -39, -42, -44, -46, -49,
-52, -54, -56, -57, -58, -60, -61, -61, -61, -63, -61, -58, -57, -59, -59, -57,
-57, -55, -55, -53, -52, -50, -47, -46, -44, -42, -39, -37, -35, -34, -32, -30,
-28, -26, -24, -23, -21, -19, -18, -16, -15, -14, -12, -11, -10, -9, -7, -7, -6,
-5, -5, -4, -4, -2, 0, -1, -5, -6, -7, -11, -12, -14, -16, -18, -21, -24, -26,
-28, -30, -33, -36, -37, -39, -40, -41, -40, -41, -45, -46, -45, -47, -48, -48,
-47, -47, -47, -45, -45, -43, -43, -43, -42, -42, -40, -40, -40, -40, -40, -40,
-39, -40, -40, -39, -40, -40, -40, -39, -40, -40, -39, -39, -39, -40, -39, -39,
-39, -39, -38, -38, -37, -37, -38, -38, -37, -37, -38, -38, -38, -37, -37, -37,
-36, -37, -37, -38, -36, -36, -37, -36, -33, -32, -33, -32, -31, -30, -30, -28,
-27, -26, -26, -23, -22, -21, -20, -18, -17, -16, -14, -12, -10, -9, -8, -6, -5,
-4, -3, -1, 0, 1, 2, 4, 5, 6, 5, 6, 7, 8, 7, 8, 9, 8, 11, 14, 10, 7, 6, 3, 1,
-2, -4, -6, -9, -11, -14, -16, -18, -22, -24, -26, -29, -30, -33, -34, -32, -36,
-41, -43, -46, -49, -53, -55, -56, -59, -61, -61, -64, -66, -68, -69, -71, -73,
-74, -75, -76, -75, -75, -77, -78, -76, -76, -76, -75, -72, -71, -68, -65, -62,
-60, -56, -53, -49, -46, -41, -37, -34, -31, -26, -24, -19, -15, -12, -8, -4,
-1, };

#endif /* AKWF_1090_512_H_ */
