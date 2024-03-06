#ifndef AKWF_0530_512_H_
#define AKWF_0530_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0530_512_NUM_CELLS 512
#define AKWF_0530_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0530_512_DATA [] =
{13, 127, 125, 122, 122, 117, 118, 114, 114, 110, 110, 106, 106, 101, 102, 98,
97, 94, 94, 90, 89, 87, 85, 83, 81, 79, 78, 75, 72, 71, 69, 66, 65, 62, 61, 59,
57, 54, 53, 52, 49, 47, 45, 43, 41, 39, 38, 35, 33, 31, 29, 26, 25, 23, 21, 18,
17, 15, 13, 11, 9, 7, 4, 3, 2, 0, -3, -5, -7, -9, -11, -13, -15, -16, -19, -21,
-23, -25, -28, -28, -31, -32, -35, -37, -39, -41, -43, -44, -46, -48, -50, -53,
-55, -57, -59, -61, -63, -65, -67, -69, -71, -72, -74, -77, -79, -81, -82, -85,
-87, -89, -91, -93, -94, -97, -99, -101, -102, -105, -107, -109, -111, -112,
-114, -116, -118, -121, -123, -125, -127, -128, -127, -126, -124, -122, -122,
-120, -119, -118, -117, -116, -115, -114, -112, -111, -110, -108, -108, -106,
-106, -104, -102, -102, -100, -98, -97, -97, -96, -94, -93, -93, -91, -90, -89,
-87, -86, -84, -84, -82, -81, -81, -79, -78, -77, -75, -75, -73, -73, -71, -69,
-68, -67, -67, -65, -63, -62, -62, -60, -60, -58, -57, -55, -55, -53, -51, -51,
-49, -49, -48, -46, -45, -44, -43, -42, -40, -40, -38, -36, -35, -34, -34, -32,
-30, -30, -28, -28, -27, -25, -23, -22, -22, -20, -18, -18, -17, -15, -14, -13,
-12, -11, -10, -9, -7, -6, -5, -3, -3, -1, -1, 1, 0, -1, 1, 0, 0, 0, 0, 1, 0, 0,
0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1,
1, 1, 2, 2, 1, 1, 1, 2, 3, 1, 2, 2, 2, 2, 3, 2, 1, 2, 2, 3, 2, 2, 3, 2, 2, 3, 2,
3, 2, 2, 2, 3, 2, 2, 3, 3, 2, 2, 3, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 4, 3, 3, 3, 3,
3, 4, 3, 4, 3, 2, 3, 3, 3, 3, 4, 2, 3, 3, 3, 2, 4, 2, 2, 3, 3, 3, 3, 4, 3, 3, 3,
3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 2, 3, 2,
3, 3, 3, 2, 3, 2, 3, 3, 2, 2, 2, 2, 4, 2, 3, 3, 3, 3, 2, 3, 2, 3, 3, 2, 2, 3, 2,
2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 1, 2, 2, 2, 2, 1,
2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 0,
0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, };

#endif /* AKWF_0530_512_H_ */
