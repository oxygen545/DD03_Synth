#ifndef AKWF_0736_512_H_
#define AKWF_0736_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0736_512_NUM_CELLS 512
#define AKWF_0736_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0736_512_DATA [] =
{16, 45, 68, 89, 104, 115, 120, 119, 112, 101, 84, 63, 38, 13, -14, -40, -65,
-87, -105, -118, -127, -128, -125, -116, -102, -83, -60, -35, -8, 0, 3, 8, 12,
16, 20, 24, 27, 29, 32, 36, 38, 41, 43, 46, 46, 48, 50, 50, 51, 50, 50, 51, 50,
49, 49, 48, 47, 45, 43, 42, 40, 38, 36, 33, 31, 28, 26, 23, 21, 19, 16, 12, 9,
7, 4, 2, 0, -3, -6, -8, -10, -12, -14, -15, -18, -19, -21, -22, -23, -25, -25,
-27, -27, -27, -27, -28, -28, -27, -27, -27, -27, -26, -25, -25, -24, -23, -22,
-22, -20, -20, -18, -17, -17, -16, -13, -12, -11, -10, -10, -8, -8, -7, -7, -7,
-5, -5, -5, -5, -8, -14, -18, -23, -28, -33, -37, -42, -45, -50, -54, -57, -61,
-65, -67, -71, -73, -75, -78, -81, -82, -84, -84, -85, -86, -85, -86, -85, -84,
-83, -81, -79, -77, -75, -72, -69, -66, -62, -57, -54, -49, -44, -40, -34, -29,
-24, -18, -13, -8, -1, 4, 10, 16, 22, 26, 32, 38, 43, 49, 54, 58, 62, 67, 71,
75, 79, 81, 84, 86, 88, 91, 92, 93, 93, 93, 94, 93, 93, 90, 89, 86, 83, 81, 78,
74, 71, 65, 62, 56, 51, 46, 41, 33, 28, 21, 15, 9, 2, -5, -16, -25, -31, -35,
-37, -37, -35, -32, -27, -20, -16, -11, -7, -6, -4, -5, -6, -10, -13, -18, -22,
-25, -27, -29, -28, -25, -20, -14, -3, 22, 45, 67, 85, 99, 108, 112, 109, 103,
91, 75, 54, 31, 6, -19, -45, -67, -87, -103, -116, -122, -123, -122, -112, -97,
-76, -54, -28, -4, 1, 4, 10, 14, 18, 22, 26, 29, 32, 35, 38, 40, 43, 44, 47, 48,
50, 50, 51, 51, 51, 52, 52, 51, 51, 50, 49, 48, 45, 44, 43, 41, 38, 36, 33, 31,
29, 26, 23, 21, 17, 14, 11, 9, 7, 5, 1, -2, -4, -7, -8, -11, -13, -14, -16, -19,
-20, -21, -22, -23, -24, -25, -27, -27, -27, -28, -28, -28, -28, -27, -27, -28,
-26, -26, -25, -25, -23, -23, -22, -20, -20, -19, -18, -17, -15, -14, -13, -12,
-11, -11, -9, -8, -7, -7, -7, -6, -5, -5, -5, -10, -14, -18, -22, -27, -30, -35,
-40, -43, -47, -51, -53, -57, -60, -63, -66, -68, -69, -72, -73, -76, -76, -78,
-84, -83, -83, -84, -83, -82, -81, -79, -77, -75, -72, -70, -66, -62, -59, -56,
-51, -47, -42, -38, -33, -28, -22, -17, -11, -6, 1, 5, 10, 16, 22, 27, 33, 37,
42, 48, 54, 58, 62, 66, 70, 73, 77, 80, 83, 84, 87, 89, 90, 91, 91, 92, 92, 90,
90, 89, 86, 84, 82, 79, 75, 72, 69, 63, 59, 54, 50, 43, 38, 32, 27, 20, 13, 7,
0, -8, -18, -26, -32, -36, -37, -35, -33, -28, -23, -18, -14, -10, -6, -4, -5,
-6, -9, -13, -17, -22, -26, -29, -31, -32, -30, -26, -20, -12, -2, };

#endif /* AKWF_0736_512_H_ */
