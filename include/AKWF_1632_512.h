#ifndef AKWF_1632_512_H_
#define AKWF_1632_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1632_512_NUM_CELLS 512
#define AKWF_1632_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1632_512_DATA [] = {0,
2, 4, 6, 9, 10, 12, 13, 16, 17, 19, 20, 21, 22, 24, 25, 26, 28, 30, 31, 32, 33,
34, 35, 37, 37, 38, 40, 41, 41, 41, 43, 43, 44, 44, 44, 45, 44, 44, 43, 44, 44,
44, 45, 45, 45, 45, 45, 46, 47, 47, 47, 47, 47, 47, 47, 46, 46, 46, 46, 45, 44,
43, 43, 42, 41, 41, 41, 41, 40, 40, 39, 40, 41, 41, 42, 42, 43, 44, 44, 45, 46,
45, 46, 46, 47, 48, 48, 49, 51, 52, 53, 54, 55, 56, 57, 57, 58, 59, 61, 62, 63,
66, 66, 68, 68, 69, 69, 69, 70, 70, 71, 72, 74, 75, 77, 77, 78, 79, 80, 81, 81,
83, 83, 83, 84, 84, 85, 86, 85, 85, 83, 81, 81, 79, 76, 74, 72, 70, 66, 64, 62,
58, 55, 53, 50, 47, 44, 41, 38, 34, 31, 28, 26, 22, 18, 14, 10, 6, 0, -4, -9,
-15, -21, -27, -33, -38, -44, -48, -54, -59, -62, -66, -70, -74, -78, -81, -84,
-88, -90, -92, -95, -98, -102, -105, -107, -110, -112, -116, -119, -121, -123,
-125, -126, -127, -128, -128, -128, -128, -127, -127, -126, -125, -124, -124,
-122, -120, -120, -117, -116, -113, -111, -109, -107, -104, -102, -98, -94, -92,
-88, -84, -81, -76, -73, -69, -63, -60, -55, -51, -47, -43, -38, -34, -30, -25,
-21, -17, -13, -8, -5, 0, 2, 6, 10, 13, 17, 20, 23, 25, 28, 32, 35, 39, 41, 45,
48, 50, 53, 55, 56, 59, 60, 61, 63, 64, 65, 66, 66, 66, 65, 65, 65, 66, 65, 64,
64, 65, 65, 65, 65, 63, 61, 60, 58, 56, 54, 50, 48, 46, 44, 41, 39, 38, 36, 34,
32, 30, 29, 26, 23, 21, 19, 16, 15, 11, 8, 5, 3, -1, -5, -8, -11, -15, -18, -20,
-23, -25, -27, -29, -31, -32, -35, -37, -40, -41, -43, -45, -45, -47, -48, -49,
-48, -49, -50, -51, -50, -51, -51, -53, -53, -55, -55, -56, -56, -58, -59, -59,
-60, -61, -61, -61, -61, -61, -60, -60, -59, -58, -57, -55, -54, -53, -52, -51,
-49, -47, -46, -45, -44, -42, -41, -40, -39, -36, -35, -33, -33, -31, -30, -29,
-27, -26, -25, -22, -22, -20, -18, -16, -15, -12, -10, -10, -7, -5, -4, -2, 0,
2, 4, 6, 7, 9, 10, 12, 14, 14, 17, 18, 19, 21, 23, 24, 26, 27, 29, 29, 31, 33,
35, 35, 38, 38, 38, 39, 39, 40, 39, 41, 41, 41, 41, 42, 42, 43, 42, 44, 43, 44,
44, 45, 46, 46, 47, 48, 48, 48, 49, 47, 49, 44, 55, 1, -56, -51, -55, -53, -56,
-55, -57, -56, -58, -58, -58, -59, -58, -59, -58, -59, -60, -60, -61, -61, -61,
-61, -60, -59, -58, -56, -54, -53, -50, -50, -49, -46, -45, -44, -42, -40, -39,
-36, -35, -34, -32, -31, -29, -28, -27, -26, -24, -23, -21, -20, -18, -16, -15,
-13, -11, -9, -7, -6, -4, -2, 0, };

#endif /* AKWF_1632_512_H_ */
