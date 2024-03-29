#ifndef AKWF_1282_512_H_
#define AKWF_1282_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1282_512_NUM_CELLS 512
#define AKWF_1282_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1282_512_DATA [] = {1,
3, 6, 8, 10, 13, 15, 16, 18, 20, 21, 24, 25, 27, 29, 30, 32, 33, 35, 36, 37, 39,
40, 42, 43, 45, 46, 48, 49, 50, 51, 54, 54, 55, 57, 58, 60, 61, 62, 63, 64, 66,
67, 68, 69, 70, 72, 72, 74, 75, 76, 78, 79, 79, 81, 81, 82, 83, 84, 85, 85, 86,
87, 88, 88, 88, 87, 87, 88, 87, 86, 85, 84, 82, 81, 78, 76, 74, 72, 70, 69, 67,
65, 64, 63, 63, 61, 61, 61, 61, 61, 60, 62, 61, 62, 61, 62, 62, 63, 64, 64, 64,
65, 65, 66, 67, 67, 68, 68, 69, 69, 69, 69, 71, 71, 72, 72, 73, 72, 73, 73, 74,
74, 74, 75, 74, 75, 76, 76, 77, 77, 78, 77, 77, 78, 79, 78, 78, 79, 80, 79, 80,
80, 80, 81, 81, 82, 82, 82, 83, 84, 85, 87, 87, 89, 90, 92, 94, 97, 99, 102,
104, 106, 110, 113, 114, 117, 120, 121, 123, 125, 125, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 125, 125, 124, 123, 123, 123,
121, 120, 120, 119, 118, 118, 117, 117, 116, 114, 113, 112, 111, 111, 110, 109,
108, 107, 106, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 92, 92, 90, 89, 88,
86, 85, 83, 81, 80, 79, 76, 75, 72, 70, 68, 66, 63, 60, 57, 53, 50, 46, 42, 37,
33, 28, 23, 19, 16, 12, 9, 5, 2, -1, -4, -6, -9, -11, -12, -16, -17, -19, -20,
-22, -24, -26, -27, -28, -30, -33, -33, -35, -37, -37, -39, -40, -43, -44, -45,
-46, -47, -49, -51, -52, -53, -54, -57, -58, -58, -60, -61, -62, -63, -65, -66,
-67, -69, -70, -71, -73, -73, -74, -75, -77, -78, -79, -80, -81, -82, -83, -84,
-84, -85, -86, -86, -87, -88, -88, -88, -88, -88, -87, -87, -87, -85, -84, -82,
-81, -79, -76, -74, -71, -70, -69, -67, -65, -64, -63, -62, -61, -61, -61, -60,
-61, -60, -61, -62, -61, -62, -62, -63, -63, -63, -64, -65, -65, -65, -66, -67,
-67, -69, -68, -69, -69, -70, -70, -71, -71, -71, -72, -72, -72, -74, -73, -74,
-75, -74, -74, -75, -76, -77, -76, -77, -77, -77, -77, -78, -78, -78, -79, -79,
-79, -79, -80, -81, -80, -80, -82, -81, -82, -82, -83, -84, -85, -86, -87, -88,
-88, -91, -93, -95, -96, -99, -101, -105, -108, -111, -113, -115, -117, -119,
-122, -123, -125, -126, -126, -128, -127, -127, -128, -128, -128, -128, -128,
-127, -128, -127, -126, -126, -125, -125, -124, -124, -123, -122, -122, -122,
-121, -120, -118, -118, -118, -116, -116, -114, -115, -113, -113, -111, -110,
-110, -109, -107, -106, -105, -105, -103, -103, -101, -100, -99, -98, -97, -95,
-94, -94, -91, -90, -88, -88, -86, -85, -83, -82, -80, -78, -76, -75, -72, -70,
-68, -65, -62, -59, -55, -53, -49, -44, -41, -36, -31, -28, -23, -19, -15, -11,
-7, -4, -1, };

#endif /* AKWF_1282_512_H_ */
