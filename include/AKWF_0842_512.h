#ifndef AKWF_0842_512_H_
#define AKWF_0842_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0842_512_NUM_CELLS 512
#define AKWF_0842_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0842_512_DATA [] = {2,
5, 7, 11, 14, 17, 20, 24, 27, 31, 35, 38, 44, 48, 52, 56, 60, 64, 69, 71, 76,
79, 83, 87, 90, 93, 96, 99, 102, 104, 106, 109, 110, 111, 112, 113, 113, 114,
114, 114, 114, 114, 115, 114, 113, 114, 114, 113, 113, 113, 112, 112, 112, 112,
110, 110, 110, 109, 107, 106, 106, 105, 103, 102, 101, 99, 98, 96, 95, 93, 92,
90, 87, 85, 83, 81, 79, 76, 74, 71, 69, 66, 63, 61, 58, 55, 52, 49, 46, 43, 39,
36, 33, 30, 27, 23, 21, 17, 13, 10, 7, 3, 1, -3, -6, -9, -12, -15, -18, -21,
-25, -27, -30, -33, -36, -38, -40, -44, -45, -47, -50, -51, -53, -56, -57, -59,
-60, -61, -62, -64, -64, -66, -67, -66, -67, -68, -68, -68, -68, -68, -69, -68,
-68, -68, -68, -69, -67, -67, -67, -68, -67, -68, -67, -67, -66, -67, -65, -65,
-65, -65, -64, -64, -63, -62, -61, -61, -61, -60, -59, -58, -57, -56, -55, -54,
-53, -51, -51, -50, -48, -48, -46, -44, -44, -42, -40, -39, -37, -36, -35, -33,
-32, -29, -29, -27, -25, -24, -22, -19, -18, -16, -15, -14, -12, -10, -9, -8,
-6, -3, -2, -1, 0, 2, 4, 5, 6, 8, 9, 10, 12, 12, 14, 15, 15, 17, 18, 19, 20, 20,
20, 22, 22, 22, 23, 24, 24, 25, 24, 24, 24, 24, 24, 25, 24, 24, 23, 21, 21, 19,
16, 14, 10, 7, 3, -1, -5, -12, -16, -22, -29, -35, -42, -49, -55, -63, -70, -77,
-83, -90, -96, -101, -107, -112, -116, -120, -122, -124, -126, -128, -128, -128,
-128, -127, -128, -128, -127, -127, -128, -128, -127, -126, -126, -126, -125,
-125, -124, -124, -124, -123, -122, -120, -119, -118, -118, -116, -115, -112,
-111, -110, -108, -107, -104, -101, -99, -98, -95, -92, -91, -88, -86, -82, -79,
-76, -74, -70, -68, -64, -61, -57, -54, -51, -48, -44, -40, -36, -34, -29, -26,
-22, -18, -15, -10, -6, -3, 0, 4, 7, 10, 15, 18, 21, 25, 28, 31, 35, 38, 41, 44,
47, 50, 53, 55, 58, 60, 62, 65, 67, 69, 70, 73, 73, 76, 76, 78, 78, 79, 80, 80,
81, 82, 81, 81, 82, 81, 81, 81, 82, 81, 81, 81, 80, 80, 82, 81, 80, 80, 80, 80,
79, 80, 79, 79, 78, 78, 77, 77, 77, 76, 75, 75, 74, 74, 73, 72, 70, 70, 70, 69,
67, 67, 66, 64, 63, 63, 61, 61, 58, 58, 56, 55, 54, 52, 51, 49, 48, 47, 44, 43,
42, 41, 39, 37, 36, 35, 33, 32, 29, 28, 26, 25, 23, 21, 20, 18, 16, 15, 13, 12,
10, 9, 7, 7, 5, 3, 2, 1, -1, -2, -3, -4, -5, -7, -8, -9, -10, -11, -11, -13,
-14, -14, -15, -15, -16, -16, -17, -18, -18, -18, -18, -19, -19, -20, -19, -18,
-19, -19, -19, -18, -18, -18, -17, -17, -16, -15, -14, -13, -13, -11, -8, -7,
-4, -2, 0, };

#endif /* AKWF_0842_512_H_ */
