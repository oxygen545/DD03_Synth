#ifndef AKWF_stereo_0137_512_H_
#define AKWF_stereo_0137_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0137_512_NUM_CELLS 1024
#define AKWF_stereo_0137_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0137_512_DATA
[] = {2, -68, 5, -89, 7, -76, 10, -79, 12, -72, 15, -74, 19, -66, 21, -67, 24,
-60, 27, -61, 29, -54, 32, -54, 35, -50, 39, -48, 40, -43, 43, -41, 46, -37, 48,
-35, 51, -32, 54, -29, 56, -25, 59, -22, 63, -20, 64, -16, 66, -14, 69, -11, 72,
-8, 74, -5, 76, -2, 79, 1, 81, 3, 83, 7, 85, 8, 88, 12, 89, 14, 92, 17, 93, 20,
96, 22, 98, 25, 99, 27, 102, 29, 104, 32, 105, 34, 107, 36, 108, 38, 110, 40,
112, 42, 114, 44, 115, 47, 117, 49, 117, 52, 119, 53, 120, 54, 122, 58, 124, 58,
124, 61, 125, 62, 126, 64, 127, 65, 127, 66, 127, 67, 127, 68, 127, 69, 127, 69,
127, 70, 127, 72, 127, 72, 126, 72, 126, 72, 125, 72, 124, 72, 124, 73, 122, 72,
121, 72, 120, 72, 118, 72, 118, 71, 115, 72, 114, 70, 112, 70, 111, 69, 109, 68,
107, 68, 105, 67, 102, 66, 101, 64, 99, 64, 97, 63, 95, 61, 92, 60, 90, 58, 87,
58, 86, 56, 83, 56, 81, 54, 79, 54, 75, 51, 74, 50, 71, 49, 69, 47, 66, 45, 64,
46, 61, 43, 59, 43, 57, 41, 54, 40, 51, 38, 51, 37, 48, 35, 45, 34, 43, 32, 40,
32, 39, 31, 36, 29, 34, 28, 32, 26, 30, 25, 27, 23, 25, 22, 23, 21, 21, 20, 18,
19, 17, 17, 14, 16, 14, 15, 11, 14, 9, 12, 6, 12, 5, 10, 3, 9, 1, 8, 0, 7, -2,
6, -3, 4, -5, 4, -7, 4, -8, 1, -10, 1, -12, 1, -13, 0, -14, -2, -16, -3, -17,
-3, -19, -4, -20, -5, -22, -5, -22, -7, -24, -8, -25, -8, -26, -9, -27, -9, -29,
-10, -30, -11, -30, -11, -32, -12, -32, -13, -34, -13, -35, -14, -35, -14, -36,
-15, -37, -16, -38, -16, -39, -16, -39, -17, -41, -17, -41, -17, -42, -18, -42,
-19, -43, -19, -44, -19, -45, -19, -45, -19, -45, -20, -46, -20, -47, -20, -48,
-21, -47, -21, -47, -22, -49, -21, -49, -22, -49, -21, -50, -21, -49, -22, -50,
-23, -51, -22, -52, -22, -52, -22, -52, -22, -51, -22, -52, -23, -52, -23, -53,
-23, -52, -23, -52, -23, -52, -23, -53, -23, -52, -22, -52, -23, -53, -22, -53,
-23, -53, -23, -54, -23, -54, -22, -54, -22, -54, -23, -53, -22, -54, -23, -53,
-23, -54, -22, -53, -23, -53, -22, -53, -21, -53, -22, -53, -21, -53, -21, -53,
-21, -52, -20, -53, -20, -53, -20, -52, -21, -52, -20, -53, -20, -52, -20, -51,
-19, -51, -18, -51, -18, -50, -18, -50, -18, -50, -19, -51, -17, -50, -18, -50,
-17, -50, -17, -50, -17, -50, -16, -50, -17, -49, -17, -48, -15, -48, -15, -48,
-15, -48, -15, -47, -15, -47, -14, -47, -14, -47, -14, -46, -14, -46, -12, -46,
-13, -46, -12, -45, -12, -45, -11, -45, -11, -45, -11, -44, -11, -43, -11, -43,
-10, -43, -10, -42, -10, -42, -9, -42, -8, -42, -7, -42, -8, -41, -8, -40, -7,
-41, -7, -39, -7, -39, -6, -39, -5, -39, -5, -38, -5, -38, -4, -37, -4, -38, -4,
-37, -4, -37, -2, -36, -3, -36, -2, -35, -2, -35, -2, -35, -1, -35, -1, -34, 0,
-33, 0, -33, 1, -33, 0, -33, 1, -32, 1, -32, 2, -31, 3, -31, 3, -31, 4, -30, 4,
-30, 3, -29, 4, -30, 5, -29, 5, -28, 6, -28, 5, -29, 7, -28, 7, -28, 8, -26, 8,
-26, 8, -27, 9, -26, 9, -26, 9, -25, 9, -24, 11, -24, 10, -24, 11, -24, 12, -22,
12, -23, 11, -23, 12, -22, 13, -22, 13, -22, 13, -21, 14, -20, 14, -20, 14, -20,
15, -19, 15, -20, 16, -20, 16, -19, 17, -18, 17, -18, 18, -18, 18, -18, 18, -17,
19, -17, 19, -17, 20, -17, 19, -16, 20, -16, 21, -14, 21, -14, 22, -15, 23, -14,
22, -13, 23, -13, 24, -13, 24, -12, 24, -13, 25, -12, 26, -12, 26, -11, 26, -11,
26, -11, 27, -10, 27, -10, 28, -10, 28, -9, 29, -9, 28, -9, 29, -8, 30, -8, 30,
-8, 30, -8, 30, -7, 32, -7, 31, -7, 32, -6, 32, -6, 33, -6, 33, -6, 33, -4, 34,
-4, 35, -5, 35, -5, 35, -3, 36, -4, 36, -3, 36, -3, 37, -3, 38, -2, 38, -2, 39,
-2, 39, -1, 40, -2, 39, -1, 40, 0, 41, 0, 40, 0, 42, 0, 41, 1, 42, 1, 42, 1, 43,
2, 43, 2, 44, 1, 44, 2, 45, 3, 45, 3, 46, 4, 46, 3, 46, 4, 47, 4, 48, 5, 47, 5,
49, 4, 48, 5, 49, 5, 50, 6, 49, 6, 51, 6, 50, 7, 52, 7, 52, 7, 52, 7, 52, 8, 52,
7, 51, 8, 51, 7, 51, 7, 50, 7, 50, 7, 49, 6, 49, 7, 49, 6, 47, 6, 46, 6, 45, 6,
43, 5, 42, 5, 40, 4, 39, 3, 37, 3, 35, 3, 34, 2, 31, 1, 30, 1, 26, 0, 25, -1,
22, -1, 21, -3, 18, -3, 16, -5, 12, -5, 11, -5, 8, -7, 5, -7, 2, -8, 0, -10, -3,
-10, -6, -11, -8, -12, -12, -14, -15, -14, -18, -15, -20, -16, -24, -17, -27,
-18, -30, -19, -32, -20, -36, -21, -38, -22, -42, -23, -45, -24, -48, -25, -51,
-26, -54, -28, -57, -28, -61, -29, -63, -30, -67, -31, -70, -33, -72, -33, -75,
-35, -78, -35, -81, -36, -84, -37, -86, -38, -90, -39, -93, -41, -96, -42, -99,
-42, -101, -43, -105, -44, -107, -45, -109, -45, -111, -46, -113, -45, -114,
-45, -115, -45, -116, -45, -118, -45, -119, -45, -119, -44, -119, -43, -120,
-42, -119, -41, -120, -40, -119, -38, -119, -36, -119, -36, -118, -34, -116,
-32, -115, -31, -114, -28, -112, -27, -112, -24, -109, -22, -108, -20, -105,
-17, -106, -15, -100, -13, -101, -10, -94, -7, -99, -5, -86, -3, -99, 0, -56, };

#endif /* AKWF_stereo_0137_512_H_ */
