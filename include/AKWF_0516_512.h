#ifndef AKWF_0516_512_H_
#define AKWF_0516_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0516_512_NUM_CELLS 512
#define AKWF_0516_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0516_512_DATA [] =
{10, 29, 46, 64, 75, 82, 88, 89, 87, 83, 76, 67, 60, 51, 44, 36, 30, 23, 21, 16,
15, 13, 14, 13, 15, 10, 2, 5, -7, -12, -16, -14, -10, -8, -2, 2, -6, -23, -38,
-58, -77, -95, -108, -118, -125, -128, -125, -121, -110, -98, -86, -71, -56,
-42, -27, -14, -2, 8, 18, 28, 36, 44, 51, 57, 63, 68, 72, 73, 67, 60, 49, 36,
21, 14, 16, 16, 19, 25, 31, 36, 42, 45, 48, 48, 46, 46, 42, 37, 33, 30, 27, 25,
22, 22, 22, 22, 23, 23, 24, 25, 28, 27, 26, 26, 24, 21, 20, 18, 16, 14, 14, 14,
15, 16, 18, 21, 24, 28, 31, 35, 38, 42, 45, 47, 48, 49, 49, 48, 48, 47, 46, 45,
45, 43, 43, 42, 41, 40, 40, 40, 38, 38, 37, 38, 38, 37, 38, 38, 39, 40, 40, 42,
44, 44, 46, 50, 55, 56, 58, 61, 61, 62, 63, 64, 63, 55, 53, 58, 56, 54, 57, 54,
52, 49, 46, 43, 41, 38, 36, 35, 33, 31, 30, 28, 27, 26, 24, 24, 22, 22, 21, 21,
20, 21, 22, 22, 21, 21, 21, 21, 22, 23, 23, 25, 25, 26, 26, 28, 28, 29, 29, 30,
31, 33, 32, 34, 35, 37, 37, 38, 38, 39, 38, 41, 45, 45, 48, 53, 56, 56, 56, 56,
59, 59, 62, 65, 66, 67, 67, 67, 68, 69, 69, 69, 68, 68, 70, 70, 70, 68, 68, 66,
65, 62, 60, 57, 54, 54, 51, 50, 48, 45, 43, 40, 38, 36, 33, 33, 31, 27, 27, 24,
22, 20, 19, 17, 18, 15, 16, 14, 15, 14, 16, 15, 15, 14, 15, 15, 17, 16, 8, 5,
-32, -37, -55, -56, -53, -68, -59, -36, -15, -21, -12, 6, 2, -3, 15, -10, -20,
-24, -34, -35, -66, -75, -81, -84, -88, -91, -71, -70, -76, -76, -81, -81, -85,
-110, -109, -106, -105, -102, -96, -69, -66, -60, -58, -29, -19, -18, -12, -12,
-6, -29, -30, -30, -31, -31, -32, -35, -37, -38, -45, -28, -18, -27, -25, -32,
-31, -34, -35, -41, -70, -68, -72, -70, -75, -69, -46, -48, -47, -45, -48, -43,
-54, -71, -64, -63, -63, -63, -63, -62, -64, -62, -38, -35, -39, -38, -42, -40,
-45, -40, -58, -75, -75, -76, -78, -78, -84, -66, -53, -60, -57, -60, -60, -62,
-62, -63, -63, -64, -63, -63, -64, -63, -62, -62, -63, -62, -62, -59, -59, -58,
-59, -67, -66, -60, -62, -62, -59, -61, -62, -62, -64, -65, -65, -67, -67, -66,
-67, -67, -67, -68, -68, -68, -65, -65, -64, -65, -65, -65, -65, -65, -66, -65,
-65, -64, -64, -64, -62, -62, -60, -60, -59, -58, -58, -56, -55, -55, -53, -53,
-52, -51, -50, -48, -47, -47, -44, -44, -43, -43, -41, -43, -40, -14, -14, -15,
-14, -15, -14, -14, -14, -14, -14, -15, -15, -14, -14, -14, -14, -14, -13, -14,
-13, -13, -13, -13, -12, -12, -12, -13, -12, -13, -8, 0, };

#endif /* AKWF_0516_512_H_ */
