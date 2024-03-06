#ifndef AKWF_1359_512_H_
#define AKWF_1359_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1359_512_NUM_CELLS 512
#define AKWF_1359_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1359_512_DATA [] = {0,
2, 3, 4, 6, 7, 8, 9, 11, 11, 13, 15, 16, 17, 18, 20, 21, 22, 23, 24, 26, 28, 28,
30, 32, 33, 33, 35, 36, 38, 39, 40, 40, 42, 43, 45, 46, 47, 49, 51, 52, 53, 55,
56, 57, 59, 59, 61, 62, 64, 64, 67, 68, 69, 71, 71, 72, 74, 77, 77, 78, 79, 81,
83, 84, 85, 86, 87, 89, 90, 92, 93, 95, 95, 97, 97, 99, 100, 102, 102, 103, 105,
106, 107, 108, 108, 110, 111, 112, 113, 114, 114, 116, 116, 118, 119, 119, 120,
120, 121, 122, 122, 123, 124, 125, 125, 126, 125, 125, 126, 126, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126,
126, 125, 124, 124, 124, 123, 122, 121, 121, 120, 119, 119, 118, 118, 117, 116,
115, 114, 113, 112, 111, 110, 109, 107, 107, 105, 104, 103, 102, 101, 100, 98,
97, 97, 96, 93, 93, 91, 90, 88, 87, 86, 85, 84, 82, 81, 80, 78, 77, 75, 74, 73,
72, 69, 68, 68, 66, 65, 63, 62, 60, 58, 58, 56, 55, 54, 52, 51, 50, 48, 47, 45,
44, 43, 42, 41, 40, 38, 37, 36, 33, 32, 31, 30, 28, 27, 26, 25, 23, 22, 21, 19,
19, 17, 15, 14, 13, 12, 10, 9, 8, 7, 6, 5, 3, 2, 0, -2, -3, -3, -4, -6, -7, -9,
-10, -11, -13, -13, -15, -16, -18, -19, -20, -22, -23, -24, -26, -27, -29, -29,
-31, -32, -33, -35, -35, -37, -38, -40, -41, -42, -43, -44, -45, -47, -47, -49,
-50, -52, -53, -53, -54, -56, -57, -58, -59, -59, -61, -61, -63, -64, -65, -66,
-67, -68, -68, -69, -70, -71, -71, -73, -72, -74, -75, -75, -75, -77, -77, -77,
-77, -79, -79, -80, -79, -81, -82, -81, -82, -82, -83, -83, -83, -84, -83, -84,
-85, -84, -84, -85, -85, -84, -85, -85, -86, -86, -86, -85, -86, -85, -86, -86,
-86, -86, -85, -85, -86, -86, -86, -86, -85, -86, -86, -86, -86, -85, -85, -86,
-85, -86, -85, -85, -85, -84, -85, -84, -84, -85, -84, -85, -84, -84, -85, -84,
-83, -84, -84, -83, -84, -83, -84, -85, -84, -85, -83, -84, -84, -84, -85, -84,
-84, -84, -84, -84, -84, -84, -84, -84, -84, -85, -84, -84, -85, -84, -85, -85,
-85, -85, -85, -85, -86, -85, -85, -85, -85, -85, -85, -85, -85, -85, -85, -85,
-85, -85, -84, -84, -84, -84, -84, -82, -83, -82, -83, -83, -83, -82, -80, -81,
-81, -80, -79, -80, -79, -79, -78, -77, -76, -76, -76, -75, -74, -74, -73, -72,
-70, -71, -69, -69, -69, -66, -66, -65, -65, -64, -63, -62, -61, -60, -59, -58,
-56, -56, -54, -53, -52, -52, -50, -48, -48, -47, -45, -45, -44, -42, -41, -40,
-37, -37, -36, -34, -33, -32, -30, -29, -28, -28, -26, -24, -23, -21, -20, -18,
-16, -14, -11, -8, -7, -6, -4, -4, -2, -1, -1, 0, };

#endif /* AKWF_1359_512_H_ */
