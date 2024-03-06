#ifndef AKWF_0425_512_H_
#define AKWF_0425_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0425_512_NUM_CELLS 512
#define AKWF_0425_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0425_512_DATA [] = {1,
16, 32, 45, 58, 69, 80, 88, 97, 103, 109, 115, 118, 121, 125, 126, 127, 127,
127, 127, 125, 123, 120, 115, 111, 106, 101, 93, 85, 75, 66, 55, 44, 32, 20, 5,
-8, -21, -33, -43, -52, -60, -67, -74, -78, -83, -86, -89, -89, -91, -90, -90,
-87, -84, -81, -77, -71, -66, -59, -51, -42, -32, -22, -11, 1, 13, 23, 34, 43,
51, 59, 66, 73, 78, 82, 85, 88, 89, 91, 90, 89, 88, 86, 82, 79, 73, 67, 59, 52,
42, 32, 19, 7, -7, -20, -34, -46, -57, -68, -77, -85, -93, -100, -106, -111,
-116, -121, -123, -125, -127, -128, -128, -127, -126, -124, -122, -118, -114,
-109, -102, -95, -87, -78, -68, -56, -44, -30, -15, 2, 17, 34, 47, 60, 70, 80,
89, 97, 104, 110, 115, 120, 122, 125, 126, 127, 127, 127, 127, 125, 122, 119,
116, 110, 106, 99, 93, 83, 75, 66, 55, 43, 31, 18, 4, -11, -22, -34, -44, -54,
-61, -68, -74, -79, -84, -87, -88, -89, -91, -90, -89, -87, -84, -81, -76, -71,
-64, -59, -50, -41, -32, -21, -10, 2, 14, 24, 35, 44, 52, 61, 67, 73, 78, 82,
86, 87, 89, 91, 90, 90, 87, 86, 82, 78, 72, 66, 58, 51, 41, 30, 19, 6, -8, -22,
-34, -47, -58, -69, -78, -87, -94, -101, -108, -112, -117, -120, -123, -126,
-127, -128, -128, -127, -126, -124, -121, -118, -114, -108, -102, -95, -87, -78,
-67, -55, -43, -28, -13, 4, 21, 34, 48, 60, 71, 81, 90, 98, 104, 110, 116, 120,
122, 125, 127, 127, 127, 127, 127, 125, 123, 119, 115, 110, 105, 98, 91, 83, 75,
64, 54, 42, 30, 17, 3, -11, -23, -35, -45, -55, -61, -70, -75, -80, -83, -88,
-88, -91, -90, -90, -89, -87, -84, -80, -76, -71, -65, -57, -49, -40, -30, -20,
-8, 3, 15, 26, 35, 45, 54, 61, 68, 73, 78, 82, 85, 88, 90, 90, 90, 89, 88, 85,
82, 78, 72, 65, 58, 50, 39, 29, 17, 3, -10, -24, -37, -48, -59, -69, -79, -88,
-95, -102, -107, -113, -118, -121, -123, -126, -128, -127, -128, -128, -127,
-124, -121, -117, -113, -108, -102, -94, -86, -76, -65, -54, -41, -26, -11, 6,
21, 36, 50, 62, 72, 82, 90, 98, 105, 111, 116, 119, 123, 125, 127, 127, 127,
127, 127, 125, 121, 119, 114, 110, 104, 98, 90, 83, 73, 63, 52, 40, 27, 15, 1,
-13, -24, -37, -46, -55, -62, -70, -75, -80, -84, -88, -88, -90, -90, -90, -89,
-87, -84, -80, -75, -70, -63, -56, -47, -39, -30, -19, -8, 4, 16, 26, 36, 47,
55, 62, 68, 74, 78, 83, 86, 88, 90, 90, 90, 90, 88, 85, 81, 77, 71, 65, 57, 49,
39, 28, 16, 2, -12, -26, -38, -50, -61, -70, -80, -88, -96, -103, -108, -113,
-118, -121, -124, -126, -127, -128, -127, -128, -126, -123, -120, -117, -112,
-107, -101, -94, -85, -75, -64, -52, -39, -25, -8, };

#endif /* AKWF_0425_512_H_ */
