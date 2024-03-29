#ifndef AKWF_stereo_0193_512_H_
#define AKWF_stereo_0193_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0193_512_NUM_CELLS 1024
#define AKWF_stereo_0193_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0193_512_DATA
[] = {3, -8, 13, -2, 22, 10, 32, 19, 42, 30, 52, 39, 61, 50, 69, 59, 77, 69, 84,
76, 91, 85, 97, 91, 102, 98, 107, 105, 111, 110, 113, 114, 117, 118, 119, 120,
119, 123, 120, 125, 121, 127, 121, 127, 119, 127, 119, 127, 117, 127, 116, 127,
113, 127, 112, 127, 108, 125, 107, 124, 105, 124, 103, 124, 99, 123, 97, 122,
95, 121, 93, 120, 89, 120, 88, 119, 86, 118, 83, 117, 81, 117, 79, 116, 78, 114,
77, 113, 75, 111, 73, 110, 72, 108, 70, 107, 70, 104, 69, 102, 68, 98, 67, 96,
67, 93, 67, 92, 67, 88, 66, 85, 66, 82, 66, 79, 66, 76, 66, 73, 67, 70, 66, 66,
65, 63, 66, 60, 65, 57, 65, 53, 64, 50, 62, 47, 61, 44, 59, 38, 57, 35, 55, 30,
53, 27, 50, 23, 48, 18, 45, 13, 42, 8, 38, 4, 34, -1, 31, -7, 28, -12, 26, -16,
21, -21, 18, -25, 16, -29, 12, -34, 11, -38, 7, -41, 6, -45, 4, -48, 1, -51, 0,
-52, -1, -54, -2, -56, -3, -58, -5, -59, -5, -59, -5, -60, -7, -60, -8, -60, -9,
-61, -11, -62, -12, -61, -13, -61, -15, -62, -17, -63, -19, -63, -21, -64, -23,
-65, -26, -65, -28, -67, -31, -68, -32, -69, -35, -70, -37, -71, -39, -72, -41,
-74, -43, -74, -45, -75, -46, -76, -48, -76, -49, -76, -50, -77, -50, -76, -50,
-76, -51, -74, -51, -73, -51, -73, -51, -71, -51, -71, -51, -69, -52, -68, -52,
-66, -53, -65, -53, -65, -55, -64, -56, -62, -58, -63, -59, -63, -61, -63, -63,
-63, -66, -64, -68, -64, -71, -65, -75, -66, -77, -67, -79, -68, -82, -69, -84,
-71, -86, -72, -89, -71, -89, -73, -92, -72, -92, -72, -92, -71, -93, -70, -92,
-68, -91, -66, -91, -64, -89, -62, -87, -58, -86, -55, -83, -51, -80, -47, -77,
-43, -74, -39, -71, -35, -68, -32, -65, -28, -62, -24, -58, -21, -54, -17, -52,
-14, -50, -11, -47, -10, -44, -8, -41, -7, -40, -6, -38, -6, -36, -4, -35, -4,
-33, -5, -32, -4, -30, -4, -29, -4, -28, -4, -27, -5, -27, -5, -25, -5, -24, -5,
-24, -5, -23, -4, -22, -4, -22, -2, -20, -1, -19, 0, -19, 1, -19, 2, -17, 4,
-17, 5, -17, 7, -15, 8, -14, 10, -13, 11, -13, 13, -12, 16, -11, 17, -10, 18,
-8, 19, -8, 21, -6, 21, -5, 23, -5, 24, -3, 25, -1, 26, 0, 27, 2, 26, 3, 27, 3,
28, 4, 27, 5, 27, 5, 27, 5, 26, 6, 25, 5, 24, 3, 22, 1, 20, 0, 18, -2, 15, -5,
12, -7, 9, -11, 6, -15, 1, -18, -3, -24, -6, -28, -12, -31, -16, -35, -21, -40,
-25, -44, -29, -47, -34, -50, -38, -53, -41, -54, -44, -55, -46, -55, -48, -55,
-50, -55, -50, -52, -50, -49, -48, -47, -46, -43, -44, -37, -40, -32, -35, -25,
-30, -19, -26, -11, -20, -5, -14, 3, -7, 10, 0, 19, 6, 26, 13, 33, 20, 40, 26,
47, 32, 53, 37, 57, 42, 61, 46, 66, 50, 69, 53, 73, 56, 73, 58, 75, 59, 75, 59,
76, 60, 74, 59, 74, 58, 72, 57, 70, 54, 68, 52, 65, 51, 61, 48, 59, 46, 56, 43,
51, 40, 49, 38, 44, 36, 41, 34, 38, 31, 34, 30, 31, 28, 29, 27, 26, 24, 23, 23,
21, 21, 18, 20, 16, 19, 15, 18, 13, 16, 11, 16, 10, 15, 9, 13, 9, 11, 8, 9, 9,
8, 8, 7, 8, 6, 9, 5, 9, 3, 10, 1, 10, 0, 13, -1, 13, -2, 15, -4, 16, -5, 18, -5,
20, -7, 22, -7, 23, -8, 25, -9, 26, -9, 28, -9, 29, -10, 30, -11, 31, -11, 31,
-12, 31, -12, 31, -13, 31, -13, 31, -15, 30, -15, 30, -17, 29, -18, 27, -18, 27,
-20, 26, -21, 24, -23, 23, -24, 23, -24, 22, -24, 23, -25, 22, -25, 21, -24, 22,
-25, 23, -23, 23, -23, 24, -21, 25, -20, 27, -17, 28, -15, 29, -12, 30, -9, 32,
-6, 33, -4, 35, -1, 37, 3, 37, 6, 38, 10, 39, 13, 39, 16, 40, 19, 39, 21, 40,
24, 40, 26, 39, 28, 38, 29, 37, 31, 37, 32, 35, 34, 34, 34, 33, 35, 32, 36, 31,
36, 30, 37, 29, 39, 29, 40, 30, 40, 29, 41, 28, 43, 28, 44, 29, 45, 29, 47, 29,
48, 30, 50, 29, 50, 29, 53, 29, 53, 28, 54, 28, 56, 27, 56, 25, 58, 24, 56, 22,
56, 19, 56, 17, 55, 13, 53, 11, 51, 7, 49, 3, 47, -2, 44, -6, 41, -10, 37, -15,
35, -18, 31, -23, 27, -26, 24, -29, 21, -34, 18, -36, 16, -39, 13, -41, 11, -43,
9, -44, 8, -45, 7, -46, 6, -46, 6, -46, 6, -46, 6, -45, 7, -44, 6, -44, 7, -42,
8, -41, 8, -40, 8, -40, 8, -38, 8, -38, 8, -37, 7, -36, 7, -34, 6, -34, 4, -35,
1, -35, -1, -35, -4, -35, -6, -35, -10, -36, -14, -37, -17, -37, -21, -39, -24,
-39, -29, -40, -32, -42, -35, -42, -38, -43, -42, -45, -45, -46, -47, -46, -50,
-48, -52, -48, -54, -49, -56, -50, -56, -51, -57, -51, -58, -51, -59, -52, -60,
-52, -60, -52, -60, -52, -60, -53, -60, -53, -59, -52, -58, -51, -59, -51, -59,
-52, -58, -50, -58, -49, -56, -47, -56, -47, -55, -46, -55, -43, -54, -43, -53,
-41, -54, -40, -53, -39, -53, -38, -52, -37, -52, -35, -51, -35, -51, -34, -51,
-35, -51, -35, -52, -35, -52, -37, -53, -38, -54, -40, -56, -41, -58, -43, -58,
-46, -60, -48, -62, -51, -65, -54, -67, -57, -70, -59, -72, -62, -73, -64, -75,
-65, -76, -66, -77, -67, -77, -67, -77, -66, -77, -64, -75, -61, -72, -58, -70,
-53, -65, -48, -61, -43, -56, -35, -48, -28, -41, -20, -33, -11, -26, -2, -11,
};

#endif /* AKWF_stereo_0193_512_H_ */
