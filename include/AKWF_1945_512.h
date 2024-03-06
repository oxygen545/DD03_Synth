#ifndef AKWF_1945_512_H_
#define AKWF_1945_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1945_512_NUM_CELLS 512
#define AKWF_1945_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1945_512_DATA [] = {0,
4, 8, 11, 16, 19, 24, 26, 31, 35, 38, 41, 46, 50, 54, 57, 61, 65, 68, 72, 76,
80, 83, 86, 90, 95, 98, 102, 106, 109, 113, 117, 121, 124, 127, 126, 124, 122,
119, 118, 116, 114, 111, 109, 108, 105, 104, 102, 99, 96, 95, 93, 91, 89, 86,
84, 82, 81, 79, 75, 74, 72, 70, 67, 66, 64, 61, 59, 57, 55, 53, 50, 49, 47, 45,
43, 41, 38, 37, 34, 32, 32, 32, 32, 33, 33, 34, 34, 35, 35, 37, 36, 37, 37, 38,
39, 38, 39, 40, 40, 40, 41, 42, 42, 42, 43, 43, 44, 45, 45, 46, 45, 46, 46, 47,
48, 49, 49, 50, 49, 50, 51, 52, 52, 52, 52, 54, 54, 52, 51, 49, 49, 47, 46, 45,
43, 41, 41, 39, 38, 36, 34, 34, 32, 31, 30, 28, 27, 26, 25, 23, 21, 21, 18, 17,
16, 15, 14, 12, 11, 9, 8, 7, 5, 4, 3, 1, 0, -2, -3, -3, -5, -6, -8, -10, -11,
-13, -14, -16, -18, -19, -21, -22, -25, -26, -27, -28, -31, -32, -34, -35, -37,
-39, -41, -42, -43, -44, -46, -48, -50, -51, -53, -55, -56, -58, -60, -62, -62,
-65, -67, -68, -70, -71, -72, -74, -77, -78, -79, -81, -83, -84, -82, -79, -77,
-75, -73, -71, -69, -67, -65, -63, -61, -58, -56, -54, -51, -49, -48, -45, -43,
-42, -39, -38, -35, -33, -31, -29, -26, -24, -22, -20, -18, -16, -13, -12, -9,
-7, -5, -3, -2, 1, 3, 5, 7, 9, 11, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25,
27, 28, 29, 30, 32, 33, 34, 35, 36, 37, 38, 40, 40, 41, 44, 44, 45, 47, 47, 49,
50, 51, 52, 53, 55, 56, 57, 59, 59, 61, 63, 63, 64, 65, 66, 68, 69, 67, 63, 60,
57, 54, 52, 50, 46, 44, 41, 38, 35, 32, 30, 26, 24, 21, 18, 16, 12, 10, 8, 4, 2,
-1, -3, -7, -10, -12, -15, -18, -21, -24, -26, -29, -32, -35, -37, -40, -44,
-46, -48, -51, -54, -58, -59, -61, -59, -59, -58, -57, -57, -55, -54, -53, -52,
-52, -50, -49, -48, -48, -47, -45, -45, -43, -42, -41, -41, -39, -39, -38, -37,
-35, -35, -33, -34, -32, -31, -31, -30, -29, -28, -26, -25, -25, -23, -22, -22,
-21, -20, -19, -19, -17, -19, -20, -23, -25, -27, -29, -31, -33, -34, -37, -38,
-41, -42, -44, -46, -47, -49, -52, -54, -56, -57, -60, -61, -63, -66, -67, -70,
-71, -73, -75, -76, -79, -81, -82, -84, -87, -89, -90, -92, -95, -96, -98, -100,
-101, -104, -107, -106, -105, -103, -102, -100, -99, -97, -97, -96, -94, -93,
-92, -90, -89, -87, -86, -85, -84, -83, -82, -80, -79, -77, -76, -75, -74, -72,
-71, -70, -69, -67, -66, -65, -63, -62, -61, -59, -58, -56, -55, -55, -53, -52,
-51, -50, -48, -46, -43, -39, -35, -31, -28, -24, -21, -17, -13, -9, -6, -2, };

#endif /* AKWF_1945_512_H_ */
