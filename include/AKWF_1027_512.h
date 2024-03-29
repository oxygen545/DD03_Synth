#ifndef AKWF_1027_512_H_
#define AKWF_1027_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1027_512_NUM_CELLS 512
#define AKWF_1027_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1027_512_DATA [] =
{19, 31, 32, 37, 38, 41, 43, 46, 46, 48, 48, 50, 50, 52, 51, 53, 53, 54, 56, 55,
53, 55, 54, 55, 52, 40, 37, 36, 35, 35, 35, 34, 34, 34, 33, 33, 34, 32, 36, 29,
54, 85, 84, 89, 89, 92, 92, 94, 95, 95, 95, 97, 99, 95, 95, 92, 98, 114, 116,
117, 118, 118, 118, 118, 118, 117, 117, 117, 117, 117, 117, 116, 117, 116, 116,
116, 115, 116, 115, 116, 116, 116, 116, 116, 115, 116, 115, 116, 112, 98, 97,
95, 95, 94, 93, 93, 92, 92, 91, 92, 90, 91, 89, 93, 78, 50, 48, 45, 43, 42, 42,
40, 39, 38, 37, 37, 36, 36, 35, 34, 36, 14, 7, 6, 4, 4, 1, 1, -2, -3, -5, -6,
-7, -8, -8, -9, -10, -10, -11, -12, -13, -13, -14, -13, -15, -15, -16, -15, -16,
-16, -17, -16, -22, -35, -36, -38, -39, -41, -41, -42, -42, -43, -43, -45, -44,
-45, -44, -50, -20, 5, 4, 10, 9, 13, 11, 13, 13, 15, 14, 14, 14, 13, 14, 11, 20,
35, 36, 38, 38, 38, 39, 37, 37, 38, 38, 37, 36, 36, 37, 36, 36, 36, 37, 36, 36,
36, 35, 35, 35, 35, 35, 35, 34, 35, 34, 36, 30, 18, 16, 15, 14, 14, 12, 13, 11,
12, 10, 12, 10, 12, 9, 14, -6, -32, -31, -35, -36, -38, -38, -41, -40, -42, -42,
-44, -43, -45, -42, -51, -8, 39, 35, 47, 44, 52, 48, 56, 41, 7, 9, 6, 6, 4, 3,
2, 2, 1, 0, 0, -1, 0, -2, -2, -3, -2, -3, -4, -6, -5, -8, -6, -14, -26, -28,
-29, -31, -31, -33, -34, -34, -34, -36, -36, -36, -37, -37, -39, -7, 13, 12, 17,
16, 20, 20, 21, 20, 21, 22, 22, 23, 21, 22, 19, 29, 42, 43, 45, 45, 45, 45, 44,
44, 43, 43, 43, 43, 42, 42, 41, 42, 41, 43, 41, 41, 41, 41, 41, 40, 40, 41, 40,
40, 40, 40, 40, 33, 21, 21, 19, 18, 17, 17, 16, 16, 15, 15, 15, 13, 14, 12, 17,
-6, -28, -28, -32, -33, -34, -37, -36, -38, -39, -40, -40, -41, -40, -43, -41,
-45, -68, -70, -71, -73, -75, -76, -79, -81, -81, -82, -83, -85, -85, -86, -87,
-88, -89, -90, -89, -91, -91, -92, -92, -94, -93, -94, -94, -95, -95, -97, -94,
-103, -115, -116, -118, -119, -119, -120, -121, -121, -121, -123, -123, -123,
-124, -124, -125, -91, -73, -74, -69, -69, -66, -66, -66, -65, -64, -64, -64,
-63, -65, -65, -67, -56, -42, -43, -40, -42, -41, -40, -42, -41, -41, -42, -42,
-42, -42, -43, -42, -42, -43, -42, -43, -43, -43, -42, -43, -42, -43, -43, -43,
-44, -42, -44, -42, -52, -62, -62, -64, -65, -66, -65, -67, -66, -67, -68, -67,
-68, -66, -70, -66, -92, -111, -110, -114, -114, -116, -116, -117, -119, -120,
-120, -121, -122, -123, -121, -126, -70, -38, -40, -31, -34, -26, -32, -16, };

#endif /* AKWF_1027_512_H_ */
