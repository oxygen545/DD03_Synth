#ifndef AKWF_1701_512_H_
#define AKWF_1701_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1701_512_NUM_CELLS 512
#define AKWF_1701_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1701_512_DATA [] = {2,
5, 8, 11, 14, 18, 21, 23, 27, 30, 34, 36, 40, 43, 46, 47, 50, 52, 55, 57, 58,
61, 63, 64, 66, 69, 72, 73, 74, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89, 90, 92,
92, 94, 94, 96, 96, 98, 98, 99, 100, 102, 102, 102, 101, 101, 102, 101, 101,
100, 99, 100, 99, 99, 99, 98, 98, 99, 98, 98, 99, 98, 97, 96, 96, 96, 96, 95,
94, 94, 93, 92, 91, 89, 88, 87, 87, 85, 83, 82, 81, 80, 78, 77, 77, 76, 74, 72,
70, 68, 68, 65, 63, 60, 60, 57, 55, 54, 51, 49, 48, 46, 43, 41, 38, 36, 33, 31,
29, 26, 25, 23, 20, 18, 17, 14, 12, 9, 6, 3, 1, -1, -4, -7, -9, -11, -13, -15,
-17, -19, -21, -23, -26, -28, -30, -31, -33, -36, -37, -39, -40, -42, -42, -43,
-44, -44, -46, -46, -47, -48, -49, -49, -49, -49, -49, -51, -50, -51, -52, -52,
-52, -52, -52, -51, -51, -50, -49, -49, -48, -47, -46, -44, -43, -42, -41, -40,
-40, -38, -38, -38, -36, -35, -35, -34, -33, -32, -32, -32, -32, -31, -31, -30,
-29, -28, -27, -25, -26, -25, -24, -23, -24, -23, -24, -24, -23, -22, -21, -21,
-19, -17, -16, -14, -12, -11, -9, -8, -6, -3, -3, -1, 1, 1, 3, 4, 6, 7, 9, 11,
13, 15, 16, 17, 19, 20, 22, 24, 25, 26, 27, 28, 29, 30, 32, 33, 35, 36, 39, 40,
42, 44, 46, 48, 50, 53, 54, 56, 57, 60, 62, 65, 66, 68, 71, 73, 74, 76, 77, 79,
80, 80, 82, 82, 82, 85, 84, 85, 84, 85, 86, 86, 87, 87, 87, 88, 88, 88, 88, 88,
88, 88, 86, 86, 86, 85, 85, 85, 85, 85, 85, 83, 83, 82, 80, 79, 77, 76, 74, 73,
72, 71, 69, 68, 67, 65, 63, 64, 62, 61, 59, 57, 56, 54, 52, 51, 49, 48, 46, 44,
42, 41, 37, 35, 33, 29, 27, 26, 23, 21, 18, 16, 14, 12, 9, 6, 3, 0, -2, -6, -8,
-11, -13, -16, -18, -20, -23, -26, -29, -32, -34, -37, -39, -42, -46, -48, -51,
-55, -57, -61, -62, -65, -68, -70, -72, -75, -78, -81, -83, -84, -86, -88, -91,
-94, -95, -97, -99, -101, -103, -104, -107, -108, -110, -112, -113, -115, -117,
-119, -120, -121, -122, -123, -122, -124, -124, -124, -124, -124, -126, -126,
-126, -127, -127, -127, -127, -127, -127, -128, -128, -128, -127, -127, -126,
-125, -125, -123, -121, -121, -120, -118, -117, -116, -115, -114, -113, -111,
-111, -110, -107, -106, -105, -105, -103, -102, -100, -99, -99, -97, -97, -96,
-93, -93, -90, -90, -88, -87, -86, -84, -84, -84, -83, -82, -81, -80, -79, -78,
-77, -75, -74, -72, -70, -67, -65, -63, -61, -59, -57, -55, -53, -53, -50, -48,
-47, -45, -42, -40, -38, -36, -34, -31, -29, -27, -25, -23, -21, -18, -17, -15,
-13, -10, -9, -6, -4, -1, 0, };

#endif /* AKWF_1701_512_H_ */