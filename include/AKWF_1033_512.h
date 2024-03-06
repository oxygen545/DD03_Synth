#ifndef AKWF_1033_512_H_
#define AKWF_1033_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1033_512_NUM_CELLS 512
#define AKWF_1033_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1033_512_DATA [] = {1,
3, 6, 9, 11, 14, 16, 18, 20, 21, 23, 23, 25, 25, 26, 28, 28, 28, 29, 30, 30, 30,
30, 30, 31, 31, 31, 32, 32, 31, 31, 32, 32, 33, 33, 32, 32, 32, 32, 32, 32, 31,
31, 30, 46, 68, 71, 66, 62, 61, 65, 69, 75, 80, 85, 87, 88, 86, 70, 55, 55, 54,
51, 60, 78, 80, 75, 68, 66, 67, 73, 81, 90, 99, 107, 112, 117, 117, 114, 108,
102, 96, 89, 82, 74, 65, 54, 45, 35, 25, 16, 7, -1, -9, -16, -22, -27, -32, -36,
-40, -43, -45, -47, -50, -51, -53, -55, -56, -56, -57, -57, -59, -68, -74, -69,
-64, -61, -59, -58, -57, -55, -54, -51, -48, -42, -37, -31, -25, -19, -14, -9,
-4, 0, 5, 8, 11, 13, 16, 19, 20, 22, 23, 25, 26, 26, 28, 29, 29, 29, 30, 31, 31,
31, 32, 32, 32, 32, 32, 31, 32, 31, 32, 32, 31, 31, 32, 32, 31, 32, 31, 31, 30,
34, 15, -38, -60, -54, -47, -47, -53, -66, -81, -96, -109, -119, -125, -127,
-128, -126, -120, -115, -110, -103, -96, -90, -85, -80, -71, -33, -8, -11, -16,
-18, -14, -7, 3, 11, 18, 23, 25, 25, 22, 18, 12, 7, 0, -7, -13, -18, -23, -28,
-33, -36, -40, -42, -45, -47, -49, -51, -53, -53, -55, -55, -56, -57, -58, -58,
-59, -59, -60, -60, -60, -60, -61, -60, -60, -60, -60, -61, -60, -61, -61, -57,
-54, -51, -48, -45, -42, -40, -36, -31, -28, -22, -17, -12, -7, -3, 1, 5, 9, 12,
15, 18, 20, 22, 23, 25, 27, 28, 29, 30, 31, 32, 33, 34, 34, 35, 35, 35, 36, 35,
36, 37, 36, 36, 37, 37, 36, 37, 37, 36, 37, 37, 36, 36, 36, 36, 36, 36, 37, 36,
36, 36, 36, 35, 34, 36, 35, 36, 35, 35, 35, 34, 34, 34, 33, 34, 33, 33, 32, 33,
33, 32, 32, 33, 32, 32, 33, 31, 30, 29, 28, 27, 26, 25, 24, 22, 21, 20, 18, 16,
15, 14, 12, 11, 10, 8, 7, 6, 5, 5, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -2, -1, -2, -1, -2, -2, -2, -1, -1, -2, -2, -2, -2, -2,
-2, -1, -2, -1, -2, -2, -2, -1, -2, -2, -4, -4, -4, -5, -6, -7, -8, -9, -11,
-12, -13, -14, -15, -16, -18, -19, -20, -21, -22, -23, -24, -24, -25, -26, -25,
-26, -26, -26, -27, -26, -27, -27, -27, -27, -26, -27, -27, -28, -27, -28, -27,
-27, -27, -27, -27, -27, -27, -27, -26, -27, -27, -27, -27, -26, -26, -26, -26,
-26, -26, -26, -25, -26, -26, -25, -25, -25, -25, -25, -24, -25, -25, -25, -25,
-25, -25, -25, -23, -23, -24, -25, -24, -23, -24, -24, -23, -23, -23, -23, -23,
-23, -22, -23, -22, -23, -23, -22, -19, -17, -16, -14, -12, -12, -8, -7, -4, -1,
};

#endif /* AKWF_1033_512_H_ */
