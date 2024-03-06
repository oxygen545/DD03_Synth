#ifndef AKWF_1346_512_H_
#define AKWF_1346_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1346_512_NUM_CELLS 512
#define AKWF_1346_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1346_512_DATA [] =
{13, -75, -128, -122, -114, -94, -81, -62, -48, -32, -20, -7, 3, 14, 23, 33, 39,
47, 53, 60, 66, 71, 76, 80, 85, 89, 92, 95, 99, 101, 104, 106, 109, 110, 112,
114, 115, 116, 118, 120, 121, 122, 122, 123, 124, 125, 125, 126, 126, 127, 126,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,
126, 126, 125, 124, 125, 124, 124, 122, 122, 123, 121, 121, 121, 119, 119, 118,
118, 118, 118, 117, 116, 115, 115, 114, 113, 113, 112, 111, 110, 110, 109, 109,
108, 108, 106, 105, 105, 104, 104, 103, 102, 102, 101, 101, 100, 98, 98, 97, 96,
95, 94, 95, 93, 93, 92, 91, 91, 89, 89, 88, 88, 86, 87, 86, 85, 84, 83, 82, 81,
82, 80, 80, 79, 78, 78, 76, 76, 75, 74, 74, 74, 72, 72, 71, 70, 70, 68, 68, 68,
67, 66, 66, 64, 65, 63, 62, 63, 62, 60, 60, 59, 59, 58, 56, 57, 56, 55, 54, 53,
53, 53, 52, 51, 51, 50, 49, 48, 47, 48, 46, 46, 45, 45, 44, 43, 43, 43, 41, 41,
40, 40, 40, 39, 37, 38, 36, 35, 36, 35, 34, 34, 33, 33, 31, 31, 31, 30, 30, 29,
28, 28, 27, 27, 27, 26, 25, 24, 24, 23, 23, 22, 22, 21, 21, 21, 20, 18, 19, 18,
18, 17, 16, 15, 15, 15, 13, 14, 13, 13, 11, 11, 10, 11, 10, 9, 9, 9, 9, 7, 6, 7,
6, 5, 5, 4, 4, 4, 3, 2, 2, 1, 2, 0, 1, -1, -1, -1, -3, -3, -3, -2, -3, -4, -4,
-6, -6, -6, -6, -8, -8, -8, -8, -9, -9, -10, -10, -10, -11, -11, -11, -12, -12,
-13, -13, -14, -14, -15, -15, -15, -16, -16, -17, -17, -17, -18, -19, -19, -19,
-19, -21, -21, -21, -21, -22, -22, -23, -23, -23, -23, -24, -24, -25, -25, -26,
-26, -26, -26, -28, -27, -28, -28, -29, -29, -29, -29, -30, -31, -32, -32, -31,
-31, -31, -33, -33, -33, -33, -35, -34, -35, -35, -35, -36, -37, -37, -36, -37,
-37, -37, -38, -38, -38, -39, -40, -39, -40, -40, -41, -41, -41, -41, -42, -42,
-43, -43, -42, -43, -44, -44, -44, -45, -44, -46, -45, -46, -47, -47, -47, -48,
-48, -48, -48, -48, -49, -49, -50, -50, -51, -50, -51, -51, -52, -52, -52, -52,
-52, -52, -52, -53, -54, -54, -54, -54, -55, -54, -55, -56, -55, -56, -56, -56,
-56, -57, -56, -58, -57, -58, -59, -58, -59, -59, -60, -59, -59, -60, -61, -61,
-61, -61, -61, -61, -62, -62, -62, -63, -63, -63, -64, -64, -64, -65, -64, -64,
-65, -65, -65, -65, -65, -66, -66, -66, -67, -67, -67, -67, -67, -68, -69, -69,
-68, -69, -69, -69, -70, -69, -69, -69, -71, -71, -70, -71, -72, -71, -72, -71,
-72, -72, -72, -73, -72, -74, -73, -74, -73, -74, -74, -76, -74, -76, -73, -77,
-73, -80, -72, -84, -50, };

#endif /* AKWF_1346_512_H_ */