#ifndef AKWF_1189_512_H_
#define AKWF_1189_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1189_512_NUM_CELLS 512
#define AKWF_1189_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1189_512_DATA [] = {6,
49, 88, 109, 120, 123, 119, 107, 102, 102, 103, 106, 108, 102, 85, 72, 74, 85,
94, 97, 96, 99, 97, 93, 91, 92, 88, 76, 56, 36, 17, 15, 35, 61, 84, 95, 95, 94,
86, 73, 67, 65, 68, 73, 78, 77, 61, 48, 50, 59, 65, 67, 63, 61, 49, 28, 12, 0,
-8, -18, -25, -30, -31, -17, 16, 54, 83, 96, 99, 98, 88, 74, 66, 63, 62, 63, 62,
55, 36, 23, 26, 37, 46, 49, 49, 52, 53, 51, 54, 57, 55, 44, 24, 5, -14, -15, 4,
31, 53, 62, 62, 60, 50, 36, 30, 28, 30, 31, 27, 14, -14, -35, -39, -36, -33,
-33, -36, -37, -46, -61, -68, -71, -71, -73, -75, -73, -70, -50, -11, 30, 63,
80, 84, 84, 76, 62, 54, 53, 53, 54, 54, 47, 28, 16, 19, 29, 36, 39, 36, 39, 37,
31, 30, 30, 26, 14, -7, -26, -45, -44, -23, 6, 27, 37, 39, 37, 28, 16, 12, 12,
15, 22, 26, 26, 12, 5, 10, 21, 27, 28, 26, 24, 11, -9, -24, -36, -45, -54, -60,
-63, -65, -48, -13, 24, 50, 63, 64, 63, 53, 38, 32, 29, 28, 29, 26, 20, -1, -11,
-8, 3, 11, 13, 13, 16, 13, 6, 3, -1, -9, -28, -54, -78, -99, -101, -80, -56,
-38, -31, -32, -35, -47, -60, -65, -66, -63, -60, -60, -71, -94, -108, -107,
-98, -90, -87, -86, -83, -91, -99, -104, -105, -101, -100, -100, -95, -87, -62,
-20, 25, 58, 75, 81, 84, 75, 62, 58, 57, 58, 60, 60, 51, 31, 22, 27, 38, 45, 46,
46, 50, 46, 42, 41, 42, 37, 23, 2, -18, -35, -31, -8, 17, 38, 46, 46, 44, 32,
21, 17, 16, 19, 25, 30, 25, 8, -2, 3, 12, 19, 18, 16, 13, -2, -22, -37, -47,
-55, -64, -71, -73, -73, -53, -17, 20, 45, 58, 59, 58, 48, 34, 29, 26, 27, 27,
27, 19, 0, -9, -2, 9, 17, 20, 21, 25, 24, 25, 28, 32, 30, 15, -4, -25, -43, -40,
-16, 9, 27, 34, 34, 31, 18, 5, 1, -1, 0, 0, -5, -22, -51, -68, -71, -67, -65,
-66, -68, -70, -81, -94, -101, -103, -103, -106, -107, -106, -100, -75, -35, 6,
34, 48, 51, 49, 38, 25, 20, 18, 19, 20, 19, 10, -10, -19, -13, -4, 2, 4, 3, 6,
1, -3, -4, -3, -8, -24, -44, -64, -79, -72, -48, -21, -1, 5, 6, 5, -6, -17, -18,
-18, -13, -7, -3, -8, -26, -35, -31, -23, -20, -22, -25, -29, -47, -69, -84,
-95, -104, -114, -120, -124, -122, -101, -64, -28, -5, 5, 5, 3, -10, -22, -28,
-31, -29, -29, -31, -40, -59, -66, -58, -47, -39, -38, -36, -31, -35, -39, -40,
-42, -49, -68, -90, -112, -127, -120, -95, -69, -50, -44, -43, -45, -56, -65,
-68, -65, -60, -56, -57, -69, -90, -99, -93, -83, -74, -70, -68, -64, -72, -80,
-81, -78, -75, -73, -69, -62, -52, -19, };

#endif /* AKWF_1189_512_H_ */
