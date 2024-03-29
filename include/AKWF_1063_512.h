#ifndef AKWF_1063_512_H_
#define AKWF_1063_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1063_512_NUM_CELLS 512
#define AKWF_1063_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1063_512_DATA [] =
{47, 127, 121, 125, 123, 124, 124, 125, 126, 126, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 124, 125, 125,
123, 123, 122, 122, 121, 121, 119, 120, 118, 118, 117, 116, 115, 114, 113, 113,
112, 111, 110, 108, 108, 107, 106, 104, 104, 103, 101, 101, 99, 97, 96, 95, 94,
93, 92, 90, 90, 87, 86, 85, 83, 82, 81, 79, 78, 77, 75, 74, 73, 71, 69, 68, 66,
65, 64, 62, 61, 59, 57, 56, 55, 54, 51, 50, 49, 47, 45, 45, 43, 42, 40, 39, 38,
36, 34, 34, 33, 31, 29, 29, 27, 26, 24, 24, 22, 21, 20, 19, 18, 17, 15, 15, 14,
13, 12, 11, 11, 9, 8, 8, 7, 7, 6, 6, 5, 4, 3, 4, 3, 2, 2, 1, 1, 1, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
0, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, -1,
0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0,
-1, 0, -1, 0, 1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0,
1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0,
0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0,
0, 0, 0, 0, 1, 0, -1, 0, 0, 1, -1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, -1, -1, 1, 1,
0, 1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -2, -2, -2, -2, -1, -3, -2, -3, -3, -4, -4,
-4, -4, -4, -5, -6, -7, -6, -6, -8, -8, -9, -9, -10, -10, -11, -11, -13, -13,
-14, -15, -15, -17, -16, -17, -18, -19, -20, -20, -21, -23, -24, -25, -26, -27,
-27, -29, -29, -30, -31, -32, -33, -34, -34, -37, -37, -38, -39, -40, -43, -43,
-45, -46, -46, -47, -48, -50, -51, -52, -53, -55, -56, -57, -58, -60, -61, -62,
-63, -64, -65, -66, -68, -69, -70, -71, -72, -74, -74, -76, -77, -78, -80, -80,
-81, -83, -83, -85, -85, -86, -88, -88, -90, -91, -91, -93, -93, -94, -95, -97,
-97, -98, -98, -99, -100, -101, -102, -103, -104, -104, -105, -105, -105, -105,
-107, -107, -108, -109, -109, -109, -110, -110, -111, -111, -111, -112, -112,
-112, -111, -112, -112, -113, -112, -113, -112, -112, -43, };

#endif /* AKWF_1063_512_H_ */
