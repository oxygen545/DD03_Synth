#ifndef AKWF_1176_512_H_
#define AKWF_1176_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1176_512_NUM_CELLS 512
#define AKWF_1176_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1176_512_DATA [] = {0,
1, 1, 2, 4, 4, 5, 6, 6, 8, 7, 9, 10, 10, 10, 12, 12, 12, 14, 14, 16, 16, 17, 17,
19, 18, 20, 21, 21, 22, 23, 24, 24, 25, 25, 26, 26, 27, 26, 26, 25, 26, 24, 24,
23, 23, 22, 23, 23, 24, 26, 28, 32, 35, 40, 44, 50, 53, 57, 60, 63, 63, 63, 61,
59, 57, 54, 52, 50, 48, 48, 47, 48, 49, 50, 52, 54, 56, 59, 61, 63, 63, 65, 67,
67, 69, 70, 70, 71, 71, 71, 72, 72, 73, 72, 74, 75, 75, 75, 76, 77, 78, 80, 81,
80, 82, 83, 84, 85, 86, 87, 87, 89, 90, 90, 91, 92, 93, 93, 93, 95, 96, 96, 97,
97, 98, 100, 101, 101, 103, 103, 104, 104, 106, 106, 108, 107, 109, 109, 110,
111, 112, 113, 114, 115, 116, 117, 117, 118, 119, 119, 120, 121, 122, 123, 123,
125, 126, 126, 127, 127, 127, 127, 127, 125, 123, 121, 116, 113, 107, 103, 97,
93, 89, 85, 82, 80, 80, 80, 79, 80, 82, 82, 82, 83, 83, 84, 82, 82, 81, 78, 77,
75, 73, 71, 69, 67, 65, 62, 61, 59, 58, 56, 55, 54, 52, 51, 50, 48, 46, 46, 45,
43, 41, 40, 39, 36, 35, 33, 31, 30, 28, 27, 25, 23, 21, 20, 17, 16, 14, 12, 11,
9, 8, 6, 5, 3, 1, -1, -3, -4, -6, -8, -11, -12, -14, -16, -18, -19, -22, -22,
-26, -27, -28, -30, -33, -34, -35, -38, -39, -41, -42, -43, -45, -46, -48, -50,
-51, -53, -54, -56, -58, -60, -62, -65, -67, -69, -70, -73, -75, -75, -77, -78,
-81, -81, -83, -85, -86, -88, -90, -92, -92, -93, -93, -91, -90, -87, -84, -81,
-79, -76, -73, -72, -70, -70, -70, -71, -72, -74, -75, -77, -79, -81, -84, -84,
-85, -86, -86, -86, -86, -86, -85, -84, -85, -84, -83, -83, -83, -82, -82, -82,
-82, -82, -82, -83, -83, -83, -84, -84, -84, -84, -84, -84, -84, -84, -84, -84,
-83, -83, -83, -83, -82, -83, -82, -82, -81, -81, -82, -81, -80, -80, -79, -80,
-80, -80, -79, -79, -79, -78, -79, -79, -78, -78, -78, -76, -77, -76, -77, -76,
-76, -75, -76, -74, -74, -74, -74, -73, -73, -73, -72, -71, -71, -71, -70, -71,
-69, -67, -64, -60, -57, -54, -51, -48, -46, -46, -45, -48, -51, -54, -58, -64,
-67, -71, -74, -74, -75, -75, -75, -73, -71, -68, -66, -63, -60, -57, -54, -52,
-50, -49, -47, -47, -47, -47, -46, -47, -47, -49, -49, -49, -49, -48, -49, -48,
-48, -48, -46, -45, -45, -43, -42, -42, -40, -39, -39, -38, -37, -37, -36, -36,
-35, -35, -34, -33, -33, -33, -32, -32, -31, -31, -30, -30, -28, -28, -27, -27,
-26, -26, -24, -24, -23, -22, -21, -22, -20, -20, -19, -18, -17, -16, -16, -15,
-15, -14, -14, -13, -12, -11, -10, -9, -9, -8, -8, -7, -5, -5, -5, -4, -3, -2,
-1, 0, -1, };

#endif /* AKWF_1176_512_H_ */
