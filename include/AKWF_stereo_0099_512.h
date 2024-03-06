#ifndef AKWF_stereo_0099_512_H_
#define AKWF_stereo_0099_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0099_512_NUM_CELLS 1024
#define AKWF_stereo_0099_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0099_512_DATA
[] = {2, 76, 1, 90, 5, 76, 6, 86, 10, 87, 11, 88, 10, 83, 11, 88, 11, 89, 14,
97, 14, 105, 13, 123, 17, 111, 18, 105, 20, 102, 24, 107, 27, 99, 30, 99, 34,
91, 39, 90, 40, 86, 41, 79, 44, 80, 43, 69, 43, 67, 49, 62, 48, 61, 46, 60, 46,
51, 45, 44, 47, 40, 46, 17, 51, 8, 59, 12, 65, 15, 65, 9, 59, 3, 54, -3, 50, -9,
49, -7, 45, -11, 46, -12, 51, -13, 48, -14, 48, -21, 46, -24, 52, -22, 51, -20,
51, -19, 48, -16, 49, -3, 51, -6, 49, -4, 51, -5, 50, -14, 47, -14, 43, -17, 38,
-11, 39, -6, 37, -11, 33, -16, 31, -20, 36, -18, 36, -24, 36, -24, 32, -28, 30,
-34, 30, -34, 25, -36, 24, -42, 22, -39, 21, -39, 20, -36, 18, -38, 21, -42, 22,
-33, 20, -35, 18, -21, 18, -12, 21, -7, 17, -5, 16, -13, 12, -16, 13, -16, 12,
-16, 16, -10, 19, 6, 20, 13, 20, 11, 22, 13, 22, 9, 28, 16, 34, 29, 32, 25, 38,
26, 37, 16, 44, 19, 46, 17, 43, 14, 42, 10, 41, 20, 40, 28, 38, 50, 42, 80, 41,
78, 39, 85, 43, 78, 45, 65, 47, 48, 52, 49, 54, 36, 63, 35, 70, 50, 71, 60, 72,
59, 77, 46, 73, 38, 72, 31, 68, 22, 68, 23, 70, 29, 69, 24, 73, 31, 70, 26, 75,
39, 78, 56, 75, 54, 72, 58, 74, 64, 77, 68, 80, 65, 77, 56, 74, 55, 71, 53, 68,
40, 69, 26, 67, 8, 68, 1, 69, 0, 68, -7, 66, -10, 60, -1, 58, 2, 61, -15, 60,
-24, 52, -26, 51, -29, 45, -31, 46, -34, 47, -33, 45, -35, 45, -32, 45, -31, 46,
-25, 46, -34, 44, -45, 43, -58, 40, -72, 40, -79, 37, -86, 38, -83, 38, -82, 37,
-57, 39, -48, 38, -48, 35, -42, 32, -40, 33, -22, 31, -24, 27, -24, 24, -23, 21,
-24, 17, -27, 13, -37, 11, -47, 7, -63, 3, -77, 3, -87, 1, -86, 1, -94, 5, -99,
10, -96, 18, -85, 15, -82, 13, -83, 9, -78, 6, -80, 1, -84, -6, -94, -11, -100,
-13, -104, -13, -101, -17, -99, -17, -93, -16, -88, -18, -92, -18, -91, -23,
-80, -29, -85, -32, -84, -35, -82, -34, -84, -32, -85, -26, -84, -24, -68, -20,
-58, -18, -68, -16, -82, -19, -81, -21, -86, -23, -86, -26, -81, -28, -87, -28,
-88, -25, -99, -22, -108, -17, -121, -16, -115, -15, -112, -14, -118, -12, -110,
-12, -109, -7, -103, -1, -109, 1, -109, 7, -106, 7, -106, 5, -104, 3, -103, 0,
-91, -2, -80, -1, -84, -3, -83, -2, -86, -2, -87, -4, -85, -3, -75, 0, -67, -1,
-75, -6, -73, -9, -72, -4, -65, -3, -56, -3, -62, -2, -66, -3, -71, 2, -72, 1,
-82, 0, -89, -2, -96, -9, -111, -8, -109, -6, -106, -8, -108, -9, -108, -6,
-106, -6, -106, -9, -112, -6, -107, -7, -104, -7, -96, -3, -83, -8, -83, -8,
-78, -8, -70, -10, -66, -11, -65, -6, -59, -5, -56, -7, -57, -8, -53, -6, -48,
-4, -47, -6, -37, 3, -27, 10, -22, 14, -15, 14, -12, 8, -12, 7, -16, 6, -21, 3,
-30, 2, -33, 0, -35, 1, -39, 7, -34, 5, -31, 0, -30, 1, -26, -2, -27, -6, -30,
-3, -31, -5, -25, -9, -14, -13, 2, -15, 8, -17, 14, -17, 24, -17, 27, -17, 29,
-18, 28, -20, 34, -17, 50, -15, 67, -10, 80, -6, 78, -9, 73, -7, 71, -7, 69,
-15, 59, -20, 45, -22, 37, -27, 31, -31, 25, -35, 8, -37, 12, -36, 16, -36, 17,
-38, 12, -40, 3, -42, -10, -43, -17, -42, -9, -43, -15, -40, -7, -38, -8, -32,
-1, -29, 4, -33, 9, -34, 11, -34, 6, -34, -1, -33, 9, -35, 15, -33, 5, -33, 0,
-30, -3, -21, 0, -16, -1, -17, -4, -19, -12, -21, -6, -24, -2, -24, 6, -25, 2,
-25, -9, -25, -15, -26, -14, -26, -13, -24, -16, -24, -18, -24, -25, -25, -21,
-25, -22, -24, -22, -27, -27, -28, -22, -28, -23, -29, -30, -29, -28, -30, -31,
-30, -31, -29, -30, -29, -28, -24, -21, -21, -16, -20, -14, -18, -14, -20, -12,
-21, -8, -20, -3, -22, 4, -14, 14, -5, 50, -2, 75, 0, 75, -1, 73, -3, 60, -7,
51, -10, 58, -10, 63, -7, 54, -10, 48, -8, 45, -7, 48, -10, 41, -11, 42, -11,
39, -13, 38, -17, 39, -19, 37, -23, 57, -26, 57, -34, 45, -36, 48, -35, 51, -33,
55, -28, 55, -25, 60, -23, 60, -20, 58, -18, 60, -18, 52, -15, 61, -16, 62, -19,
65, -22, 76, -23, 75, -24, 70, -25, 73, -25, 69, -28, 58, -26, 64, -25, 75, -29,
66, -22, 84, -20, 88, -24, 76, -25, 85, -30, 77, -33, 78, -35, 76, -36, 68, -38,
60, -41, 49, -40, 37, -38, 43, -40, 40, -39, 29, -37, 25, -36, 24, -35, 27, -35,
25, -37, 19, -36, 25, -37, 27, -37, 16, -34, 31, -35, 39, -34, 42, -34, 44, -38,
38, -39, 35, -41, 32, -41, 32, -44, 25, -42, 25, -34, 39, -28, 46, -28, 41, -29,
33, -29, 29, -30, 23, -32, 9, -34, -1, -38, -2, -33, -2, -35, -2, -39, -2, -43,
1, -47, 11, -49, 20, -50, 35, -46, 43, -42, 46, -39, 54, -42, 49, -41, 46, -43,
41, -46, 29, -46, 27, -48, 30, -50, 29, -49, 30, -50, 27, -48, 26, -50, 29, -52,
31, -52, 22, -49, 21, -36, 36, -35, 43, -35, 46, -38, 48, -40, 50, -42, 49, -46,
41, -47, 39, -45, 32, -43, 31, -44, 25, -45, 22, -44, 40, -47, 59, -45, 63, -45,
61, -46, 61, -45, 60, -40, 64, -34, 69, -36, 78, -35, 90, -34, 96, -30, 102,
-29, 127, -23, 127, -16, 126, -8, 116, -8, 114, -7, 102, -7, 110, -3, 60, };

#endif /* AKWF_stereo_0099_512_H_ */
