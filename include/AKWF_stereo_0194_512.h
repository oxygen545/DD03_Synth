#ifndef AKWF_stereo_0194_512_H_
#define AKWF_stereo_0194_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0194_512_NUM_CELLS 1024
#define AKWF_stereo_0194_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0194_512_DATA
[] = {3, 19, 9, 28, 12, 31, 17, 38, 21, 41, 25, 47, 30, 51, 33, 57, 37, 60, 41,
65, 45, 69, 48, 73, 51, 77, 54, 81, 57, 84, 62, 87, 64, 91, 67, 94, 69, 97, 72,
100, 74, 104, 76, 106, 79, 109, 81, 111, 84, 113, 85, 114, 87, 117, 89, 118, 91,
120, 92, 121, 94, 123, 95, 123, 96, 125, 98, 126, 99, 126, 100, 127, 102, 127,
102, 127, 103, 127, 104, 127, 104, 127, 105, 127, 106, 127, 106, 127, 106, 126,
107, 125, 107, 124, 106, 123, 107, 121, 108, 120, 107, 118, 107, 116, 107, 114,
107, 112, 107, 111, 107, 108, 106, 107, 106, 104, 105, 102, 104, 99, 104, 97,
102, 94, 103, 91, 102, 88, 101, 85, 99, 83, 98, 80, 97, 76, 96, 73, 95, 71, 94,
67, 93, 64, 92, 61, 90, 58, 89, 55, 87, 51, 86, 49, 83, 45, 82, 42, 80, 39, 78,
35, 77, 32, 75, 29, 73, 26, 71, 23, 69, 20, 67, 17, 66, 14, 63, 11, 60, 8, 59,
6, 57, 3, 55, 0, 53, -2, 50, -5, 48, -7, 47, -10, 44, -12, 42, -14, 39, -17, 37,
-20, 35, -22, 32, -24, 29, -25, 27, -27, 25, -29, 22, -32, 19, -33, 18, -35, 15,
-37, 13, -38, 11, -41, 8, -43, 6, -43, 3, -46, 0, -47, -1, -49, -3, -49, -6,
-50, -8, -52, -10, -53, -13, -53, -15, -54, -17, -57, -19, -57, -21, -58, -23,
-57, -24, -58, -26, -60, -28, -59, -29, -60, -31, -60, -33, -60, -34, -61, -36,
-60, -37, -60, -38, -59, -39, -59, -40, -59, -40, -58, -42, -57, -42, -56, -43,
-55, -42, -55, -44, -53, -44, -53, -44, -52, -44, -50, -44, -49, -43, -47, -43,
-47, -44, -45, -43, -43, -43, -42, -42, -41, -42, -39, -42, -36, -41, -34, -40,
-32, -40, -31, -39, -29, -37, -27, -36, -25, -35, -22, -35, -21, -33, -19, -33,
-17, -31, -14, -30, -12, -30, -10, -29, -9, -29, -6, -28, -5, -27, -3, -26, -1,
-26, 1, -25, 2, -24, 3, -23, 5, -22, 6, -22, 9, -22, 10, -22, 11, -20, 12, -20,
14, -20, 14, -20, 15, -20, 18, -21, 18, -20, 18, -20, 20, -20, 20, -20, 21, -20,
21, -20, 23, -20, 22, -21, 24, -20, 24, -20, 24, -21, 25, -21, 25, -21, 25, -22,
25, -22, 25, -22, 25, -23, 25, -24, 25, -24, 25, -24, 25, -25, 24, -25, 25, -25,
24, -26, 24, -25, 23, -27, 22, -27, 21, -27, 21, -28, 21, -28, 20, -28, 19, -29,
19, -29, 18, -29, 17, -29, 17, -29, 16, -30, 15, -30, 15, -31, 13, -30, 13, -30,
12, -30, 12, -30, 11, -30, 10, -30, 10, -29, 8, -29, 8, -29, 8, -28, 7, -29, 6,
-28, 5, -28, 5, -28, 4, -26, 4, -26, 3, -25, 3, -24, 3, -24, 3, -24, 1, -23, 2,
-22, 2, -21, 0, -20, 1, -20, -1, -20, -1, -18, -2, -17, -1, -17, -1, -16, -1,
-15, -2, -15, -3, -14, -3, -12, -3, -12, -3, -12, -4, -12, -4, -10, -4, -10, -5,
-9, -6, -9, -6, -8, -6, -7, -6, -7, -8, -7, -8, -6, -9, -5, -9, -6, -9, -5, -10,
-4, -11, -4, -11, -3, -13, -3, -14, -2, -15, -2, -15, -1, -16, -1, -17, -2, -17,
-1, -18, 0, -19, 0, -19, 0, -20, 1, -21, 2, -22, 3, -23, 2, -24, 3, -24, 4, -25,
3, -25, 4, -27, 5, -28, 6, -28, 7, -29, 7, -29, 7, -29, 9, -30, 10, -30, 10,
-30, 11, -30, 13, -30, 14, -31, 14, -30, 15, -31, 17, -31, 17, -30, 19, -30, 21,
-30, 21, -29, 23, -29, 23, -28, 26, -27, 26, -27, 28, -25, 30, -24, 31, -24, 33,
-22, 35, -21, 37, -20, 38, -18, 41, -16, 41, -15, 44, -12, 46, -11, 48, -9, 49,
-7, 51, -4, 52, -2, 55, 0, 57, 3, 58, 4, 61, 7, 62, 9, 64, 11, 65, 13, 66, 16,
67, 18, 70, 20, 71, 22, 71, 25, 74, 27, 74, 30, 75, 32, 75, 34, 76, 36, 76, 39,
78, 40, 78, 43, 78, 44, 79, 46, 79, 49, 79, 51, 80, 52, 79, 54, 79, 55, 79, 57,
78, 58, 78, 60, 78, 61, 78, 62, 76, 64, 75, 64, 74, 66, 74, 66, 72, 67, 71, 66,
69, 67, 68, 67, 66, 67, 64, 68, 62, 67, 61, 67, 59, 67, 57, 66, 55, 65, 53, 66,
50, 64, 47, 64, 45, 63, 44, 60, 40, 60, 39, 59, 36, 57, 33, 55, 31, 53, 29, 52,
25, 50, 23, 48, 20, 46, 17, 44, 14, 42, 11, 39, 9, 37, 6, 35, 3, 32, 0, 29, -3,
27, -5, 24, -8, 21, -11, 19, -14, 15, -18, 13, -19, 10, -22, 6, -25, 4, -28, 1,
-31, -2, -34, -6, -37, -9, -40, -12, -42, -16, -45, -19, -48, -22, -50, -25,
-53, -30, -57, -32, -60, -35, -62, -39, -64, -42, -66, -46, -69, -49, -71, -52,
-74, -54, -77, -57, -79, -61, -81, -63, -84, -67, -85, -69, -88, -73, -91, -76,
-93, -78, -94, -81, -97, -84, -98, -87, -101, -90, -101, -91, -104, -94, -106,
-97, -107, -99, -109, -101, -110, -102, -112, -106, -114, -107, -115, -109,
-117, -112, -118, -113, -120, -115, -121, -116, -121, -117, -122, -119, -123,
-120, -124, -121, -124, -122, -125, -124, -126, -125, -127, -125, -128, -126,
-127, -126, -127, -127, -128, -126, -127, -127, -127, -128, -127, -126, -127,
-126, -126, -126, -125, -126, -125, -125, -124, -124, -123, -122, -121, -121,
-121, -120, -121, -119, -118, -117, -117, -114, -115, -113, -113, -110, -111,
-108, -109, -105, -107, -103, -104, -101, -102, -96, -99, -94, -96, -90, -93,
-86, -90, -82, -86, -79, -83, -75, -80, -70, -75, -67, -72, -61, -67, -56, -63,
-51, -58, -47, -54, -42, -49, -37, -44, -31, -38, -25, -33, -19, -28, -14, -23,
-8, -18, -3, -13, 4, -9, 7, -3, 16, -1, 11, };

#endif /* AKWF_stereo_0194_512_H_ */
