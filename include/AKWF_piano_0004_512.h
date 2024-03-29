#ifndef AKWF_piano_0004_512_H_
#define AKWF_piano_0004_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_piano_0004_512_NUM_CELLS 512
#define AKWF_piano_0004_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_piano_0004_512_DATA []
= {3, 7, 11, 16, 20, 23, 26, 31, 33, 36, 38, 41, 43, 45, 46, 48, 49, 52, 53, 57,
59, 63, 66, 68, 71, 73, 76, 77, 78, 79, 79, 78, 79, 78, 79, 79, 78, 80, 80, 81,
83, 83, 85, 86, 89, 91, 94, 97, 101, 104, 108, 112, 117, 120, 123, 125, 126,
127, 127, 127, 127, 125, 122, 118, 114, 109, 103, 96, 90, 83, 76, 68, 62, 55,
48, 42, 37, 32, 27, 23, 19, 16, 14, 10, 9, 7, 5, 4, 2, 0, -3, -5, -8, -11, -13,
-16, -18, -21, -22, -24, -25, -27, -27, -28, -29, -28, -30, -30, -30, -30, -29,
-28, -27, -26, -23, -22, -20, -16, -15, -14, -12, -11, -11, -11, -11, -12, -13,
-14, -14, -16, -15, -16, -17, -17, -16, -16, -15, -15, -15, -13, -13, -12, -12,
-12, -13, -12, -12, -13, -14, -14, -15, -16, -17, -19, -20, -22, -25, -27, -29,
-31, -34, -36, -38, -39, -40, -40, -40, -40, -39, -37, -35, -34, -33, -32, -30,
-29, -28, -27, -26, -26, -25, -25, -25, -24, -22, -22, -21, -21, -19, -19, -17,
-16, -15, -13, -11, -10, -8, -7, -5, -4, -2, -1, 0, 1, 2, 3, 5, 5, 6, 8, 9, 10,
10, 11, 12, 11, 11, 12, 12, 12, 12, 11, 12, 11, 12, 12, 14, 15, 16, 18, 19, 21,
23, 25, 27, 29, 30, 32, 32, 32, 33, 32, 32, 33, 34, 35, 36, 38, 40, 44, 46, 50,
54, 56, 60, 63, 65, 67, 67, 67, 67, 65, 63, 61, 57, 53, 49, 45, 40, 36, 31, 24,
20, 15, 11, 8, 3, -1, -5, -7, -10, -13, -14, -16, -16, -17, -18, -16, -16, -15,
-14, -12, -11, -9, -7, -5, -3, 1, 3, 7, 9, 12, 16, 17, 19, 21, 21, 21, 22, 21,
20, 21, 20, 19, 17, 18, 17, 16, 15, 13, 13, 12, 10, 7, 5, 3, 1, -2, -5, -8, -11,
-14, -16, -18, -20, -22, -24, -25, -26, -25, -25, -24, -23, -22, -21, -20, -19,
-19, -20, -20, -22, -22, -23, -24, -25, -26, -26, -26, -26, -26, -25, -24, -24,
-22, -21, -20, -19, -18, -18, -17, -17, -18, -19, -19, -21, -22, -23, -24, -25,
-24, -23, -23, -22, -20, -18, -16, -15, -14, -13, -13, -13, -13, -14, -15, -17,
-18, -22, -24, -27, -31, -34, -38, -42, -46, -49, -53, -55, -58, -60, -63, -65,
-67, -67, -68, -68, -68, -68, -67, -65, -62, -60, -57, -55, -52, -48, -45, -42,
-39, -35, -33, -29, -26, -23, -19, -16, -13, -9, -7, -5, -2, 0, 1, 3, 4, 4, 5,
6, 6, 8, 8, 9, 9, 9, 9, 9, 9, 8, 8, 5, 3, 0, -1, -5, -8, -11, -15, -18, -22,
-25, -27, -29, -31, -32, -34, -34, -35, -37, -39, -41, -43, -45, -48, -51, -55,
-57, -60, -63, -66, -66, -68, -69, -69, -68, -67, -65, -62, -60, -57, -54, -50,
-47, -42, -40, -35, -31, -27, -22, -19, -15, -10, -5, 0, };

#endif /* AKWF_piano_0004_512_H_ */
