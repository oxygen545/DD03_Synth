#ifndef AKWF_0104_512_H_
#define AKWF_0104_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0104_512_NUM_CELLS 512
#define AKWF_0104_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0104_512_DATA [] = {1,
3, 3, 5, 6, 7, 9, 10, 10, 13, 14, 15, 16, 18, 18, 20, 21, 23, 24, 26, 26, 28,
28, 30, 31, 32, 35, 35, 36, 37, 39, 40, 42, 43, 44, 44, 46, 47, 48, 50, 51, 52,
53, 53, 55, 56, 57, 58, 60, 60, 62, 63, 64, 65, 66, 66, 67, 69, 70, 70, 71, 72,
73, 73, 75, 76, 77, 78, 78, 80, 80, 81, 81, 82, 84, 84, 85, 85, 85, 86, 86, 87,
88, 89, 89, 89, 90, 90, 91, 91, 92, 93, 93, 92, 93, 94, 94, 94, 95, 96, 94, 96,
96, 97, 96, 97, 96, 96, 96, 96, 97, 97, 96, 97, 97, 97, 97, 97, 97, 97, 96, 96,
95, 95, 96, 95, 95, 95, 94, 94, 94, 93, 93, 93, 93, 93, 92, 92, 91, 90, 89, 89,
89, 89, 88, 87, 88, 87, 86, 85, 84, 84, 82, 82, 81, 81, 80, 79, 78, 78, 78, 76,
75, 75, 74, 73, 72, 71, 70, 69, 69, 67, 67, 66, 64, 65, 63, 62, 62, 59, 60, 58,
57, 55, 54, 54, 52, 51, 50, 49, 48, 47, 46, 45, 45, 43, 42, 42, 39, 38, 37, 36,
35, 34, 33, 32, 31, 30, 28, 27, 26, 24, 23, 22, 21, 20, 19, 18, 16, 15, 14, 14,
12, 11, 10, 9, 7, 6, 4, 4, 2, 2, 0, 0, -2, -3, -4, -5, -7, -8, -8, -10, -11,
-11, -12, -14, -15, -17, -18, -18, -19, -20, -21, -22, -23, -24, -25, -26, -28,
-28, -29, -29, -31, -31, -32, -33, -35, -35, -36, -36, -38, -39, -39, -40, -41,
-41, -42, -43, -44, -44, -45, -46, -46, -48, -48, -48, -49, -50, -50, -51, -51,
-52, -52, -53, -53, -53, -54, -55, -55, -56, -56, -56, -56, -57, -57, -59, -59,
-59, -58, -60, -60, -59, -60, -61, -60, -60, -61, -61, -61, -62, -62, -62, -61,
-62, -62, -62, -62, -62, -62, -62, -62, -62, -62, -61, -62, -62, -62, -61, -62,
-62, -62, -61, -61, -60, -60, -60, -61, -59, -59, -59, -58, -59, -59, -58, -57,
-58, -57, -56, -56, -56, -55, -55, -54, -54, -53, -64, -72, -68, -73, -76, -79,
-80, -79, -80, -81, -80, -80, -80, -79, -77, -77, -76, -75, -75, -74, -74, -74,
-74, -74, -74, -72, -72, -72, -73, -72, -73, -72, -72, -72, -73, -72, -73, -73,
-72, -72, -73, -74, -73, -73, -73, -72, -73, -73, -74, -72, -72, -73, -72, -72,
-71, -72, -71, -72, -71, -71, -70, -70, -70, -70, -70, -69, -68, -67, -68, -67,
-66, -66, -66, -66, -65, -65, -64, -64, -63, -63, -62, -62, -61, -60, -59, -58,
-58, -57, -58, -57, -55, -56, -55, -54, -53, -52, -51, -52, -50, -50, -48, -48,
-47, -46, -46, -44, -44, -42, -42, -41, -40, -38, -38, -36, -37, -36, -34, -33,
-31, -31, -30, -29, -28, -27, -26, -25, -23, -22, -21, -20, -19, -17, -17, -16,
-15, -13, -11, -11, -10, -8, -7, -6, -5, -3, -2, -1, 0, };

#endif /* AKWF_0104_512_H_ */
