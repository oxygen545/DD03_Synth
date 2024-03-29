#ifndef AKWF_0627_512_H_
#define AKWF_0627_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0627_512_NUM_CELLS 512
#define AKWF_0627_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0627_512_DATA [] = {9,
12, 12, 13, 13, 15, 14, 16, 17, 17, 18, 19, 20, 21, 22, 23, 23, 24, 25, 25, 26,
28, 29, 30, 31, 32, 32, 33, 33, 34, 35, 36, 37, 38, 39, 40, 40, 41, 42, 43, 43,
44, 45, 46, 46, 47, 49, 50, 51, 52, 52, 52, 53, 55, 55, 56, 56, 57, 59, 59, 60,
62, 62, 63, 63, 64, 65, 66, 67, 68, 68, 70, 70, 71, 72, 74, 74, 74, 75, 76, 77,
78, 79, 79, 80, 81, 83, 83, 84, 84, 86, 86, 87, 88, 88, 90, 90, 91, 92, 92, 94,
95, 96, 97, 97, 97, 98, 100, 100, 101, 102, 103, 104, 105, 106, 106, 107, 107,
109, 110, 111, 112, 112, 113, 114, 114, 116, 117, 118, 118, 120, 120, 120, 121,
122, 123, 123, 125, 126, 126, 127, 127, 124, 122, 119, 117, 113, 112, 109, 107,
103, 102, 98, 96, 93, 90, 88, 86, 82, 81, 77, 75, 73, 69, 67, 64, 62, 59, 56,
53, 52, 49, 45, 44, 41, 39, 36, 33, 32, 27, 26, 23, 21, 17, 16, 12, 0, 0, 0, 0,
1, 0, 1, -1, 1, -1, 1, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, -1, -1,
0, -1, -1, 0, -1, 1, 0, 0, 0, 1, -1, 1, -1, 1, -1, -11, -11, -12, -13, -13, -15,
-15, -16, -17, -17, -19, -19, -20, -21, -22, -23, -24, -24, -25, -26, -27, -27,
-28, -29, -30, -32, -33, -33, -34, -35, -36, -36, -38, -39, -39, -40, -41, -41,
-42, -42, -44, -45, -45, -47, -48, -48, -49, -50, -51, -51, -51, -53, -53, -54,
-55, -56, -57, -58, -59, -59, -60, -62, -63, -62, -64, -65, -66, -66, -66, -68,
-69, -69, -71, -71, -72, -73, -74, -75, -76, -76, -78, -78, -79, -80, -81, -82,
-82, -83, -85, -85, -85, -87, -87, -88, -89, -90, -90, -92, -93, -93, -94, -94,
-96, -97, -97, -98, -100, -100, -101, -102, -102, -103, -104, -105, -106, -107,
-108, -108, -109, -109, -112, -112, -112, -114, -114, -116, -116, -117, -117,
-119, -119, -120, -121, -121, -123, -124, -124, -125, -126, -126, -128, -127,
-124, -122, -119, -117, -114, -111, -108, -106, -103, -101, -98, -95, -92, -91,
-87, -85, -82, -80, -78, -75, -72, -69, -67, -64, -61, -59, -56, -53, -52, -49,
-46, -43, -40, -38, -36, -33, -30, -27, -25, -22, -20, -16, -15, -8, 1, -1, 0,
0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, };

#endif /* AKWF_0627_512_H_ */
