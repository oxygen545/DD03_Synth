#ifndef AKWF_1657_512_H_
#define AKWF_1657_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1657_512_NUM_CELLS 512
#define AKWF_1657_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1657_512_DATA [] = {1,
6, 9, 13, 17, 22, 27, 30, 36, 41, 45, 51, 56, 62, 68, 74, 80, 85, 90, 94, 97,
100, 101, 103, 104, 104, 103, 102, 100, 98, 95, 93, 88, 85, 79, 74, 69, 65, 59,
55, 49, 45, 41, 36, 32, 28, 25, 21, 17, 13, 8, 4, -1, -6, -11, -17, -21, -25,
-30, -35, -39, -42, -47, -51, -55, -58, -61, -62, -60, -59, -54, -46, -38, -26,
-12, 1, 16, 29, 39, 49, 56, 58, 60, 56, 51, 45, 37, 28, 20, 12, 5, 0, -5, -8,
-11, -13, -15, -17, -18, -22, -25, -31, -36, -44, -52, -60, -66, -71, -75, -76,
-74, -69, -61, -50, -37, -21, -4, 11, 27, 42, 53, 63, 72, 77, 82, 85, 85, 85,
84, 82, 80, 76, 71, 66, 59, 52, 45, 37, 29, 21, 15, 8, 1, -5, -10, -15, -20,
-24, -30, -36, -41, -49, -57, -65, -73, -81, -89, -98, -104, -111, -116, -120,
-122, -123, -123, -123, -121, -119, -115, -112, -108, -103, -98, -93, -87, -80,
-73, -67, -61, -53, -47, -40, -34, -29, -24, -18, -13, -8, -2, 3, 8, 14, 22, 26,
33, 40, 46, 53, 58, 64, 70, 75, 81, 86, 90, 96, 100, 102, 103, 103, 101, 98, 93,
85, 77, 68, 58, 46, 34, 23, 10, -3, -16, -28, -41, -52, -64, -75, -84, -93, -99,
-103, -105, -105, -104, -101, -97, -93, -87, -81, -74, -69, -63, -58, -52, -47,
-41, -36, -30, -26, -20, -15, -12, -8, -4, -1, 4, 6, 9, 14, 17, 21, 26, 30, 34,
38, 44, 48, 54, 58, 64, 68, 73, 78, 85, 89, 95, 99, 101, 105, 108, 108, 108,
107, 104, 101, 97, 93, 89, 84, 78, 74, 70, 65, 61, 56, 52, 48, 43, 39, 35, 30,
27, 22, 18, 15, 12, 7, 3, -1, -6, -11, -17, -23, -30, -36, -43, -49, -54, -58,
-60, -61, -60, -57, -53, -47, -41, -34, -26, -18, -11, -2, 5, 12, 20, 26, 33,
38, 43, 46, 47, 48, 47, 43, 39, 35, 26, 20, 12, 4, -4, -11, -17, -24, -30, -35,
-41, -45, -49, -52, -55, -57, -60, -60, -60, -60, -58, -56, -53, -48, -40, -33,
-23, -9, 4, 19, 35, 50, 64, 77, 87, 94, 98, 99, 97, 93, 88, 81, 72, 64, 56, 48,
40, 34, 28, 22, 17, 11, 7, 1, -5, -12, -18, -23, -31, -36, -42, -49, -55, -62,
-69, -74, -82, -88, -95, -102, -109, -114, -120, -124, -126, -127, -127, -126,
-123, -118, -113, -107, -99, -93, -86, -79, -73, -66, -60, -55, -49, -44, -38,
-32, -26, -21, -15, -10, -4, 1, 6, 11, 16, 22, 28, 34, 41, 49, 56, 63, 70, 77,
83, 89, 95, 98, 101, 102, 101, 100, 97, 94, 90, 85, 78, 70, 61, 51, 39, 28, 15,
2, -12, -23, -36, -46, -58, -67, -75, -83, -89, -95, -100, -103, -105, -104,
-103, -101, -96, -92, -84, -77, -69, -61, -53, -47, -40, -34, -29, -24, -20,
-16, -12, -9, -5, -1, };

#endif /* AKWF_1657_512_H_ */
