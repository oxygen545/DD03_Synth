#ifndef AKWF_1401_512_H_
#define AKWF_1401_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1401_512_NUM_CELLS 512
#define AKWF_1401_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1401_512_DATA [] = {0,
6, 13, 19, 24, 31, 36, 41, 45, 50, 55, 59, 63, 67, 70, 73, 76, 79, 81, 83, 86,
87, 88, 90, 91, 92, 93, 92, 94, 92, 95, 105, 110, 116, 120, 123, 125, 127, 127,
127, 124, 122, 121, 120, 118, 116, 115, 113, 113, 112, 110, 110, 108, 106, 106,
105, 104, 103, 103, 101, 101, 98, 98, 98, 97, 95, 95, 93, 93, 92, 91, 91, 89,
88, 88, 87, 86, 85, 84, 84, 82, 82, 81, 81, 80, 79, 78, 77, 77, 76, 74, 75, 73,
73, 72, 71, 71, 70, 69, 69, 68, 66, 67, 65, 64, 64, 64, 63, 62, 61, 61, 59, 59,
59, 59, 57, 56, 56, 55, 54, 53, 54, 52, 51, 51, 51, 49, 49, 48, 49, 47, 47, 46,
45, 44, 45, 44, 43, 43, 42, 41, 40, 40, 40, 38, 38, 38, 38, 36, 36, 35, 34, 34,
34, 33, 33, 31, 31, 30, 30, 30, 29, 29, 28, 28, 27, 26, 25, 25, 24, 24, 24, 22,
22, 21, 21, 20, 19, 20, 19, 18, 18, 17, 17, 16, 16, 15, 15, 14, 15, 14, 14, 12,
12, 11, 11, 11, 10, 9, 9, 8, 8, 6, 6, 7, 5, 6, 5, 4, 5, 4, 3, 2, 2, 1, 2, 0, 0,
-1, -1, -2, -1, -3, -2, -3, -4, -4, -4, -5, -5, -5, -6, -6, -7, -8, -7, -8, -8,
-10, -10, -10, -11, -11, -12, -11, -12, -12, -12, -13, -14, -15, -14, -14, -16,
-16, -16, -16, -17, -18, -17, -18, -18, -18, -19, -19, -19, -21, -21, -21, -21,
-22, -23, -23, -23, -23, -24, -23, -24, -25, -25, -26, -26, -27, -27, -27, -27,
-28, -28, -28, -28, -30, -29, -30, -30, -30, -30, -31, -31, -32, -32, -32, -32,
-33, -33, -33, -33, -35, -34, -35, -35, -36, -36, -37, -37, -37, -37, -38, -38,
-38, -38, -39, -39, -39, -40, -40, -40, -40, -40, -41, -42, -41, -42, -42, -42,
-43, -43, -42, -43, -43, -43, -45, -45, -45, -45, -45, -45, -45, -46, -46, -46,
-47, -47, -47, -47, -48, -49, -47, -48, -49, -48, -48, -50, -49, -50, -50, -51,
-50, -50, -50, -50, -51, -51, -52, -51, -52, -52, -53, -53, -52, -53, -52, -53,
-54, -53, -53, -54, -55, -55, -55, -55, -55, -55, -55, -55, -56, -55, -56, -56,
-56, -57, -57, -57, -57, -57, -58, -57, -57, -57, -57, -58, -58, -59, -59, -59,
-58, -59, -60, -59, -59, -59, -60, -60, -59, -60, -61, -60, -60, -61, -61, -61,
-61, -61, -60, -62, -61, -62, -62, -61, -62, -62, -62, -62, -62, -62, -62, -63,
-62, -62, -63, -63, -62, -62, -63, -63, -63, -63, -63, -63, -63, -63, -63, -64,
-64, -64, -64, -64, -64, -63, -64, -64, -63, -64, -64, -64, -65, -64, -64, -64,
-64, -65, -64, -64, -64, -65, -65, -64, -64, -64, -65, -65, -65, -65, -64, -64,
-65, -65, -65, -65, -65, -64, -65, -65, -65, -64, -66, -62, -45, -36, -27, -19,
-10, -3, };

#endif /* AKWF_1401_512_H_ */
