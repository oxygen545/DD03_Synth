#ifndef AKWF_stereo_0077_512_H_
#define AKWF_stereo_0077_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0077_512_NUM_CELLS 1024
#define AKWF_stereo_0077_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0077_512_DATA
[] = {8, 11, 59, 62, 113, 112, 121, 118, 109, 109, 101, 107, 96, 108, 90, 111,
85, 116, 83, 121, 80, 125, 79, 127, 77, 127, 76, 126, 75, 123, 74, 118, 73, 114,
73, 111, 71, 108, 71, 109, 71, 109, 70, 111, 69, 112, 68, 114, 68, 116, 67, 116,
67, 117, 67, 115, 67, 113, 66, 110, 67, 107, 66, 104, 67, 103, 66, 102, 67, 101,
67, 102, 68, 104, 67, 105, 68, 104, 68, 105, 68, 105, 69, 104, 69, 103, 69, 102,
69, 100, 70, 98, 71, 98, 71, 96, 71, 96, 72, 96, 72, 96, 72, 95, 72, 95, 73, 96,
72, 95, 72, 96, 74, 94, 73, 93, 73, 93, 74, 92, 74, 91, 73, 90, 73, 90, 74, 89,
74, 90, 73, 89, 73, 89, 73, 88, 73, 87, 72, 87, 73, 87, 72, 86, 71, 85, 72, 85,
70, 84, 70, 84, 70, 82, 70, 82, 69, 81, 68, 81, 68, 81, 68, 81, 67, 79, 66, 80,
65, 79, 65, 78, 63, 78, 64, 77, 64, 77, 66, 76, 64, 75, 62, 75, 61, 74, 61, 74,
59, 73, 58, 73, 58, 72, 56, 72, 55, 72, 55, 71, 53, 70, 53, 70, 52, 70, 51, 69,
50, 68, 50, 68, 50, 68, 48, 67, 48, 66, 48, 67, 47, 66, 46, 66, 27, 49, -34, -5,
-86, -53, -89, -56, -75, -49, -66, -46, -58, -48, -53, -52, -48, -57, -45, -63,
-42, -68, -39, -70, -38, -71, -37, -69, -36, -66, -34, -63, -34, -58, -34, -56,
-33, -55, -32, -53, -31, -55, -31, -58, -31, -59, -29, -62, -30, -64, -29, -65,
-29, -65, -29, -64, -29, -62, -29, -59, -29, -56, -28, -55, -29, -53, -28, -53,
-29, -53, -29, -53, -30, -55, -31, -55, -30, -57, -31, -57, -31, -58, -31, -57,
-32, -56, -32, -55, -33, -54, -34, -54, -33, -52, -34, -52, -34, -51, -35, -52,
-35, -51, -36, -52, -37, -52, -37, -52, -38, -53, -38, -52, -38, -51, -39, -51,
-39, -51, -38, -49, -38, -49, -39, -49, -39, -49, -39, -48, -40, -48, -40, -49,
-40, -49, -40, -49, -40, -49, -41, -48, -40, -48, -40, -47, -39, -47, -40, -47,
-40, -46, -39, -46, -40, -46, -40, -45, -39, -46, -40, -44, -40, -46, -39, -45,
-39, -44, -38, -44, -38, -44, -38, -44, -37, -44, -37, -43, -28, -44, -11, -45,
-4, -46, -10, -45, -17, -44, -19, -44, -23, -43, -25, -42, -28, -42, -30, -41,
-30, -40, -32, -40, -33, -39, -32, -39, -33, -39, -33, -39, -33, -38, -33, -39,
-33, -38, -31, -38, -31, -37, -31, -38, -31, -37, -31, -37, -30, -36, -30, -36,
-29, -36, -29, -36, -29, -35, -28, -36, -28, -35, -28, -36, -27, -35, -27, -35,
-26, -35, -26, -34, -25, -34, -26, -34, -25, -34, -25, -34, -25, -33, -24, -33,
-24, -33, -24, -33, -25, -32, -24, -32, -24, -32, -24, -32, -23, -32, -24, -32,
-23, -31, -23, -31, -24, -31, -23, -31, -23, -31, -23, -30, -23, -31, -23, -30,
-24, -30, -23, -31, -24, -29, -23, -30, -23, -30, -23, -29, -23, -29, -23, -29,
-23, -30, -24, -28, -24, -28, -24, -29, -23, -28, -22, -28, -19, -23, -17, -18,
-17, -20, -20, -24, -23, -27, -25, -29, -26, -31, -26, -32, -27, -32, -26, -32,
-26, -32, -26, -30, -24, -29, -23, -28, -23, -27, -22, -25, -20, -25, -20, -24,
-20, -25, -19, -24, -19, -24, -20, -24, -19, -24, -20, -24, -20, -24, -20, -24,
-19, -24, -21, -24, -20, -24, -20, -24, -20, -24, -19, -24, -20, -23, -19, -23,
-19, -24, -18, -22, -18, -22, -18, -23, -18, -22, -19, -22, -31, -20, -49, -18,
-53, -17, -45, -18, -37, -19, -32, -19, -28, -20, -23, -20, -21, -20, -18, -20,
-17, -20, -15, -20, -13, -20, -12, -20, -11, -21, -11, -20, -10, -21, -10, -20,
-9, -20, -10, -20, -10, -19, -8, -20, -9, -20, -9, -19, -8, -19, -9, -19, -8,
-19, -9, -18, -8, -18, -8, -18, -8, -18, -8, -19, -9, -18, -8, -18, -8, -17, -9,
-18, -9, -18, -9, -18, -8, -18, -9, -17, -9, -17, -8, -17, -9, -17, -9, -16, -9,
-17, -9, -17, -9, -16, -10, -17, -10, -16, -10, -16, -9, -16, -10, -16, -9, -16,
-10, -15, -10, -15, -10, -16, -10, -15, -9, -15, -10, -15, -10, -15, -10, -16,
-11, -15, -10, -14, -9, -14, -10, -15, -9, -14, -9, -15, -9, -14, -10, -14, -9,
-14, -10, -14, -11, -15, -14, -19, -16, -22, -14, -22, -11, -17, -11, -14, -7,
-10, -6, -9, -5, -8, -5, -8, -6, -7, -6, -8, -6, -9, -8, -9, -9, -10, -8, -12,
-8, -12, -3, -13, 1, -14, 1, -14, -1, -14, -3, -14, -5, -13, -6, -12, -6, -12,
-8, -12, -7, -10, -8, -11, -8, -10, -8, -10, -8, -10, -9, -11, -9, -9, -9, -10,
-9, -11, -9, -10, -9, -10, -9, -9, -8, -10, -9, -10, -9, -9, -8, -10, -9, -10,
-8, -10, -8, -9, -8, -9, -8, -10, -9, -10, -7, -8, -8, -9, -7, -9, -8, -9, -8,
-8, -8, -9, -7, -9, -7, -8, -7, -8, -6, -8, -7, -8, -7, -8, -6, -8, -6, -8, -6,
-8, -7, -7, -6, -9, -7, -8, -6, -8, -6, -7, -6, -7, -7, -7, -7, -7, -6, -8, -6,
-7, -7, -6, -6, -7, -5, -8, -6, -6, -5, -7, -6, -6, -6, -7, -6, -6, -5, -7, -5,
-6, -5, -6, -6, -7, -6, -6, -5, -6, -5, -5, -6, -7, -6, -6, -5, -5, -6, -6, -5,
-6, -5, -7, -6, -6, -5, -5, -5, -6, -4, -5, -5, -6, -5, -5, -4, -5, -5, -6, -5,
-5, -4, -5, -4, -6, -4, -5, -3, -5, -4, -5, -4, -5, -4, -4, -4, -5, -4, -4, -4,
-4, -3, -4, -4, -5, -4, -4, -3, -4, -4, -4, -4, -4, -3, -3, -4, -4, -4, -4, -3,
-5, -4, -4, -3, -4, -4, -4, -3, -4, -4, -5, -3, -2, };

#endif /* AKWF_stereo_0077_512_H_ */