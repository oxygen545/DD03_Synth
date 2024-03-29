#ifndef AKWF_1154_512_H_
#define AKWF_1154_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1154_512_NUM_CELLS 512
#define AKWF_1154_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1154_512_DATA [] = {0,
4, 7, 10, 13, 16, 17, 20, 23, 25, 26, 29, 31, 32, 34, 35, 35, 37, 39, 40, 41,
42, 43, 44, 44, 45, 46, 46, 48, 48, 49, 49, 49, 49, 49, 49, 50, 50, 51, 51, 51,
52, 51, 52, 51, 52, 52, 51, 51, 52, 52, 52, 52, 52, 51, 51, 52, 51, 51, 51, 51,
51, 51, 51, 51, 50, 51, 50, 50, 50, 50, 50, 50, 49, 48, 49, 49, 49, 48, 49, 48,
48, 48, 48, 47, 47, 47, 46, 46, 46, 46, 46, 46, 45, 45, 45, 45, 45, 44, 44, 44,
43, 43, 43, 43, 42, 43, 41, 42, 42, 41, 41, 40, 40, 40, 40, 39, 40, 39, 40, 38,
39, 39, 38, 38, 38, 38, 37, 37, 36, 36, 36, 36, 35, 35, 35, 34, 35, 33, 34, 33,
34, 33, 32, 32, 33, 32, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 29, 28, 28, 27,
28, 27, 27, 27, 27, 27, 26, 26, 26, 25, 25, 25, 25, 24, 24, 24, 23, 22, 23, 23,
22, 22, 22, 22, 21, 21, 21, 20, 20, 19, 19, 20, 19, 18, 19, 17, 18, 17, 18, 17,
16, 16, 15, 16, 15, 15, 15, 15, 14, 14, 14, 13, 13, 12, 13, 13, 12, 12, 11, 12,
10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 7, 7, 6, 7, 6, 5, 6, 5, 5, 5, 4, 4, 3, 3, 3, 3,
3, 2, 1, 2, 2, 1, 0, 1, -1, -1, -1, -1, -1, -2, -3, -2, -2, -3, -3, -4, -4, -4,
-4, -5, -5, -5, -6, -6, -6, -7, -7, -8, -8, -8, -8, -8, -8, -9, -9, -10, -10,
-10, -10, -10, -12, -12, -12, -12, -12, -13, -12, -13, -13, -13, -14, -14, -15,
-15, -16, -16, -16, -16, -16, -17, -17, -18, -17, -18, -18, -19, -19, -19, -20,
-19, -20, -20, -20, -21, -21, -21, -21, -22, -22, -22, -22, -22, -22, -23, -24,
-23, -24, -24, -25, -25, -25, -25, -25, -26, -26, -26, -27, -27, -27, -28, -28,
-28, -28, -28, -28, -29, -28, -30, -29, -29, -29, -29, -30, -31, -31, -31, -32,
-31, -31, -31, -32, -33, -33, -33, -34, -34, -34, -34, -33, -34, -35, -35, -35,
-34, -36, -36, -36, -37, -36, -36, -37, -37, -37, -37, -37, -38, -38, -41, -44,
-45, -46, -46, -46, -47, -47, -47, -46, -46, -46, -44, -45, -43, -42, -41, -40,
-38, -37, -35, -33, -32, -30, -28, -26, -24, -22, -19, -18, -15, -13, -11, -9,
-6, -4, -1, 1, 4, 6, 9, 12, 15, 17, 21, 22, 25, 20, 6, -3, -11, -18, -24, -29,
-35, -40, -44, -50, -54, -58, -63, -66, -70, -73, -76, -80, -82, -85, -88, -90,
-93, -94, -98, -100, -102, -103, -105, -107, -108, -109, -112, -113, -114, -116,
-118, -118, -120, -121, -122, -123, -124, -125, -126, -127, -127, -127, -113,
-98, -89, -79, -72, -64, -56, -50, -44, -38, -33, -27, -23, -17, -13, -10, -6,
-2, };

#endif /* AKWF_1154_512_H_ */
