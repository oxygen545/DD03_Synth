#ifndef AKWF_0808_512_H_
#define AKWF_0808_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0808_512_NUM_CELLS 512
#define AKWF_0808_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0808_512_DATA [] = {1,
1, 3, 3, 5, 6, 8, 9, 11, 12, 13, 15, 17, 18, 20, 22, 24, 26, 28, 31, 33, 36, 37,
40, 41, 43, 44, 47, 48, 49, 50, 52, 53, 55, 56, 57, 57, 56, 57, 57, 57, 56, 57,
57, 55, 55, 55, 53, 53, 53, 52, 51, 50, 49, 48, 48, 48, 54, 63, 73, 82, 89, 91,
92, 91, 88, 84, 79, 75, 71, 67, 63, 58, 53, 48, 43, 35, 29, 22, 14, 8, 1, -6,
-15, -21, -27, -33, -38, -44, -49, -53, -58, -61, -65, -67, -70, -72, -74, -76,
-76, -76, -77, -77, -77, -77, -76, -76, -75, -74, -72, -72, -69, -68, -64, -61,
-57, -52, -48, -42, -39, -35, -30, -26, -22, -18, -14, -10, -7, -5, -1, 1, 3, 5,
6, 7, 7, 7, 8, 8, 7, 7, 6, 6, 4, 4, 2, 2, 0, -1, -2, -4, -5, -7, -8, -9, -10,
-11, -12, -13, -15, -16, -16, -18, -18, -19, -19, -21, -22, -22, -23, -23, -23,
-23, -20, -17, -15, -14, -13, -11, -9, -10, -10, -10, -11, -11, -12, -14, -14,
-16, -16, -17, -19, -19, -20, -21, -22, -21, -22, -23, -22, -23, -22, -22, -21,
-20, -20, -19, -18, -16, -15, -14, -12, -10, -9, -7, -6, -4, -1, 0, 2, 4, 6, 8,
10, 11, 14, 16, 19, 20, 22, 24, 27, 28, 30, 32, 34, 35, 37, 38, 40, 41, 41, 43,
45, 46, 47, 50, 51, 54, 56, 58, 61, 63, 64, 66, 67, 68, 67, 69, 68, 67, 67, 64,
63, 62, 60, 59, 56, 54, 50, 49, 46, 43, 40, 38, 34, 32, 28, 25, 23, 19, 17, 14,
11, 8, 6, 5, 5, 4, 4, 4, 4, 4, 5, 4, 5, 5, 6, 4, 4, 4, 4, 3, 3, 1, 2, 1, 0, -2,
-3, -3, -4, -6, -8, -9, -11, -12, -13, -15, -17, -18, -24, -32, -43, -54, -65,
-76, -86, -95, -103, -109, -115, -120, -124, -125, -127, -128, -127, -127, -125,
-122, -119, -115, -111, -104, -98, -91, -83, -75, -65, -56, -47, -38, -29, -22,
-14, -6, 1, 8, 13, 20, 25, 29, 34, 37, 41, 44, 47, 48, 51, 53, 54, 56, 57, 56,
57, 57, 57, 57, 56, 55, 55, 54, 54, 53, 50, 50, 49, 46, 46, 44, 44, 44, 45, 46,
47, 47, 48, 50, 52, 52, 52, 53, 53, 53, 53, 53, 53, 52, 50, 48, 47, 46, 44, 41,
40, 37, 36, 32, 31, 28, 25, 23, 20, 17, 13, 11, 7, 5, 2, -1, -5, -7, -10, -12,
-15, -19, -21, -23, -26, -29, -31, -34, -36, -37, -40, -42, -46, -48, -53, -56,
-60, -63, -67, -70, -72, -75, -76, -78, -79, -80, -79, -79, -79, -77, -77, -75,
-74, -71, -69, -66, -64, -61, -58, -56, -53, -50, -47, -43, -40, -37, -33, -30,
-27, -23, -21, -17, -13, -12, -9, -7, -6, -5, -5, -5, -4, -4, -5, -4, -5, -5,
-5, -4, -4, -5, -4, -4, -3, -2, -2, -1, 0, };

#endif /* AKWF_0808_512_H_ */
