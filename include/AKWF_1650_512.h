#ifndef AKWF_1650_512_H_
#define AKWF_1650_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1650_512_NUM_CELLS 512
#define AKWF_1650_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1650_512_DATA [] = {1,
4, 8, 12, 15, 18, 21, 25, 28, 32, 34, 37, 40, 43, 45, 47, 49, 51, 53, 55, 57,
58, 60, 61, 62, 63, 65, 66, 66, 68, 69, 69, 69, 70, 71, 71, 72, 72, 72, 73, 73,
74, 75, 74, 74, 74, 75, 74, 75, 73, 74, 73, 73, 74, 75, 74, 75, 74, 74, 73, 74,
73, 73, 73, 72, 72, 72, 71, 72, 72, 72, 71, 71, 71, 71, 72, 71, 71, 70, 70, 71,
70, 71, 71, 70, 71, 71, 71, 71, 70, 72, 71, 71, 71, 71, 71, 71, 72, 72, 72, 72,
73, 73, 73, 72, 73, 74, 73, 73, 73, 74, 74, 74, 74, 73, 74, 74, 73, 73, 73, 73,
73, 73, 71, 71, 71, 70, 70, 69, 68, 67, 67, 66, 66, 65, 63, 63, 62, 60, 60, 57,
56, 54, 54, 51, 49, 47, 45, 42, 39, 36, 35, 31, 28, 25, 20, 18, 14, 10, 6, 4, 0,
-4, -7, -11, -15, -18, -22, -24, -27, -30, -33, -35, -38, -40, -42, -43, -44,
-46, -47, -47, -48, -49, -49, -49, -48, -49, -48, -48, -47, -46, -46, -45, -43,
-43, -41, -40, -40, -38, -37, -37, -36, -35, -34, -33, -32, -32, -30, -30, -28,
-27, -27, -26, -26, -24, -24, -22, -22, -20, -18, -17, -16, -15, -13, -12, -9,
-8, -6, -3, -2, 1, 3, 6, 8, 11, 15, 16, 19, 23, 25, 29, 31, 34, 39, 41, 43, 48,
50, 53, 56, 59, 61, 64, 65, 68, 70, 72, 73, 73, 73, 74, 73, 74, 74, 74, 74, 73,
73, 74, 73, 73, 73, 73, 73, 74, 74, 74, 74, 73, 73, 74, 73, 73, 73, 70, 66, 61,
56, 51, 46, 41, 35, 29, 23, 17, 10, 4, -3, -10, -16, -23, -29, -35, -42, -48,
-54, -59, -64, -70, -74, -79, -84, -88, -92, -96, -100, -103, -105, -109, -112,
-114, -116, -118, -121, -122, -123, -125, -126, -127, -127, -127, -128, -128,
-128, -127, -126, -126, -125, -124, -123, -121, -119, -117, -114, -112, -110,
-108, -104, -101, -98, -96, -92, -88, -86, -82, -78, -75, -72, -69, -66, -63,
-60, -58, -55, -53, -51, -50, -47, -45, -44, -42, -40, -39, -38, -38, -36, -35,
-35, -35, -34, -32, -32, -32, -32, -31, -31, -31, -31, -31, -30, -30, -31, -31,
-30, -30, -31, -31, -31, -31, -32, -32, -32, -32, -33, -33, -34, -34, -35, -35,
-36, -36, -36, -37, -38, -38, -38, -39, -39, -39, -38, -40, -39, -40, -39, -41,
-39, -40, -40, -39, -40, -39, -38, -39, -38, -39, -38, -38, -38, -37, -38, -37,
-37, -36, -36, -36, -36, -36, -36, -36, -36, -34, -34, -34, -35, -33, -33, -33,
-33, -33, -32, -33, -32, -32, -31, -32, -31, -31, -31, -31, -32, -31, -31, -32,
-32, -33, -33, -33, -34, -35, -35, -36, -36, -38, -38, -39, -39, -40, -40, -41,
-41, -40, -40, -41, -39, -39, -39, -37, -36, -36, -33, -31, -30, -27, -25, -22,
-20, -17, -15, -11, -8, -4, 0, };

#endif /* AKWF_1650_512_H_ */
