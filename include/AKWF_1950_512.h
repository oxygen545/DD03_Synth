#ifndef AKWF_1950_512_H_
#define AKWF_1950_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1950_512_NUM_CELLS 512
#define AKWF_1950_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1950_512_DATA [] = {6,
15, 23, 32, 40, 47, 54, 60, 66, 71, 75, 78, 81, 82, 84, 84, 83, 83, 82, 79, 78,
75, 73, 71, 68, 65, 63, 61, 59, 58, 57, 55, 56, 56, 56, 57, 57, 59, 61, 64, 66,
68, 70, 73, 74, 76, 77, 78, 78, 78, 78, 75, 72, 70, 66, 61, 56, 50, 43, 36, 27,
20, 11, 1, -8, -17, -27, -35, -44, -51, -58, -66, -71, -76, -81, -83, -85, -86,
-86, -83, -81, -77, -71, -66, -59, -51, -41, -32, -23, -12, 0, 11, 22, 33, 44,
55, 66, 74, 84, 91, 99, 105, 110, 115, 118, 120, 121, 121, 120, 117, 114, 110,
105, 98, 92, 84, 76, 67, 57, 48, 39, 29, 20, 9, 1, -9, -18, -27, -35, -41, -49,
-54, -60, -64, -67, -71, -72, -73, -73, -71, -70, -67, -64, -60, -55, -48, -42,
-35, -27, -19, -10, -3, 7, 16, 26, 34, 43, 52, 61, 68, 75, 82, 88, 93, 98, 101,
105, 108, 108, 108, 106, 105, 101, 96, 92, 86, 79, 71, 63, 54, 45, 35, 25, 15,
3, -6, -18, -27, -37, -47, -55, -63, -71, -77, -84, -88, -92, -95, -97, -99,
-98, -97, -95, -91, -87, -82, -76, -69, -61, -53, -45, -36, -27, -17, -8, 2, 12,
21, 30, 39, 46, 55, 63, 69, 74, 80, 84, 87, 89, 90, 91, 90, 88, 85, 83, 78, 72,
66, 58, 50, 42, 33, 22, 13, 2, -9, -20, -30, -41, -52, -63, -72, -82, -91, -100,
-106, -113, -118, -122, -125, -128, -128, -127, -126, -123, -118, -113, -107,
-99, -90, -80, -69, -58, -46, -33, -21, -8, 5, 19, 31, 42, 55, 65, 76, 84, 93,
99, 104, 108, 111, 113, 113, 111, 108, 105, 99, 93, 84, 76, 66, 55, 43, 32, 20,
8, -4, -15, -27, -38, -49, -57, -66, -74, -80, -86, -90, -93, -94, -94, -93,
-90, -85, -81, -75, -67, -60, -50, -41, -30, -19, -8, 4, 15, 28, 38, 49, 60, 70,
80, 89, 96, 104, 110, 115, 119, 122, 124, 125, 124, 123, 120, 118, 113, 107,
102, 95, 87, 79, 71, 61, 52, 42, 32, 21, 12, 2, -9, -19, -27, -37, -45, -53,
-60, -68, -74, -78, -83, -86, -89, -90, -91, -91, -89, -88, -85, -80, -75, -70,
-63, -56, -48, -40, -31, -21, -12, -2, 8, 16, 27, 37, 45, 54, 62, 70, 76, 83,
87, 91, 94, 96, 97, 97, 95, 94, 91, 86, 80, 74, 66, 58, 50, 42, 32, 22, 11, 2,
-8, -18, -29, -38, -47, -55, -62, -69, -76, -81, -85, -88, -90, -90, -91, -89,
-87, -83, -79, -74, -68, -61, -54, -46, -37, -28, -19, -11, 0, 8, 18, 26, 35,
43, 49, 56, 62, 66, 71, 74, 75, 76, 76, 75, 73, 70, 66, 60, 55, 49, 41, 33, 25,
16, 7, -3, -12, -21, -30, -39, -48, -56, -63, -70, -76, -81, -86, -89, -91, -93,
-93, -92, -91, -88, -84, -80, -74, -68, -60, -54, -46, -37, -28, -19, -10, -1,
};

#endif /* AKWF_1950_512_H_ */
