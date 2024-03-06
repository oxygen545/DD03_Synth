#ifndef AKWF_1816_512_H_
#define AKWF_1816_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1816_512_NUM_CELLS 512
#define AKWF_1816_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1816_512_DATA [] =
{66, 56, 44, 51, 42, 46, 41, 45, 41, 43, 41, 43, 42, 43, 42, 43, 42, 43, 44, 43,
44, 45, 45, 45, 46, 45, 46, 47, 47, 48, 48, 49, 49, 50, 51, 51, 52, 52, 52, 54,
54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 65, 65, 67, 69, 70, 72, 73, 76, 76, 78,
81, 83, 85, 88, 91, 93, 95, 98, 102, 105, 107, 111, 114, 116, 119, 123, 125,
127, 127, 127, 127, 124, 121, 114, 106, 95, 84, 70, 55, 39, 23, 8, -7, -20, -32,
-43, -51, -58, -64, -69, -73, -76, -78, -80, -80, -81, -82, -83, -81, -82, -81,
-81, -81, -80, -79, -79, -78, -76, -76, -75, -73, -73, -72, -71, -70, -70, -68,
-68, -67, -65, -64, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -54,
-53, -51, -51, -50, -49, -47, -47, -45, -45, -44, -43, -42, -41, -41, -40, -39,
-38, -37, -37, -36, -35, -34, -34, -34, -36, -36, -38, -38, -38, -39, -41, -42,
-43, -44, -45, -46, -47, -48, -49, -50, -51, -53, -53, -55, -56, -57, -58, -61,
-60, -61, -64, -64, -66, -67, -68, -69, -70, -70, -71, -72, -74, -75, -75, -76,
-77, -77, -78, -78, -79, -79, -80, -79, -80, -80, -79, -80, -80, -79, -80, -79,
-79, -78, -78, -77, -75, -75, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66,
-64, -63, -61, -60, -58, -57, -55, -53, -53, -50, -45, -43, -40, -37, -34, -31,
-26, -24, -19, -15, -12, -8, -4, -1, 3, 7, 10, 14, 16, 20, 25, 28, 30, 33, 35,
38, 41, 43, 46, 48, 49, 51, 52, 54, 55, 57, 58, 59, 59, 60, 60, 61, 60, 61, 60,
60, 59, 59, 58, 58, 57, 56, 55, 54, 53, 52, 50, 49, 46, 45, 44, 42, 40, 39, 38,
36, 33, 31, 31, 28, 27, 25, 24, 22, 21, 20, 18, 18, 17, 15, 14, 14, 12, 13, 12,
12, 12, 12, 12, 12, 14, 13, 14, 16, 17, 19, 20, 22, 24, 25, 27, 30, 33, 35, 38,
41, 43, 46, 49, 53, 56, 59, 63, 66, 69, 72, 76, 79, 82, 85, 88, 90, 92, 96, 97,
100, 101, 104, 105, 107, 109, 110, 112, 113, 114, 115, 115, 116, 117, 117, 118,
118, 119, 120, 119, 119, 119, 119, 118, 118, 117, 118, 116, 114, 115, 113, 112,
110, 108, 107, 104, 101, 97, 95, 91, 87, 81, 76, 71, 64, 57, 49, 41, 34, 25, 16,
6, -1, -10, -19, -27, -35, -43, -49, -55, -61, -65, -70, -73, -76, -77, -80,
-81, -81, -82, -82, -82, -82, -81, -81, -80, -79, -79, -79, -77, -75, -75, -74,
-74, -73, -72, -71, -71, -70, -69, -69, -68, -68, -67, -67, -67, -66, -66, -67,
-66, -65, -66, -67, -67, -66, -66, -67, -68, -68, -69, -68, -70, -70, -71, -70,
-72, -72, -73, -73, -74, -75, -76, -77, -77, -78, -79, -80, -79, -81, -80, -82,
-79, -82, -77, -82, -74, -87, -51, };

#endif /* AKWF_1816_512_H_ */