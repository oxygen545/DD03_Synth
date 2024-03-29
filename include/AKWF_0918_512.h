#ifndef AKWF_0918_512_H_
#define AKWF_0918_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0918_512_NUM_CELLS 512
#define AKWF_0918_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0918_512_DATA [] = {1,
5, 9, 12, 15, 20, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 51, 54, 57, 60, 63,
65, 68, 71, 74, 76, 79, 81, 84, 86, 88, 91, 93, 95, 97, 100, 101, 103, 106, 107,
109, 111, 112, 113, 115, 116, 118, 119, 120, 122, 122, 123, 125, 125, 126, 126,
127, 127, 127, 127, 127, 125, 125, 126, 125, 125, 124, 124, 123, 122, 121, 120,
118, 117, 116, 114, 113, 112, 110, 108, 107, 105, 103, 101, 98, 96, 94, 92, 90,
87, 84, 82, 79, 76, 74, 71, 68, 66, 62, 58, 56, 53, 50, 46, 43, 40, 37, 34, 31,
28, 24, 21, 18, 15, 12, 10, 5, 3, 0, -2, -5, -8, -11, -14, -17, -19, -22, -24,
-27, -30, -32, -34, -37, -39, -42, -44, -46, -49, -52, -53, -55, -57, -59, -61,
-63, -66, -67, -69, -70, -71, -74, -75, -77, -78, -80, -81, -83, -84, -85, -86,
-87, -88, -89, -90, -90, -91, -92, -92, -94, -93, -95, -95, -95, -96, -97, -97,
-97, -97, -98, -99, -99, -98, -98, -98, -99, -98, -98, -98, -99, -98, -98, -97,
-97, -96, -96, -96, -96, -95, -94, -95, -94, -93, -92, -92, -91, -90, -90, -89,
-88, -88, -87, -86, -85, -84, -84, -82, -82, -81, -80, -79, -78, -77, -76, -75,
-75, -74, -72, -71, -69, -69, -68, -67, -65, -64, -62, -61, -59, -59, -58, -57,
-56, -52, -47, -43, -39, -34, -31, -26, -24, -21, -19, -16, -12, -9, -5, -2, 3,
6, 9, 12, 16, 20, 23, 26, 28, 31, 35, 38, 41, 44, 47, 50, 52, 55, 58, 60, 64,
66, 69, 72, 75, 77, 79, 82, 84, 86, 89, 90, 93, 96, 98, 100, 101, 104, 105, 108,
109, 110, 112, 114, 116, 117, 119, 119, 121, 121, 122, 123, 125, 126, 126, 127,
126, 127, 127, 127, 126, 125, 125, 126, 125, 125, 124, 123, 123, 121, 121, 120,
118, 117, 116, 113, 113, 111, 109, 107, 106, 104, 102, 100, 98, 96, 93, 91, 89,
86, 84, 81, 78, 77, 73, 70, 67, 65, 62, 59, 55, 52, 49, 45, 43, 39, 36, 33, 30,
26, 24, 21, 18, 14, 11, 8, 6, 2, -1, -3, -6, -9, -11, -14, -18, -20, -23, -26,
-27, -30, -33, -35, -37, -40, -43, -45, -47, -49, -52, -53, -56, -57, -60, -62,
-64, -66, -68, -70, -71, -73, -74, -76, -77, -79, -79, -81, -82, -84, -84, -86,
-88, -89, -88, -90, -91, -92, -92, -93, -93, -95, -95, -95, -95, -96, -97, -97,
-97, -98, -97, -97, -98, -98, -98, -98, -98, -98, -98, -98, -98, -98, -97, -97,
-97, -97, -97, -96, -95, -95, -95, -94, -94, -93, -93, -92, -91, -91, -90, -88,
-88, -88, -87, -86, -85, -85, -84, -82, -82, -81, -80, -78, -79, -76, -76, -75,
-74, -73, -72, -71, -69, -69, -67, -66, -65, -64, -63, -62, -60, -59, -58, -56,
-54, -50, -46, -42, -38, -34, -29, -25, -23, -21, -18, -15, -11, -8, -4, -1, };

#endif /* AKWF_0918_512_H_ */
