#ifndef AKWF_2004_512_H_
#define AKWF_2004_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_2004_512_NUM_CELLS 512
#define AKWF_2004_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_2004_512_DATA [] = {1,
2, 6, 7, 10, 11, 13, 16, 17, 20, 22, 24, 27, 28, 31, 32, 34, 36, 38, 40, 42, 44,
46, 47, 49, 52, 53, 55, 57, 60, 60, 63, 65, 66, 67, 69, 72, 73, 75, 76, 78, 80,
82, 83, 85, 87, 89, 90, 92, 94, 96, 97, 99, 101, 101, 104, 105, 106, 109, 110,
112, 113, 114, 115, 118, 117, 119, 120, 122, 122, 123, 124, 125, 125, 125, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 125, 124, 123, 123,
122, 121, 119, 118, 116, 115, 113, 111, 109, 107, 105, 103, 100, 97, 96, 93, 90,
87, 84, 82, 79, 76, 74, 70, 67, 64, 61, 58, 55, 52, 49, 46, 42, 40, 37, 34, 30,
28, 26, 23, 19, 17, 15, 11, 9, 7, 5, 2, 0, -1, -4, -6, -8, -10, -11, -13, -14,
-15, -16, -19, -20, -21, -22, -23, -25, -25, -25, -26, -26, -29, -29, -30, -30,
-30, -31, -31, -32, -31, -32, -32, -33, -32, -33, -33, -33, -34, -34, -34, -34,
-33, -33, -33, -33, -34, -33, -33, -33, -34, -33, -33, -34, -33, -34, -34, -33,
-33, -34, -34, -33, -33, -34, -33, -33, -33, -32, -33, -33, -32, -32, -32, -32,
-32, -32, -32, -31, -31, -30, -30, -30, -30, -30, -30, -30, -29, -29, -29, -29,
-28, -29, -27, -28, -27, -28, -27, -27, -27, -26, -26, -26, -27, -26, -27, -26,
-26, -26, -26, -26, -26, -25, -25, -26, -25, -25, -27, -27, -26, -26, -27, -27,
-27, -27, -28, -28, -28, -28, -29, -29, -29, -28, -30, -29, -30, -30, -30, -29,
-29, -29, -29, -29, -28, -29, -28, -27, -28, -26, -27, -26, -25, -25, -24, -24,
-23, -21, -20, -19, -18, -18, -16, -15, -13, -11, -10, -8, -6, -5, -3, -2, 1, 2,
4, 7, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 33, 34, 36, 39, 39, 41, 43,
45, 47, 47, 49, 51, 51, 53, 54, 55, 54, 56, 57, 57, 58, 57, 58, 58, 58, 58, 58,
57, 56, 56, 56, 54, 54, 54, 52, 52, 50, 49, 47, 46, 45, 43, 42, 40, 39, 37, 35,
33, 32, 30, 27, 26, 23, 22, 19, 17, 15, 12, 10, 7, 5, 2, 0, -2, -4, -7, -10,
-12, -15, -16, -19, -21, -23, -26, -28, -31, -33, -35, -38, -41, -43, -45, -48,
-51, -53, -56, -59, -61, -63, -66, -68, -71, -74, -77, -78, -81, -83, -86, -88,
-91, -93, -95, -97, -99, -102, -103, -105, -108, -109, -111, -112, -113, -115,
-116, -118, -119, -119, -121, -122, -122, -123, -123, -123, -124, -123, -124,
-124, -124, -123, -123, -121, -121, -121, -120, -118, -118, -117, -115, -114,
-113, -111, -108, -107, -105, -103, -101, -99, -97, -95, -93, -91, -88, -86,
-83, -81, -78, -77, -73, -70, -68, -64, -62, -60, -58, -55, -52, -50, -47, -44,
-41, -39, -36, -34, -32, -29, -26, -24, -21, -19, -17, -15, -12, -11, -8, -5,
-3, -1, };

#endif /* AKWF_2004_512_H_ */