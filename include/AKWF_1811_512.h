#ifndef AKWF_1811_512_H_
#define AKWF_1811_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1811_512_NUM_CELLS 512
#define AKWF_1811_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1811_512_DATA [] = {5,
7, 6, 7, 6, 6, 7, 6, 6, 5, 7, 5, 8, 2, 22, 48, 41, 45, 42, 45, 41, 45, 42, 46,
76, 76, 76, 77, 75, 78, 74, 78, 73, 96, 107, 103, 105, 105, 104, 105, 103, 107,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127,
127, 126, 127, 115, 99, 106, 99, 74, 78, 58, 36, 46, -4, -33, -24, -19, -15,
-13, -11, -12, -13, -12, -16, -18, -17, -18, -16, -23, -27, -26, -26, -26, -26,
-20, -16, -18, -17, -17, -17, -18, -18, -17, -12, -12, -12, -12, -12, -13, -12,
-12, -11, -12, -11, -12, -16, -17, -16, -16, -15, -18, -26, -23, -24, -24, -24,
-24, -24, -30, -36, -33, -36, -34, -36, -33, -37, -30, 4, 7, 3, 7, 2, 10, 41,
44, 39, 44, 39, 48, 75, 77, 73, 77, 72, 81, 103, 105, 102, 105, 101, 109, 127,
126, 127, 127, 126, 126, 126, 126, 127, 126, 127, 126, 127, 125, 127, 124, 105,
99, 107, 84, 72, 73, 41, 34, -19, -40, -26, -25, -16, -18, -14, -13, -14, -14,
-13, -19, -18, -19, -19, -17, -20, -28, -27, -27, -27, -27, -27, -26, -28, -20,
-18, -19, -17, -19, -18, -18, -19, -18, -19, -15, -13, -13, -14, -14, -13, -13,
-13, -14, -13, -12, -12, -13, -13, -13, -13, -13, -13, -14, -13, -12, -17, -17,
-17, -16, -17, -16, -17, -17, -17, -17, -17, -17, -17, -17, -16, -23, -26, -25,
-25, -24, -24, -25, -24, -25, -24, -25, -25, -25, -25, -24, -25, -24, -25, -25,
-25, -25, -25, -24, -25, -24, -25, -23, -30, -37, -35, -36, -35, -36, -35, -35,
-35, -35, -36, -36, -36, -35, -35, -35, -35, -34, -35, -36, -36, -34, -35, -35,
-35, -35, -35, -34, -36, -35, -35, -35, -35, -34, -35, -35, -35, -34, -35, -34,
-34, -35, -34, -35, -35, -35, -35, -35, -35, -35, -34, -35, -35, -35, -35, -34,
-35, -35, -34, -35, -35, -34, -35, -35, -34, -34, -34, -35, -35, -34, -35, -35,
-34, -35, -34, -35, -34, -35, -34, -36, -31, -23, -25, -24, -23, -23, -24, -24,
-23, -23, -24, -24, -24, -24, -23, -24, -23, -23, -23, -23, -24, -24, -24, -25,
-24, -24, -24, -24, -24, -24, -23, -23, -23, -24, -23, -23, -24, -24, -24, -23,
-24, -23, -23, -24, -23, -24, -23, -23, -23, -24, -24, -24, -23, -24, -23, -24,
-23, -23, -23, -24, -24, -23, -22, -15, -15, -15, -15, -15, -15, -14, -15, -15,
-15, -15, -15, -15, -14, -14, -15, -15, -14, -14, -15, -14, -16, -15, -14, -16,
-15, -14, -15, -15, -15, -14, -15, -15, -14, -14, -16, -14, -19, -24, -22, -23,
-23, -23, -22, -23, -22, -23, -23, -24, -23, -22, -22, -23, -23, -24, -23, -24,
-22, -23, -23, -23, -22, -23, -23, -23, -23, -22, -22, -22, -23, -22, -27, -35,
-32, -34, -33, -33, -33, -33, -33, -33, -35, -33, -35, -32, -35, -31, -37, -21,
};

#endif /* AKWF_1811_512_H_ */
