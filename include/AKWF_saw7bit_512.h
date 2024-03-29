#ifndef AKWF_saw7bit_512_H_
#define AKWF_saw7bit_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_saw7bit_512_NUM_CELLS 512
#define AKWF_saw7bit_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_saw7bit_512_DATA [] =
{3, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 8, 9, 9, 9, 9, 9, 9, 9, 9, 8, 11, 14, 14, 14,
14, 14, 14, 13, 13, 14, 14, 17, 19, 19, 20, 19, 20, 19, 19, 19, 20, 24, 24, 24,
24, 25, 24, 25, 25, 24, 24, 25, 29, 29, 29, 30, 29, 29, 29, 29, 30, 30, 34, 35,
34, 35, 34, 35, 34, 34, 35, 33, 37, 41, 40, 39, 39, 40, 40, 39, 40, 40, 41, 45,
45, 44, 46, 44, 44, 45, 45, 45, 45, 50, 50, 50, 50, 50, 50, 49, 50, 49, 50, 50,
51, 56, 55, 56, 55, 55, 55, 55, 55, 54, 59, 61, 60, 60, 60, 60, 60, 60, 60, 59,
63, 66, 65, 65, 66, 64, 65, 65, 66, 64, 67, 72, 70, 70, 71, 70, 70, 72, 70, 70,
70, 72, 76, 75, 76, 76, 75, 76, 76, 75, 76, 75, 81, 81, 80, 81, 81, 81, 80, 81,
81, 81, 85, 87, 86, 86, 85, 86, 85, 86, 86, 85, 88, 91, 90, 91, 90, 90, 90, 91,
90, 92, 90, 93, 96, 96, 96, 95, 96, 95, 96, 96, 96, 96, 101, 102, 101, 101, 100,
101, 100, 101, 101, 101, 106, 106, 106, 106, 106, 106, 105, 105, 106, 105, 110,
111, 112, 111, 111, 111, 112, 110, 111, 110, 114, 117, 116, 117, 116, 117, 116,
116, 116, 117, 113, 120, 120, 122, 120, 123, 117, 125, 116, 126, 115, 127, 119,
127, 116, 127, 88, -128, -124, -128, -128, -127, -128, -120, -126, -120, -125,
-120, -126, -120, -125, -120, -125, -116, -119, -117, -119, -117, -119, -118,
-118, -117, -118, -118, -112, -112, -112, -112, -112, -113, -112, -113, -112,
-114, -109, -107, -107, -107, -107, -108, -106, -107, -107, -107, -105, -102,
-101, -102, -101, -102, -102, -102, -102, -102, -101, -96, -97, -96, -96, -97,
-97, -96, -97, -97, -97, -92, -91, -91, -91, -92, -91, -91, -91, -91, -91, -92,
-87, -86, -86, -86, -86, -86, -85, -86, -85, -86, -82, -80, -81, -80, -80, -80,
-80, -80, -81, -82, -79, -75, -76, -76, -75, -75, -76, -75, -76, -76, -74, -70,
-71, -70, -71, -70, -70, -69, -70, -69, -70, -69, -65, -65, -65, -64, -64, -65,
-65, -65, -64, -65, -60, -59, -60, -59, -60, -60, -58, -60, -59, -60, -56, -54,
-55, -54, -54, -54, -55, -54, -54, -54, -55, -51, -48, -49, -48, -49, -48, -49,
-50, -49, -49, -48, -42, -44, -43, -44, -43, -43, -43, -44, -44, -43, -39, -37,
-38, -39, -39, -38, -38, -38, -38, -38, -34, -33, -33, -33, -34, -32, -33, -32,
-33, -33, -30, -27, -28, -28, -27, -28, -28, -27, -28, -28, -26, -22, -23, -22,
-23, -23, -22, -23, -23, -22, -23, -22, -18, -18, -18, -17, -16, -18, -17, -18,
-17, -17, -16, -11, -12, -11, -13, -12, -12, -12, -12, -13, -9, -7, -7, -6, -7,
-7, -6, -7, -7, -7, -4, -1, -2, -2, -2, -1, -1, -1, -1, -2, -1, };

#endif /* AKWF_saw7bit_512_H_ */
