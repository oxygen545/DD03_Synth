#ifndef AKWF_0023_512_H_
#define AKWF_0023_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0023_512_NUM_CELLS 512
#define AKWF_0023_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0023_512_DATA [] =
{-3, -9, -16, -23, -28, -34, -39, -43, -48, -51, -55, -59, -62, -65, -67, -70,
-72, -74, -76, -77, -79, -81, -82, -82, -83, -84, -86, -85, -87, -87, -88, -89,
-89, -89, -89, -89, -90, -89, -90, -90, -90, -89, -89, -89, -89, -89, -89, -89,
-88, -89, -88, -88, -88, -88, -87, -87, -86, -86, -86, -86, -86, -85, -84, -85,
-83, -84, -84, -82, -82, -82, -81, -81, -81, -80, -79, -80, -79, -79, -78, -78,
-78, -78, -76, -76, -75, -75, -75, -74, -74, -74, -74, -73, -73, -72, -71, -71,
-71, -70, -70, -69, -70, -68, -68, -67, -67, -67, -67, -66, -65, -65, -65, -64,
-64, -63, -63, -62, -62, -62, -61, -60, -59, -60, -59, -59, -59, -58, -58, -58,
-57, -56, -56, -56, -55, -55, -54, -53, -54, -53, -52, -53, -52, -51, -51, -51,
-50, -49, -49, -49, -49, -48, -47, -47, -46, -46, -45, -45, -45, -44, -43, -42,
-43, -43, -41, -42, -42, -41, -40, -39, -39, -39, -39, -38, -38, -37, -37, -36,
-36, -36, -34, -35, -34, -34, -33, -34, -32, -32, -32, -30, -31, -30, -30, -30,
-29, -28, -28, -28, -27, -27, -27, -26, -26, -25, -25, -25, -24, -24, -23, -22,
-23, -22, -22, -21, -20, -20, -19, -19, -19, -18, -17, -17, -17, -17, -16, -15,
-15, -15, -14, -14, -14, -13, -12, -12, -12, -12, -11, -11, -10, -10, -8, -8,
-8, -8, -7, -7, -6, -6, -6, -6, -5, -5, -4, -3, -2, -2, -2, -2, -2, 0, 0, 0, 0,
1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 6, 8, 7, 7, 8, 9, 9, 9, 10, 11, 11, 11,
12, 12, 13, 13, 14, 14, 14, 15, 16, 16, 17, 17, 17, 18, 18, 18, 18, 19, 19, 20,
20, 21, 21, 21, 22, 22, 22, 23, 24, 25, 26, 25, 26, 26, 26, 27, 27, 27, 28, 29,
29, 30, 30, 30, 31, 32, 33, 31, 32, 33, 34, 34, 35, 34, 36, 35, 36, 37, 37, 38,
38, 39, 38, 39, 40, 40, 41, 42, 40, 42, 42, 42, 43, 43, 44, 45, 46, 45, 46, 46,
47, 47, 48, 48, 48, 49, 50, 50, 50, 50, 51, 52, 52, 52, 53, 53, 53, 54, 53, 55,
55, 55, 56, 56, 57, 58, 57, 58, 59, 59, 60, 60, 61, 61, 61, 61, 62, 63, 63, 64,
64, 65, 66, 65, 65, 67, 67, 67, 68, 68, 69, 69, 68, 69, 70, 71, 72, 70, 72, 72,
73, 74, 73, 74, 74, 75, 75, 76, 76, 77, 77, 77, 78, 78, 79, 78, 79, 80, 80, 81,
81, 82, 81, 82, 83, 84, 84, 85, 84, 85, 86, 86, 86, 86, 88, 88, 87, 89, 89, 89,
90, 91, 91, 91, 92, 92, 92, 93, 94, 95, 94, 94, 96, 96, 96, 97, 97, 98, 97, 99,
99, 99, 100, 100, 101, 101, 100, 101, 102, 102, 103, 103, 104, 103, 77, 58, 58,
50, 42, 34, 30, 25, 21, 16, 9, 2, };

#endif /* AKWF_0023_512_H_ */