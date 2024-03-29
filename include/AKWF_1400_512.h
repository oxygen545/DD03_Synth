#ifndef AKWF_1400_512_H_
#define AKWF_1400_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1400_512_NUM_CELLS 512
#define AKWF_1400_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1400_512_DATA [] = {3,
10, 15, 18, 23, 29, 33, 37, 42, 45, 49, 54, 57, 61, 64, 68, 71, 74, 78, 80, 83,
86, 90, 92, 95, 97, 100, 102, 104, 106, 109, 109, 112, 114, 115, 117, 118, 120,
120, 122, 123, 125, 125, 125, 127, 127, 127, 127, 127, 127, 127, 126, 124, 122,
120, 118, 117, 116, 115, 114, 112, 110, 109, 108, 107, 107, 105, 104, 104, 102,
101, 100, 99, 98, 96, 96, 95, 94, 92, 92, 91, 90, 89, 88, 87, 86, 86, 84, 83,
83, 83, 81, 80, 80, 79, 78, 77, 76, 76, 75, 74, 73, 72, 71, 71, 70, 68, 68, 68,
67, 66, 65, 64, 63, 63, 63, 61, 61, 60, 59, 58, 58, 57, 57, 55, 55, 54, 53, 53,
52, 52, 50, 50, 49, 50, 48, 48, 47, 45, 46, 45, 44, 43, 42, 42, 42, 41, 40, 39,
39, 38, 38, 37, 36, 36, 35, 35, 33, 33, 32, 32, 32, 31, 30, 29, 29, 28, 27, 27,
27, 26, 25, 25, 24, 24, 23, 22, 22, 21, 21, 20, 19, 19, 18, 17, 18, 18, 16, 16,
16, 15, 14, 13, 13, 12, 12, 11, 11, 9, 10, 9, 9, 9, 7, 7, 6, 6, 6, 5, 4, 4, 3,
3, 2, 2, 2, 1, 0, 0, -1, -1, -1, -2, -3, -3, -3, -4, -5, -6, -6, -6, -6, -8, -7,
-8, -8, -8, -9, -10, -11, -11, -11, -12, -12, -12, -13, -14, -14, -14, -15, -15,
-16, -16, -16, -17, -17, -18, -18, -19, -18, -19, -20, -21, -20, -22, -22, -22,
-22, -22, -22, -23, -24, -24, -24, -25, -26, -26, -26, -27, -27, -27, -29, -28,
-28, -29, -29, -30, -30, -30, -31, -32, -32, -32, -32, -33, -33, -34, -35, -35,
-34, -35, -36, -35, -37, -37, -37, -37, -37, -38, -38, -37, -38, -39, -39, -40,
-39, -41, -40, -41, -41, -41, -42, -42, -42, -42, -43, -44, -44, -44, -44, -45,
-45, -46, -45, -46, -46, -47, -46, -47, -47, -48, -48, -48, -48, -49, -50, -48,
-50, -49, -49, -50, -50, -51, -51, -50, -51, -51, -52, -52, -52, -53, -54, -53,
-54, -54, -53, -54, -54, -55, -55, -56, -55, -56, -55, -56, -56, -56, -57, -57,
-56, -57, -56, -58, -58, -57, -58, -58, -58, -58, -59, -59, -59, -59, -59, -60,
-60, -60, -60, -61, -60, -61, -61, -62, -62, -61, -62, -61, -62, -62, -63, -63,
-62, -62, -63, -63, -63, -63, -63, -63, -64, -64, -64, -65, -65, -64, -64, -64,
-65, -65, -65, -65, -65, -66, -65, -65, -66, -65, -65, -66, -67, -66, -67, -67,
-67, -67, -67, -67, -68, -67, -67, -67, -68, -67, -67, -67, -68, -67, -68, -68,
-68, -68, -68, -69, -68, -68, -68, -68, -69, -68, -69, -68, -68, -69, -69, -69,
-70, -69, -69, -69, -69, -69, -69, -68, -69, -69, -69, -69, -69, -69, -69, -70,
-69, -69, -68, -68, -69, -69, -69, -69, -69, -68, -70, -61, -49, -42, -35, -28,
-21, -15, -10, -4, 0, };

#endif /* AKWF_1400_512_H_ */
