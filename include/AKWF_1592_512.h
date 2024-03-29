#ifndef AKWF_1592_512_H_
#define AKWF_1592_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1592_512_NUM_CELLS 512
#define AKWF_1592_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1592_512_DATA [] = {0,
2, 3, 4, 7, 8, 9, 10, 12, 13, 16, 18, 20, 22, 23, 25, 25, 24, 23, 23, 25, 30,
35, 40, 45, 49, 52, 55, 58, 60, 62, 64, 66, 69, 71, 73, 76, 77, 79, 81, 82, 84,
84, 83, 83, 84, 86, 87, 88, 88, 88, 87, 86, 86, 86, 84, 84, 82, 82, 81, 80, 79,
78, 77, 76, 74, 72, 70, 69, 68, 66, 64, 63, 58, 53, 51, 50, 51, 51, 51, 50, 49,
47, 46, 44, 43, 41, 40, 41, 39, 39, 39, 38, 41, 45, 49, 51, 53, 52, 52, 52, 54,
56, 57, 59, 61, 65, 65, 67, 70, 72, 73, 73, 75, 75, 74, 73, 73, 71, 70, 69, 67,
66, 66, 69, 75, 80, 88, 93, 97, 101, 103, 106, 108, 107, 108, 107, 106, 106,
106, 104, 104, 105, 104, 105, 105, 106, 105, 107, 106, 107, 106, 104, 103, 101,
99, 96, 93, 91, 90, 88, 87, 86, 86, 87, 88, 91, 92, 94, 97, 98, 99, 99, 103,
105, 105, 103, 99, 95, 91, 88, 84, 77, 69, 64, 63, 66, 69, 68, 68, 66, 65, 64,
63, 61, 59, 59, 59, 58, 57, 56, 57, 56, 56, 57, 56, 55, 55, 55, 55, 54, 54, 54,
54, 53, 53, 53, 51, 52, 50, 51, 50, 48, 49, 47, 47, 47, 45, 44, 44, 43, 41, 40,
38, 37, 36, 35, 33, 31, 30, 28, 26, 25, 22, 20, 18, 15, 12, 10, 8, 5, 0, -4, -9,
-13, -16, -17, -17, -18, -18, -17, -17, -18, -18, -18, -17, -18, -19, -20, -22,
-23, -24, -22, -19, -17, -17, -19, -21, -22, -24, -23, -23, -23, -23, -22, -22,
-22, -23, -21, -22, -22, -23, -24, -23, -25, -25, -24, -27, -35, -47, -53, -51,
-45, -40, -39, -41, -44, -45, -47, -49, -50, -52, -53, -54, -55, -56, -56, -58,
-57, -58, -59, -60, -61, -61, -61, -62, -62, -63, -63, -63, -63, -64, -63, -65,
-66, -67, -69, -71, -73, -75, -76, -78, -79, -81, -82, -83, -84, -84, -84, -85,
-86, -86, -86, -87, -87, -88, -88, -88, -89, -90, -90, -90, -91, -91, -92, -93,
-93, -94, -94, -95, -95, -96, -97, -97, -98, -100, -102, -102, -103, -105, -105,
-105, -106, -106, -106, -105, -103, -101, -98, -94, -89, -85, -82, -80, -80,
-83, -91, -102, -111, -119, -124, -126, -128, -128, -127, -124, -121, -119,
-116, -115, -113, -111, -110, -109, -107, -103, -97, -91, -83, -75, -67, -60,
-53, -47, -43, -42, -42, -42, -44, -45, -46, -43, -39, -32, -25, -19, -14, -11,
-10, -11, -12, -13, -15, -16, -14, -14, -17, -21, -25, -28, -30, -31, -33, -34,
-36, -36, -38, -39, -40, -42, -43, -44, -45, -45, -46, -47, -47, -47, -47, -47,
-47, -47, -47, -47, -47, -46, -46, -46, -44, -44, -44, -42, -42, -41, -40, -39,
-39, -37, -38, -37, -35, -34, -32, -32, -31, -29, -28, -26, -25, -24, -22, -20,
-18, -15, -12, -7, -4, -2, -2, -1, 0, -1, };

#endif /* AKWF_1592_512_H_ */
