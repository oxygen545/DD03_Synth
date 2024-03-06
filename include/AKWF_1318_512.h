#ifndef AKWF_1318_512_H_
#define AKWF_1318_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1318_512_NUM_CELLS 512
#define AKWF_1318_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1318_512_DATA [] = {1,
4, 7, 11, 14, 18, 21, 24, 27, 30, 33, 37, 40, 43, 45, 49, 52, 56, 59, 62, 65,
68, 72, 74, 77, 80, 83, 86, 89, 92, 95, 98, 101, 103, 106, 108, 111, 113, 115,
116, 119, 121, 122, 123, 125, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126,
126, 125, 124, 122, 121, 120, 118, 116, 114, 111, 109, 108, 105, 103, 101, 97,
96, 93, 91, 89, 86, 83, 81, 77, 75, 72, 69, 67, 65, 62, 59, 55, 53, 50, 48, 46,
43, 40, 37, 35, 33, 30, 27, 24, 22, 19, 18, 15, 13, 10, 7, 5, 3, 1, -2, -4, -6,
-8, -10, -13, -16, -17, -19, -22, -23, -26, -28, -30, -32, -34, -36, -37, -40,
-42, -44, -46, -47, -50, -52, -53, -55, -57, -60, -61, -62, -64, -67, -68, -69,
-72, -73, -75, -76, -77, -78, -79, -80, -80, -81, -82, -83, -83, -82, -82, -83,
-82, -83, -82, -82, -81, -80, -80, -78, -77, -77, -75, -74, -72, -71, -70, -69,
-66, -64, -64, -62, -60, -58, -57, -55, -53, -52, -50, -48, -47, -46, -44, -42,
-41, -39, -38, -37, -35, -34, -34, -31, -30, -30, -29, -28, -26, -26, -25, -24,
-24, -24, -23, -21, -21, -21, -20, -20, -18, -17, -16, -16, -11, 8, 17, 24, 29,
34, 36, 36, 36, 35, 33, 31, 29, 25, 22, 19, 16, 13, 9, 6, 4, 0, -3, -5, -8, -10,
-12, -15, -17, -19, -19, -21, -23, -25, -25, -27, -28, -28, -30, -30, -31, -32,
-33, -33, -34, -35, -35, -35, -36, -36, -35, -36, -35, -35, -34, -33, -32, -31,
-30, -29, -27, -25, -23, -21, -19, -18, -15, -13, -12, -9, -7, -5, -2, -1, 1, 3,
5, 7, 8, 11, 12, 14, 15, 17, 18, 19, 20, 23, 23, 25, 25, 26, 26, 28, 28, 28, 29,
29, 29, 29, 28, 27, 26, 26, 24, 23, 20, 20, 17, 15, 14, 12, 10, 8, 6, 3, 2, -1,
-2, -5, -7, -8, -10, -12, -14, -16, -17, -19, -21, -22, -24, -26, -27, -29, -31,
-32, -32, -35, -37, -38, -39, -41, -42, -43, -44, -47, -48, -49, -49, -50, -50,
-51, -51, -51, -52, -52, -52, -52, -52, -52, -51, -51, -51, -50, -50, -51, -50,
-51, -50, -51, -50, -51, -50, -50, -50, -49, -48, -48, -48, -46, -46, -45, -44,
-43, -42, -42, -40, -39, -38, -37, -36, -35, -33, -33, -32, -31, -30, -29, -28,
-26, -27, -26, -25, -24, -23, -22, -20, -21, -20, -18, -18, -17, -15, -15, -14,
-14, -13, -13, -12, -11, -10, -9, -8, -8, -9, -8, -8, -9, -10, -10, -12, -13,
-15, -17, -19, -22, -24, -27, -28, -31, -33, -36, -38, -40, -42, -43, -45, -48,
-48, -51, -52, -54, -55, -55, -56, -57, -57, -57, -57, -58, -59, -58, -58, -58,
-58, -58, -57, -57, -55, -56, -54, -52, -52, -51, -49, -47, -47, -45, -43, -40,
-38, -35, -33, -31, -27, -24, -21, -16, -13, -9, -4, -1, };

#endif /* AKWF_1318_512_H_ */
