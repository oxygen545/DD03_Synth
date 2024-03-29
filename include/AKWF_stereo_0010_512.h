#ifndef AKWF_stereo_0010_512_H_
#define AKWF_stereo_0010_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0010_512_NUM_CELLS 1024
#define AKWF_stereo_0010_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0010_512_DATA
[] = {0, 12, 1, 16, 0, 15, 1, 16, 0, 15, 1, 17, 1, 16, 2, 17, 1, 17, 2, 17, 2,
17, 2, 18, 3, 18, 2, 19, 2, 18, 3, 19, 3, 18, 3, 19, 3, 19, 3, 19, 2, 19, 3, 19,
4, 19, 4, 19, 4, 20, 4, 20, 4, 20, 4, 20, 4, 20, 5, 20, 5, 20, 5, 21, 5, 20, 4,
21, 5, 21, 4, 21, 5, 21, 5, 21, 5, 20, 6, 22, 6, 21, 5, 21, 5, 22, 6, 22, 5, 20,
6, 21, 6, 21, 6, 21, 6, 21, 6, 21, 7, 21, 6, 22, 7, 21, 7, 22, 6, 21, 6, 21, 6,
21, 7, 22, 7, 21, 6, 21, 6, 21, 7, 21, 6, 22, 6, 21, 7, 22, 7, 22, 6, 21, 7, 21,
7, 20, 7, 21, 7, 21, 7, 21, 7, 21, 6, 20, 7, 21, 7, 20, 7, 20, 7, 21, 7, 20, 7,
20, 7, 21, 7, 20, 7, 20, 7, 19, 6, 19, 7, 19, 6, 19, 7, 19, 7, 19, 6, 19, 6, 18,
6, 19, 6, 19, 6, 19, 7, 19, 6, 18, 7, 18, 6, 19, 6, 19, 6, 17, 6, 18, 6, 17, 6,
17, 6, 17, 6, 17, 6, 17, 5, 17, 6, 16, 6, 16, 5, 16, 6, 15, 4, 16, 5, 15, 5, 15,
5, 15, 5, 14, 5, 14, 5, 15, 4, 14, 5, 14, 5, 13, 4, 14, 5, 13, 4, 13, 5, 12, 4,
12, 5, 13, 4, 12, 4, 13, 3, 12, 7, 16, 42, 59, 93, 113, 115, 127, 121, 121, 123,
111, 121, 105, 122, 109, 127, 119, 127, 124, 125, 121, 121, 117, 118, 116, 117,
116, 113, 114, 108, 108, 104, 105, 102, 105, 101, 104, 97, 103, 93, 98, 91, 98,
91, 97, 89, 98, 87, 95, 85, 94, 84, 94, 84, 95, 83, 94, 82, 93, 82, 93, 81, 93,
82, 94, 81, 93, 82, 94, 81, 93, 82, 94, 83, 95, 84, 95, 84, 94, 85, 95, 86, 95,
86, 96, 87, 96, 88, 96, 90, 97, 90, 97, 91, 98, 93, 99, 93, 98, 94, 99, 95, 100,
96, 99, 97, 99, 98, 100, 98, 100, 99, 101, 100, 100, 100, 100, 101, 100, 101,
101, 102, 100, 103, 100, 103, 100, 105, 100, 105, 100, 105, 100, 106, 100, 105,
99, 107, 100, 108, 99, 107, 99, 107, 99, 108, 98, 108, 99, 109, 99, 105, 93, 72,
50, 18, -9, -10, -25, -16, -18, -18, -8, -14, 0, -19, -7, -25, -19, -26, -25,
-21, -22, -16, -17, -14, -19, -12, -20, -8, -17, -2, -12, 2, -10, 4, -10, 6,
-10, 9, -9, 13, -6, 15, -6, 15, -7, 16, -8, 18, -7, 19, -7, 19, -8, 18, -9, 19,
-10, 20, -10, 19, -11, 19, -13, 18, -14, 17, -15, 16, -17, 15, -18, 13, -19, 11,
-21, 10, -23, 9, -23, 7, -25, 5, -27, 3, -28, 1, -29, -1, -30, -3, -33, -5, -34,
-7, -36, -9, -37, -10, -39, -13, -40, -15, -42, -17, -43, -19, -44, -21, -45,
-23, -48, -25, -48, -27, -50, -28, -51, -30, -52, -32, -53, -34, -54, -35, -56,
-36, -57, -38, -58, -39, -59, -41, -59, -42, -60, -44, -61, -44, -62, -46, -64,
-47, -63, -48, -64, -49, -66, -50, -66, -52, -67, -52, -67, -53, -68, -55, -68,
-55, -68, -56, -68, -56, -69, -57, -70, -59, -70, -59, -70, -59, -70, -59, -71,
-60, -70, -60, -71, -61, -73, -61, -72, -62, -71, -62, -71, -62, -72, -63, -73,
-63, -73, -63, -72, -63, -72, -64, -73, -64, -73, -64, -72, -64, -72, -63, -73,
-63, -72, -64, -73, -64, -72, -64, -72, -64, -73, -63, -71, -64, -71, -64, -71,
-64, -70, -63, -70, -63, -70, -62, -70, -63, -70, -63, -69, -62, -69, -63, -69,
-62, -69, -62, -68, -62, -69, -61, -68, -61, -67, -61, -68, -62, -67, -61, -67,
-60, -66, -60, -66, -59, -65, -59, -65, -59, -64, -59, -64, -59, -64, -58, -64,
-58, -63, -58, -63, -57, -61, -56, -61, -56, -61, -56, -61, -56, -60, -55, -60,
-56, -59, -56, -59, -54, -59, -54, -58, -54, -58, -53, -57, -53, -57, -53, -56,
-53, -56, -52, -56, -52, -55, -51, -55, -51, -55, -50, -54, -51, -53, -50, -52,
-50, -52, -49, -52, -48, -50, -48, -50, -48, -50, -48, -49, -47, -48, -47, -48,
-46, -47, -47, -47, -45, -47, -46, -45, -44, -46, -45, -46, -44, -45, -43, -45,
-43, -44, -43, -43, -42, -42, -42, -43, -42, -41, -42, -41, -41, -40, -41, -40,
-41, -40, -40, -38, -40, -38, -39, -38, -39, -37, -38, -37, -37, -36, -37, -36,
-37, -35, -37, -35, -36, -34, -35, -33, -36, -33, -35, -32, -35, -31, -34, -31,
-34, -31, -33, -30, -33, -29, -32, -29, -32, -28, -32, -28, -32, -28, -31, -27,
-30, -26, -30, -26, -30, -26, -30, -25, -29, -23, -29, -24, -28, -23, -28, -23,
-28, -23, -27, -21, -27, -21, -26, -21, -26, -20, -26, -20, -26, -19, -25, -18,
-24, -18, -24, -17, -24, -17, -23, -17, -23, -16, -23, -15, -22, -15, -22, -14,
-22, -14, -21, -14, -22, -13, -21, -12, -20, -12, -21, -11, -20, -11, -19, -11,
-19, -9, -19, -9, -19, -9, -18, -8, -17, -8, -17, -7, -16, -7, -17, -6, -16, -6,
-16, -6, -15, -5, -15, -4, -15, -4, -14, -4, -14, -4, -14, -3, -14, -3, -13, -3,
-12, -2, -12, -2, -11, -1, -11, 0, -11, 1, -11, 1, -11, 2, -10, 2, -10, 2, -10,
2, -9, 3, -9, 4, -9, 3, -8, 3, -8, 4, -8, 4, -8, 4, -8, 6, -7, 5, -8, 6, -7, 6,
-7, 6, -6, 8, -5, 7, -6, 7, -5, 8, -5, 8, -5, 9, -4, 9, -4, 9, -3, 10, -4, 10,
-3, 11, -3, 11, -3, 10, -2, 11, -3, 12, -3, 11, -2, 12, -2, 13, -2, 13, -2, 14,
-1, 12, -1, 14, -1, 14, -1, 15, -1, 14, -1, 17, 1, 11, };

#endif /* AKWF_stereo_0010_512_H_ */
