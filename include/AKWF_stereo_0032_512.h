#ifndef AKWF_stereo_0032_512_H_
#define AKWF_stereo_0032_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0032_512_NUM_CELLS 1024
#define AKWF_stereo_0032_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0032_512_DATA
[] = {1, 64, 4, 82, 8, 67, 10, 71, 14, 60, 18, 60, 23, 49, 27, 44, 32, 35, 36,
30, 41, 20, 44, 14, 47, 6, 50, 0, 52, -5, 55, -9, 56, -14, 59, -16, 60, -21, 62,
-24, 63, -29, 65, -35, 66, -41, 66, -45, 68, -46, 67, -49, 67, -46, 66, -44, 65,
-41, 65, -39, 64, -38, 64, -36, 64, -33, 64, -31, 64, -28, 64, -29, 64, -28, 65,
-29, 64, -31, 65, -33, 66, -37, 68, -40, 68, -43, 70, -44, 70, -46, 72, -45, 72,
-45, 73, -43, 74, -40, 75, -38, 76, -35, 76, -35, 77, -34, 78, -34, 78, -33, 78,
-32, 78, -32, 79, -33, 79, -34, 78, -35, 78, -36, 78, -36, 81, -35, 82, -32, 83,
-28, 84, -25, 85, -20, 85, -16, 84, -14, 83, -13, 80, -12, 79, -13, 75, -15, 72,
-17, 70, -21, 69, -25, 69, -29, 68, -32, 67, -35, 67, -34, 65, -33, 63, -28, 62,
-21, 59, -12, 59, -2, 57, 8, 55, 17, 55, 26, 55, 33, 54, 39, 55, 44, 56, 49, 58,
54, 59, 57, 59, 61, 61, 62, 62, 63, 64, 62, 64, 62, 67, 62, 68, 61, 71, 60, 72,
62, 76, 63, 78, 65, 82, 67, 86, 68, 88, 67, 91, 67, 94, 65, 95, 64, 97, 63, 98,
60, 97, 58, 98, 56, 98, 54, 99, 53, 101, 51, 101, 51, 99, 52, 97, 53, 95, 56,
90, 58, 87, 60, 83, 64, 79, 65, 76, 65, 75, 64, 74, 63, 71, 60, 70, 58, 70, 57,
70, 54, 69, 51, 70, 50, 69, 46, 70, 45, 69, 44, 68, 45, 67, 46, 68, 45, 67, 45,
67, 43, 68, 42, 69, 39, 70, 36, 70, 31, 68, 28, 67, 22, 66, 17, 66, 11, 64, 7,
63, 4, 63, 1, 63, -1, 62, -2, 63, -2, 61, -1, 62, 0, 61, 2, 62, 4, 62, 5, 60, 5,
60, 7, 57, 6, 56, 6, 54, 4, 53, 2, 51, 2, 49, 2, 47, 5, 45, 6, 42, 10, 38, 12,
35, 15, 33, 16, 30, 16, 28, 14, 25, 13, 25, 12, 23, 8, 22, 6, 21, 4, 19, 1, 19,
-2, 18, -5, 17, -9, 17, -11, 16, -13, 16, -15, 16, -17, 17, -20, 16, -21, 16,
-24, 15, -28, 14, -30, 14, -33, 13, -35, 13, -35, 13, -35, 15, -36, 16, -36, 17,
-37, 18, -39, 19, -42, 20, -46, 20, -51, 20, -56, 21, -61, 22, -63, 23, -68, 22,
-70, 23, -70, 24, -69, 22, -68, 19, -66, 17, -65, 14, -63, 11, -61, 9, -61, 8,
-60, 6, -61, 4, -60, 3, -59, 2, -58, 0, -58, -2, -59, -3, -61, -5, -64, -7, -69,
-8, -76, -9, -82, -10, -91, -12, -98, -14, -106, -18, -114, -22, -119, -27,
-123, -31, -126, -36, -127, -40, -128, -46, -128, -50, -128, -53, -127, -55,
-125, -56, -125, -55, -126, -54, -126, -51, -126, -48, -126, -44, -126, -39,
-121, -35, -110, -32, -99, -27, -88, -23, -80, -20, -72, -19, -65, -16, -58,
-15, -53, -14, -47, -13, -44, -14, -42, -14, -40, -14, -40, -14, -40, -15, -42,
-15, -45, -15, -47, -14, -50, -15, -52, -15, -54, -16, -56, -17, -59, -19, -61,
-19, -63, -20, -64, -21, -64, -21, -64, -21, -64, -23, -64, -23, -64, -23, -60,
-22, -57, -22, -51, -22, -46, -20, -42, -19, -38, -19, -34, -18, -30, -19, -27,
-18, -25, -20, -21, -22, -16, -24, -10, -26, -2, -29, 5, -31, 12, -35, 20, -38,
27, -40, 35, -43, 41, -43, 48, -46, 53, -46, 58, -50, 61, -51, 63, -54, 65, -58,
65, -60, 67, -64, 67, -65, 66, -67, 65, -68, 62, -70, 60, -72, 56, -74, 52, -75,
48, -76, 43, -77, 39, -76, 34, -75, 29, -74, 23, -72, 18, -70, 13, -69, 7, -67,
4, -66, 0, -64, -3, -64, -5, -63, -7, -63, -8, -64, -8, -64, -7, -63, -4, -63,
-1, -62, 2, -61, 5, -61, 6, -61, 8, -60, 7, -60, 6, -59, 4, -58, 3, -57, 3, -56,
2, -55, 1, -54, 1, -52, 0, -51, -1, -51, -3, -49, -5, -48, -7, -45, -9, -43, -9,
-42, -8, -40, -7, -38, -6, -37, -5, -36, -7, -34, -8, -33, -12, -30, -16, -29,
-20, -27, -22, -26, -24, -25, -24, -25, -23, -24, -21, -23, -19, -23, -17, -24,
-16, -25, -16, -26, -16, -27, -16, -28, -14, -30, -12, -30, -9, -31, -5, -30,
-3, -30, 1, -29, 4, -28, 7, -28, 11, -28, 13, -27, 14, -28, 15, -27, 18, -27,
19, -27, 20, -28, 20, -29, 21, -30, 20, -31, 18, -33, 15, -35, 12, -37, 7, -39,
3, -42, -1, -43, -5, -43, -8, -45, -9, -45, -11, -45, -13, -44, -14, -42, -15,
-41, -16, -40, -16, -39, -17, -38, -15, -36, -13, -34, -10, -32, -7, -29, -4,
-25, -1, -24, 2, -30, 4, -41, 6, -50, 6, -57, 6, -63, 5, -68, 6, -71, 7, -75, 8,
-78, 9, -80, 9, -83, 8, -85, 8, -88, 6, -91, 3, -94, 1, -98, 0, -101, 1, -106,
1, -110, 4, -114, 7, -117, 10, -119, 13, -122, 16, -124, 18, -126, 21, -127, 23,
-127, 22, -128, 19, -128, 17, -127, 16, -125, 13, -121, 11, -117, 11, -113, 14,
-108, 16, -104, 20, -100, 24, -97, 28, -94, 33, -92, 37, -88, 41, -85, 45, -82,
47, -78, 47, -72, 47, -68, 47, -62, 47, -57, 49, -51, 50, -45, 52, -39, 51, -34,
49, -30, 46, -26, 45, -23, 44, -22, 43, -20, 43, -17, 43, -16, 43, -14, 43, -13,
44, -14, 46, -15, 48, -15, 50, -16, 51, -17, 53, -17, 53, -17, 55, -18, 56, -19,
56, -20, 56, -21, 58, -23, 60, -25, 64, -25, 67, -26, 71, -25, 75, -24, 78, -23,
81, -21, 82, -21, 82, -19, 81, -18, 80, -16, 80, -14, 81, -13, 80, -11, 82, -10,
80, -8, 85, -8, 84, -6, 90, -6, 87, -4, 93, -3, 83, -2, 95, 0, 53, };

#endif /* AKWF_stereo_0032_512_H_ */
