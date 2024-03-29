#ifndef AKWF_1723_512_H_
#define AKWF_1723_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1723_512_NUM_CELLS 512
#define AKWF_1723_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1723_512_DATA [] =
{103, 127, 121, 127, 123, 127, 123, 127, 123, 127, 124, 126, 123, 125, 122, 123,
122, 122, 121, 121, 121, 120, 120, 120, 119, 119, 119, 117, 117, 117, 116, 116,
116, 115, 116, 114, 114, 114, 114, 113, 113, 112, 111, 110, 110, 109, 109, 108,
108, 107, 107, 107, 105, 106, 105, 104, 104, 104, 102, 102, 101, 101, 100, 99,
98, 97, 97, 96, 96, 95, 94, 94, 92, 92, 91, 90, 89, 89, 87, 87, 86, 85, 84, 83,
82, 81, 80, 78, 77, 77, 76, 75, 73, 73, 71, 70, 69, 67, 66, 66, 63, 63, 61, 60,
59, 57, 56, 55, 53, 51, 50, 49, 47, 46, 44, 42, 40, 39, 38, 35, 35, 32, 30, 29,
27, 26, 24, 22, 20, 18, 17, 14, 13, 10, 8, 5, 4, 2, 0, -2, -3, -6, -9, -11, -12,
-15, -17, -20, -22, -24, -26, -28, -30, -33, -35, -36, -39, -41, -44, -46, -48,
-51, -51, -50, -51, -50, -51, -51, -50, -51, -50, -50, -51, -51, -51, -50, -51,
-50, -50, -50, -50, -50, -50, -51, -51, -51, -50, -51, -50, -50, -51, -50, -50,
-50, -50, -50, -49, -50, -50, -49, -50, -51, -49, -50, -50, -50, -51, -50, -50,
-50, -51, -50, -50, -50, -50, -50, -50, -51, -50, -50, -50, -50, -50, -50, -49,
-50, -50, -50, -49, -49, -50, -50, -49, -50, -49, -50, -50, -50, -50, -50, -49,
-49, -49, -50, -50, -50, -49, -49, -50, -50, -49, -50, -49, -49, -49, -49, -49,
-50, -49, -49, -49, -49, -49, -49, -50, -50, -50, -50, -49, -49, -49, -50, -49,
-50, -50, -50, -49, -49, -49, -49, -50, -49, -49, -49, -49, -49, -50, -49, -49,
-50, -49, -49, -49, -49, -49, -49, -50, -49, -49, -49, -49, -49, -49, -49, -49,
-48, -49, -48, -48, -49, -50, -49, -48, -48, -49, -49, -50, -49, -49, -49, -49,
-48, -49, -48, -49, -49, -48, -49, -49, -49, -48, -49, -48, -48, -49, -49, -48,
-49, -48, -48, -49, -48, -49, -48, -49, -48, -49, -48, -48, -48, -47, -44, -42,
-42, -41, -40, -38, -38, -36, -35, -34, -33, -31, -30, -28, -27, -26, -25, -25,
-23, -21, -20, -20, -19, -19, -17, -15, -14, -15, -13, -12, -11, -10, -10, -9,
-9, -7, -6, -5, -4, -4, -4, -3, -3, -1, -1, -1, 0, 0, 0, 2, 2, 2, 2, 4, 3, 3, 4,
5, 4, 5, 5, 5, 5, 5, 6, 5, 5, 5, 6, 6, 7, 6, 6, 6, 6, 5, 6, 6, 6, 5, 5, 5, 5, 4,
5, 5, 4, 4, 4, 3, 3, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, -1, -2, -1, -2, -3, -3, -4,
-4, -4, -4, -5, -6, -7, -8, -7, -7, -9, -9, -9, -11, -11, -12, -12, -13, -13,
-14, -14, -15, -15, -16, -16, -17, -18, -19, -20, -20, -21, -22, -22, -23, -23,
-24, -25, -25, -25, -27, -28, -28, -28, -29, -29, -29, -32, -31, -33, -32, -36,
-34, -54, -31, };

#endif /* AKWF_1723_512_H_ */
