#ifndef AKWF_1111_512_H_
#define AKWF_1111_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1111_512_NUM_CELLS 512
#define AKWF_1111_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1111_512_DATA [] = {0,
2, 5, 8, 9, 11, 13, 15, 16, 19, 20, 22, 25, 27, 29, 31, 33, 35, 36, 38, 39, 40,
42, 43, 44, 44, 45, 46, 47, 49, 50, 51, 53, 54, 56, 57, 58, 58, 59, 60, 60, 62,
64, 66, 67, 69, 71, 72, 74, 75, 77, 79, 81, 82, 84, 85, 87, 88, 90, 91, 92, 93,
95, 96, 97, 99, 100, 101, 102, 103, 104, 104, 105, 106, 107, 108, 109, 109, 110,
111, 112, 111, 113, 113, 114, 114, 114, 116, 117, 118, 119, 119, 120, 120, 122,
122, 123, 124, 125, 125, 125, 126, 126, 126, 126, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 124, 125, 124, 123,
121, 121, 120, 120, 119, 118, 116, 116, 116, 114, 113, 112, 113, 111, 110, 109,
109, 107, 106, 105, 103, 102, 100, 99, 98, 96, 97, 96, 95, 94, 95, 94, 94, 93,
94, 93, 93, 93, 91, 92, 91, 91, 91, 91, 91, 90, 91, 91, 90, 90, 90, 89, 88, 87,
86, 86, 86, 84, 84, 83, 83, 82, 83, 81, 81, 80, 80, 80, 79, 78, 78, 78, 78, 77,
77, 76, 74, 73, 72, 70, 69, 68, 67, 66, 65, 64, 63, 61, 60, 59, 58, 56, 55, 53,
52, 50, 48, 46, 45, 43, 41, 38, 36, 34, 31, 30, 27, 25, 23, 21, 19, 17, 15, 13,
11, 10, 6, 1, -1, -3, -6, -7, -10, -12, -13, -14, -15, -16, -16, -18, -19, -19,
-20, -21, -22, -25, -26, -25, -28, -28, -30, -30, -31, -32, -33, -35, -36, -37,
-39, -40, -42, -43, -45, -47, -47, -49, -49, -50, -51, -51, -52, -53, -55, -56,
-57, -58, -58, -59, -60, -62, -63, -63, -64, -64, -65, -66, -66, -67, -69, -70,
-71, -72, -72, -73, -74, -76, -76, -78, -79, -81, -83, -84, -86, -87, -90, -91,
-92, -94, -94, -96, -96, -96, -98, -99, -101, -102, -103, -105, -105, -106,
-106, -107, -107, -108, -109, -109, -110, -110, -110, -111, -112, -113, -114,
-114, -114, -115, -115, -116, -117, -116, -116, -118, -119, -120, -121, -122,
-123, -123, -124, -124, -124, -124, -123, -123, -123, -123, -122, -122, -121,
-122, -122, -121, -122, -122, -121, -121, -121, -120, -120, -118, -118, -118,
-118, -116, -115, -114, -114, -113, -111, -111, -109, -108, -108, -107, -107,
-107, -106, -105, -105, -104, -104, -103, -103, -102, -101, -100, -100, -98,
-98, -96, -96, -96, -95, -95, -95, -95, -95, -94, -95, -94, -94, -94, -93, -92,
-92, -93, -92, -92, -91, -91, -90, -90, -90, -88, -88, -87, -86, -86, -85, -85,
-84, -82, -81, -80, -79, -77, -76, -75, -74, -73, -73, -73, -72, -73, -72, -71,
-71, -70, -70, -69, -69, -67, -67, -66, -65, -63, -62, -61, -59, -57, -55, -53,
-52, -50, -47, -46, -44, -43, -40, -38, -37, -36, -33, -32, -31, -29, -27, -25,
-25, -23, -22, -20, -20, -18, -17, -15, -15, -14, -13, -12, -12, -10, -7, -3, 0,
};

#endif /* AKWF_1111_512_H_ */
