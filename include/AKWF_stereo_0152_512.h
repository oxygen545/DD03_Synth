#ifndef AKWF_stereo_0152_512_H_
#define AKWF_stereo_0152_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0152_512_NUM_CELLS 1024
#define AKWF_stereo_0152_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0152_512_DATA
[] = {95, 102, 126, 127, 111, 118, 120, 126, 111, 116, 116, 120, 110, 113, 114,
116, 108, 109, 111, 111, 107, 106, 108, 107, 105, 103, 104, 102, 102, 98, 102,
97, 101, 95, 100, 93, 99, 91, 97, 89, 96, 86, 95, 84, 94, 83, 92, 80, 92, 79,
90, 75, 89, 74, 87, 71, 88, 71, 85, 68, 85, 66, 83, 64, 83, 62, 81, 59, 80, 57,
79, 55, 78, 53, 76, 51, 75, 50, 74, 47, 73, 45, 71, 42, 70, 41, 70, 42, 69, 40,
69, 40, 69, 40, 69, 40, 69, 41, 68, 40, 67, 40, 67, 40, 67, 39, 67, 38, 66, 38,
65, 39, 66, 39, 66, 38, 65, 37, 64, 37, 64, 37, 63, 37, 63, 36, 63, 36, 63, 37,
63, 36, 62, 36, 61, 36, 60, 36, 61, 35, 60, 35, 60, 35, 59, 35, 59, 35, 60, 34,
59, 34, 59, 33, 59, 34, 58, 34, 57, 34, 58, 32, 56, 33, 57, 32, 56, 33, 56, 32,
55, 33, 55, 32, 55, 32, 54, 31, 54, 32, 53, 31, 52, 31, 52, 30, 52, 31, 52, 30,
52, 30, 51, 30, 51, 29, 51, 30, 50, 30, 50, 29, 49, 29, 49, 28, 48, 29, 48, 28,
48, 28, 47, 27, 47, 27, 47, 27, 47, 28, 46, 27, 46, 26, 46, 26, 46, 27, 46, 26,
44, 26, 44, 26, 43, 25, 44, 26, 43, 25, 43, 26, 43, 24, 42, 24, 41, 25, 41, 24,
40, 23, 40, 24, 40, 23, 39, 24, 39, 24, 39, 22, 39, 23, 38, 22, 38, 22, 37, 22,
36, 22, 36, 21, 37, 22, 36, 21, 36, 20, 36, 21, 35, 21, 35, 20, 35, 20, 34, 20,
33, 20, 33, 19, 33, 19, 32, 19, 32, 19, 32, 18, 32, 18, 31, 17, 30, 17, 30, 17,
29, 18, 30, 17, 29, 17, 28, 17, 28, 17, 28, 16, 28, 17, 28, 16, 27, 15, 26, 15,
27, 15, 26, 15, 25, 14, 25, 15, 24, 15, 24, 14, 24, 14, 24, 14, 23, 14, 22, 13,
22, 13, 22, 12, 22, 13, 22, 13, 21, 12, 21, 12, 21, 12, 20, 12, 20, 11, 19, 11,
19, 12, 19, 12, 18, 10, 18, 11, 17, 10, 17, 10, 16, 10, 17, 10, 16, 10, 15, 9,
15, 10, 15, 8, 15, 9, 15, 9, 14, 8, 14, 8, 13, 8, 13, 7, 13, 7, 12, 6, 12, 7,
12, 7, 11, 7, 11, 7, 10, 6, 11, 6, 10, 5, 9, 5, 9, 6, 8, 5, 8, 5, 9, 6, 8, 4, 7,
4, 7, 4, 6, 4, 6, 4, 5, 3, 6, 3, 6, 2, 5, 3, 4, 3, 4, 3, 4, 2, 3, 2, 4, 2, 2, 1,
2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, -1, 0,
1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1,
0, 1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0,
0, 1, -1, 0, -1, 0, -1, -1, -1, -1, -2, -1, -2, -1, -3, -2, -3, -2, -3, -2, -3,
-2, -4, -2, -4, -2, -4, -3, -5, -3, -6, -4, -6, -4, -7, -3, -7, -4, -7, -4, -8,
-4, -8, -4, -8, -4, -8, -4, -9, -5, -9, -5, -10, -5, -9, -5, -10, -5, -10, -6,
-11, -7, -11, -7, -11, -7, -12, -7, -12, -8, -12, -8, -14, -8, -13, -8, -13, -8,
-14, -8, -14, -8, -15, -8, -14, -9, -16, -9, -16, -10, -16, -10, -17, -10, -16,
-9, -17, -10, -18, -11, -18, -11, -19, -11, -19, -12, -19, -11, -20, -11, -21,
-12, -20, -12, -20, -12, -22, -12, -21, -12, -22, -13, -22, -13, -23, -13, -23,
-13, -23, -13, -24, -14, -24, -13, -24, -14, -25, -15, -24, -15, -25, -15, -26,
-15, -26, -15, -26, -16, -27, -16, -27, -15, -28, -16, -28, -16, -28, -16, -28,
-17, -28, -17, -29, -17, -29, -18, -30, -17, -30, -18, -31, -18, -31, -18, -31,
-18, -32, -19, -32, -19, -32, -19, -33, -19, -33, -19, -33, -19, -34, -20, -34,
-19, -34, -20, -35, -20, -36, -21, -35, -21, -36, -21, -37, -22, -37, -22, -37,
-22, -37, -22, -37, -22, -39, -22, -39, -23, -39, -22, -40, -23, -40, -24, -40,
-23, -40, -23, -41, -24, -41, -23, -42, -24, -42, -25, -41, -24, -42, -24, -42,
-25, -44, -24, -44, -25, -44, -26, -44, -26, -44, -26, -45, -26, -45, -26, -45,
-27, -45, -28, -46, -26, -46, -27, -47, -27, -47, -28, -48, -28, -48, -27, -48,
-29, -49, -28, -49, -29, -50, -29, -50, -29, -51, -30, -51, -29, -51, -29, -52,
-30, -52, -30, -53, -30, -53, -31, -53, -32, -53, -31, -54, -31, -55, -32, -54,
-31, -55, -32, -55, -32, -55, -33, -57, -33, -56, -33, -57, -33, -57, -34, -58,
-34, -57, -33, -58, -34, -58, -33, -59, -34, -59, -34, -59, -35, -60, -35, -60,
-36, -61, -36, -61, -36, -61, -36, -61, -35, -62, -37, -63, -36, -63, -36, -63,
-37, -64, -37, -64, -38, -65, -37, -64, -38, -65, -38, -65, -38, -65, -38, -65,
-39, -66, -39, -67, -39, -67, -39, -67, -39, -68, -39, -68, -40, -68, -40, -69,
-40, -69, -41, -70, -40, -70, -40, -70, -40, -71, -41, -72, -43, -73, -44, -74,
-46, -75, -48, -76, -51, -78, -54, -79, -55, -80, -57, -81, -60, -83, -62, -83,
-63, -85, -66, -85, -67, -86, -69, -87, -72, -89, -75, -90, -75, -92, -78, -92,
-81, -95, -82, -95, -85, -96, -86, -97, -89, -98, -90, -100, -93, -100, -94,
-103, -97, -101, -98, -105, -102, -104, -102, -108, -107, -106, -105, -110,
-111, -108, -109, -114, -117, -110, -112, -116, -120, -111, -117, -119, -124,
-114, -120, -123, -128, -109, -117, 1, 1, 0, 0, };

#endif /* AKWF_stereo_0152_512_H_ */
