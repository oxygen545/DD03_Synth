#ifndef AKWF_fmsynth_0010_512_H_
#define AKWF_fmsynth_0010_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_fmsynth_0010_512_NUM_CELLS 512
#define AKWF_fmsynth_0010_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_fmsynth_0010_512_DATA
[] = {2, 7, 14, 20, 27, 33, 39, 44, 49, 55, 60, 65, 70, 74, 78, 82, 86, 89, 93,
96, 99, 100, 103, 105, 107, 108, 109, 110, 110, 112, 112, 112, 112, 111, 110,
110, 110, 108, 107, 105, 104, 103, 101, 99, 97, 95, 93, 91, 89, 86, 84, 82, 79,
77, 75, 73, 70, 67, 65, 63, 61, 58, 55, 53, 51, 48, 45, 43, 42, 39, 37, 36, 33,
30, 29, 27, 25, 23, 22, 20, 18, 17, 15, 14, 12, 12, 10, 9, 7, 7, 7, 6, 6, 4, 4,
3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 11, 14, 15, 17,
19, 20, 22, 24, 25, 28, 30, 32, 34, 38, 40, 42, 45, 48, 50, 53, 55, 59, 62, 65,
67, 71, 74, 77, 78, 82, 85, 87, 91, 92, 96, 98, 101, 102, 105, 105, 107, 109,
110, 110, 111, 110, 110, 111, 109, 108, 105, 103, 101, 98, 94, 90, 85, 80, 74,
69, 62, 55, 47, 40, 31, 23, 15, 6, -3, -12, -21, -30, -39, -49, -58, -68, -75,
-83, -92, -99, -105, -111, -116, -120, -123, -126, -128, -127, -127, -126, -123,
-119, -116, -109, -104, -95, -88, -79, -69, -59, -48, -37, -25, -13, -3, 9, 21,
32, 44, 54, 65, 73, 82, 90, 96, 102, 106, 108, 111, 111, 110, 108, 104, 98, 92,
83, 75, 65, 53, 43, 30, 17, 5, -8, -20, -34, -46, -59, -71, -82, -91, -100,
-108, -115, -120, -124, -126, -127, -128, -126, -124, -119, -115, -109, -102,
-94, -85, -74, -65, -55, -43, -32, -21, -10, 2, 14, 24, 35, 45, 55, 64, 72, 81,
87, 93, 99, 102, 106, 109, 110, 111, 110, 109, 107, 104, 100, 96, 90, 85, 77,
69, 63, 54, 46, 37, 28, 19, 10, 1, -9, -16, -25, -33, -42, -50, -58, -65, -73,
-80, -85, -93, -98, -102, -108, -112, -115, -118, -121, -123, -125, -127, -127,
-128, -128, -128, -128, -127, -126, -124, -122, -121, -117, -115, -113, -109,
-107, -103, -101, -97, -94, -91, -87, -84, -80, -76, -71, -69, -64, -61, -58,
-53, -50, -46, -43, -40, -36, -33, -29, -26, -22, -19, -17, -13, -10, -8, -5,
-2, 0, 3, 5, 7, 9, 11, 13, 15, 16, 18, 20, 22, 23, 24, 25, 26, 27, 29, 30, 30,
31, 31, 32, 33, 32, 33, 33, 34, 32, 33, 34, 33, 32, 31, 32, 31, 30, 30, 29, 28,
28, 25, 24, 23, 22, 20, 18, 17, 16, 13, 11, 9, 7, 5, 2, 0, -3, -5, -9, -11, -15,
-17, -20, -24, -27, -30, -33, -36, -40, -44, -47, -51, -55, -58, -62, -66, -70,
-74, -76, -81, -84, -88, -92, -95, -99, -102, -105, -108, -111, -113, -116,
-118, -120, -121, -123, -125, -126, -127, -128, -127, -127, -126, -126, -125,
-123, -121, -119, -117, -114, -111, -107, -103, -98, -94, -88, -83, -78, -71,
-65, -60, -53, -46, -40, -32, -25, -20, -13, -8, -3, };

#endif /* AKWF_fmsynth_0010_512_H_ */
