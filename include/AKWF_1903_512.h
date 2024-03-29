#ifndef AKWF_1903_512_H_
#define AKWF_1903_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1903_512_NUM_CELLS 512
#define AKWF_1903_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1903_512_DATA [] = {1,
1, 1, 1, 0, 1, 2, 1, 2, 2, 2, 2, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 10, 9, 10, 10,
11, 13, 12, 12, 13, 15, 14, 15, 15, 16, 16, 17, 18, 18, 19, 19, 19, 21, 21, 21,
22, 23, 23, 23, 23, 24, 25, 25, 26, 27, 27, 27, 28, 28, 30, 30, 30, 30, 31, 32,
32, 32, 33, 33, 35, 35, 36, 36, 36, 36, 38, 38, 38, 38, 39, 39, 41, 40, 41, 42,
42, 43, 43, 43, 44, 45, 45, 46, 47, 47, 47, 47, 49, 49, 49, 50, 51, 50, 51, 52,
52, 53, 53, 54, 54, 55, 56, 56, 56, 57, 57, 57, 59, 60, 60, 60, 61, 62, 62, 62,
62, 63, 64, 64, 65, 65, 65, 66, 68, 66, 68, 68, 69, 70, 70, 71, 71, 71, 72, 73,
73, 73, 74, 74, 75, 75, 76, 76, 76, 78, 78, 78, 79, 80, 80, 81, 81, 81, 82, 83,
83, 84, 84, 85, 86, 86, 86, 87, 88, 88, 88, 88, 89, 90, 90, 91, 91, 91, 93, 93,
93, 93, 94, 95, 96, 95, 97, 97, 98, 99, 99, 100, 99, 101, 101, 101, 101, 102,
102, 102, 103, 102, 102, 102, 102, 103, 103, 103, 103, 104, 105, 106, 107, 109,
111, 112, 114, 117, 118, 121, 123, 124, 127, 127, 127, 127, 127, 127, 127, 127,
124, 121, 118, 114, 110, 105, 99, 94, 88, 83, 77, 70, 62, 56, 49, 43, 35, 28,
21, 14, 6, -1, -9, -16, -23, -30, -38, -45, -52, -58, -63, -70, -75, -80, -85,
-90, -94, -98, -102, -105, -108, -111, -113, -116, -117, -120, -120, -121, -122,
-123, -123, -123, -122, -120, -120, -118, -117, -116, -115, -114, -113, -112,
-110, -109, -109, -108, -107, -107, -106, -106, -105, -105, -105, -105, -103,
-104, -103, -104, -103, -101, -101, -101, -100, -100, -99, -99, -98, -97, -97,
-97, -96, -95, -94, -95, -93, -93, -93, -93, -92, -91, -91, -90, -89, -89, -89,
-88, -87, -88, -86, -86, -86, -85, -85, -83, -83, -83, -82, -82, -81, -81, -81,
-79, -79, -78, -78, -78, -76, -77, -76, -75, -75, -74, -73, -74, -73, -71, -71,
-71, -70, -71, -69, -69, -68, -67, -67, -67, -67, -67, -66, -64, -64, -63, -63,
-62, -62, -62, -61, -60, -60, -59, -59, -59, -58, -57, -57, -57, -56, -55, -54,
-55, -54, -54, -53, -52, -52, -51, -51, -50, -49, -48, -48, -48, -47, -46, -46,
-45, -45, -44, -45, -44, -43, -42, -42, -41, -41, -40, -39, -40, -39, -39, -38,
-38, -36, -37, -36, -36, -35, -35, -33, -33, -32, -32, -31, -31, -31, -29, -29,
-29, -29, -28, -27, -27, -26, -26, -25, -24, -24, -24, -22, -23, -22, -22, -21,
-21, -20, -20, -20, -19, -18, -18, -17, -16, -16, -15, -15, -15, -14, -14, -12,
-13, -11, -11, -11, -10, -10, -9, -9, -9, -7, -7, -7, -6, -4, -4, -4, -4, -2,
-2, -2, -2, -2, -1, 0, -1, -1, };

#endif /* AKWF_1903_512_H_ */
