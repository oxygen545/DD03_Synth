#ifndef AKWF_1105_512_H_
#define AKWF_1105_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1105_512_NUM_CELLS 512
#define AKWF_1105_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1105_512_DATA [] = {1,
2, 2, 4, 3, 6, 6, 8, 9, 11, 12, 13, 15, 17, 19, 22, 24, 26, 28, 30, 32, 34, 37,
39, 42, 44, 47, 50, 52, 54, 57, 60, 62, 65, 67, 70, 73, 75, 77, 80, 82, 85, 88,
89, 92, 95, 97, 99, 101, 103, 105, 106, 109, 111, 113, 115, 116, 117, 118, 119,
121, 122, 123, 123, 123, 125, 125, 125, 125, 125, 125, 124, 123, 122, 121, 121,
121, 120, 119, 120, 119, 118, 118, 118, 118, 118, 117, 117, 118, 117, 117, 117,
117, 118, 118, 118, 118, 118, 118, 118, 118, 119, 118, 119, 119, 120, 119, 119,
119, 119, 118, 118, 118, 117, 117, 117, 115, 115, 114, 113, 111, 111, 109, 109,
106, 105, 103, 102, 101, 99, 97, 96, 94, 91, 90, 89, 86, 85, 82, 80, 78, 76, 75,
73, 71, 69, 67, 65, 64, 63, 61, 59, 57, 56, 55, 54, 52, 51, 50, 48, 48, 48, 47,
46, 44, 44, 44, 43, 44, 43, 41, 42, 42, 42, 42, 41, 42, 42, 42, 42, 42, 41, 42,
42, 41, 42, 41, 41, 40, 40, 39, 39, 39, 38, 37, 36, 36, 34, 34, 32, 32, 31, 29,
28, 26, 25, 23, 22, 21, 20, 18, 16, 16, 15, 14, 12, 11, 11, 10, 10, 8, 8, 8, 7,
7, 6, 5, 6, 6, 5, 5, 5, 5, 4, 3, 4, 3, 2, 1, 0, 0, -1, -1, -3, -3, -5, -6, -7,
-9, -10, -12, -14, -14, -16, -18, -19, -22, -23, -25, -27, -29, -31, -33, -35,
-38, -39, -41, -44, -46, -49, -51, -53, -56, -58, -60, -62, -65, -67, -68, -72,
-74, -76, -79, -80, -83, -85, -87, -89, -92, -94, -95, -98, -100, -102, -104,
-106, -108, -108, -111, -112, -113, -114, -116, -117, -118, -120, -120, -121,
-122, -123, -124, -125, -126, -126, -127, -127, -127, -128, -128, -128, -128,
-128, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -127, -126, -126, -126, -125, -124, -124, -123, -123, -121, -121,
-119, -117, -117, -115, -114, -113, -112, -109, -108, -106, -105, -103, -101,
-101, -99, -96, -95, -94, -92, -90, -88, -86, -86, -84, -82, -80, -78, -77, -74,
-73, -72, -70, -68, -67, -65, -63, -62, -60, -59, -57, -55, -54, -52, -50, -49,
-47, -45, -45, -42, -41, -39, -38, -37, -36, -34, -33, -32, -31, -30, -29, -28,
-27, -25, -25, -24, -22, -22, -22, -21, -21, -20, -20, -20, -19, -20, -19, -19,
-19, -20, -20, -20, -20, -21, -21, -21, -22, -22, -22, -23, -24, -24, -25, -25,
-26, -26, -26, -27, -27, -28, -28, -28, -29, -29, -30, -31, -32, -32, -34, -34,
-34, -36, -37, -37, -38, -39, -40, -41, -41, -42, -43, -42, -43, -43, -42, -41,
-41, -40, -38, -38, -37, -36, -34, -33, -31, -30, -28, -27, -25, -24, -22, -20,
-19, -18, -16, -15, -13, -13, -11, -11, -10, -9, -8, -7, -6, -6, -5, -4, -4, -3,
-3, -3, -2, -2, 0, 0, };

#endif /* AKWF_1105_512_H_ */
