#ifndef AKWF_1705_512_H_
#define AKWF_1705_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1705_512_NUM_CELLS 512
#define AKWF_1705_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1705_512_DATA [] = {2,
9, 14, 21, 26, 33, 37, 42, 47, 52, 56, 60, 65, 71, 75, 80, 85, 91, 95, 99, 104,
108, 113, 116, 119, 122, 125, 126, 127, 127, 127, 127, 127, 126, 124, 121, 119,
115, 112, 110, 107, 104, 100, 97, 96, 92, 88, 84, 79, 76, 71, 66, 63, 58, 53,
48, 44, 39, 34, 28, 23, 18, 12, 7, 2, -4, -7, -12, -15, -20, -23, -27, -30, -34,
-36, -40, -42, -43, -45, -46, -47, -49, -50, -52, -51, -52, -51, -50, -48, -47,
-45, -44, -42, -41, -37, -35, -32, -30, -27, -24, -23, -22, -22, -21, -21, -21,
-22, -22, -23, -26, -27, -28, -28, -29, -28, -29, -28, -27, -25, -24, -22, -21,
-20, -21, -20, -21, -22, -24, -25, -26, -27, -28, -29, -28, -29, -31, -31, -33,
-33, -34, -35, -36, -37, -37, -37, -37, -36, -35, -34, -34, -33, -33, -31, -31,
-30, -28, -27, -24, -22, -19, -16, -13, -8, -5, -1, 1, 3, 7, 10, 12, 14, 18, 21,
23, 27, 27, 30, 32, 33, 35, 36, 36, 38, 39, 40, 41, 40, 40, 40, 39, 38, 38, 35,
35, 32, 29, 26, 22, 18, 13, 11, 6, 3, 0, -3, -6, -9, -13, -15, -18, -20, -22,
-24, -26, -28, -30, -33, -36, -40, -42, -46, -49, -52, -53, -56, -59, -60, -62,
-63, -64, -63, -64, -64, -63, -62, -60, -60, -59, -59, -59, -59, -60, -60, -61,
-60, -61, -61, -60, -61, -59, -58, -57, -55, -53, -51, -48, -47, -46, -44, -42,
-41, -41, -39, -38, -36, -35, -32, -31, -29, -27, -24, -21, -20, -18, -15, -12,
-9, -6, -3, 2, 4, 8, 12, 15, 19, 22, 25, 27, 29, 32, 33, 35, 37, 39, 42, 43, 47,
49, 52, 54, 57, 59, 61, 62, 64, 65, 66, 66, 67, 66, 65, 65, 61, 59, 57, 53, 50,
46, 42, 37, 33, 31, 26, 23, 19, 14, 10, 6, 1, -2, -7, -11, -15, -19, -23, -25,
-30, -34, -37, -41, -44, -48, -51, -53, -54, -56, -56, -58, -58, -58, -58, -58,
-56, -56, -55, -55, -55, -55, -56, -56, -58, -59, -61, -63, -66, -68, -68, -70,
-70, -70, -69, -66, -64, -60, -58, -54, -48, -44, -40, -37, -34, -31, -29, -26,
-24, -21, -20, -17, -14, -11, -8, -6, -4, -2, -1, 2, 3, 3, 4, 4, 5, 5, 4, 4, 4,
3, 3, 2, 1, -1, -1, -3, -4, -5, -6, -7, -6, -7, -5, -5, -5, -5, -5, -5, -5, -5,
-4, -5, -5, -6, -8, -10, -10, -10, -11, -9, -9, -7, -5, -4, -1, 0, 2, 5, 7, 11,
14, 17, 20, 25, 27, 31, 34, 37, 40, 43, 46, 51, 54, 59, 62, 65, 68, 71, 73, 76,
77, 78, 79, 79, 79, 76, 74, 70, 65, 60, 54, 48, 41, 35, 27, 21, 13, 6, -2, -9,
-15, -20, -24, -29, -31, -34, -36, -37, -39, -42, -42, -44, -45, -45, -44, -43,
-41, -40, -37, -33, -28, -23, -18, -12, -5, 0, };

#endif /* AKWF_1705_512_H_ */