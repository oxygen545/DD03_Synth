#ifndef AKWF_1855_512_H_
#define AKWF_1855_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1855_512_NUM_CELLS 512
#define AKWF_1855_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1855_512_DATA [] = {1,
2, 4, 6, 7, 9, 11, 12, 14, 15, 16, 18, 20, 21, 23, 24, 26, 27, 28, 29, 31, 31,
33, 34, 34, 36, 38, 38, 39, 41, 41, 42, 44, 45, 45, 46, 47, 49, 50, 50, 51, 52,
53, 53, 54, 56, 57, 57, 58, 59, 59, 60, 61, 62, 63, 63, 65, 64, 65, 66, 66, 67,
68, 69, 68, 70, 71, 71, 72, 72, 73, 73, 75, 75, 75, 76, 76, 77, 78, 78, 79, 78,
79, 80, 81, 81, 82, 82, 83, 83, 83, 83, 84, 85, 85, 85, 86, 87, 88, 88, 88, 89,
89, 90, 90, 91, 91, 91, 92, 92, 93, 93, 93, 93, 93, 94, 95, 95, 95, 96, 96, 96,
97, 98, 97, 99, 99, 99, 99, 99, 100, 101, 101, 100, 102, 102, 103, 103, 102,
102, 103, 104, 103, 104, 104, 106, 106, 106, 107, 106, 106, 107, 108, 108, 109,
108, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 112, 112, 112, 112, 113,
113, 113, 113, 114, 114, 114, 114, 115, 116, 116, 115, 116, 116, 116, 117, 117,
117, 118, 118, 118, 118, 119, 119, 119, 119, 119, 120, 120, 120, 121, 121, 121,
121, 121, 122, 122, 123, 123, 123, 122, 122, 123, 123, 124, 124, 124, 124, 125,
125, 125, 125, 126, 125, 125, 126, 127, 126, 127, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 123, 116, 102, 88, 76, 65, 55, 46, 36, 27, 18, 10,
3, -4, -10, -17, -23, -28, -33, -38, -44, -48, -53, -57, -60, -64, -67, -71,
-74, -76, -78, -81, -84, -87, -89, -90, -92, -95, -96, -97, -99, -100, -101,
-103, -103, -105, -106, -106, -108, -108, -109, -110, -110, -111, -111, -111,
-112, -113, -112, -113, -113, -114, -114, -114, -114, -115, -115, -115, -115,
-115, -115, -114, -114, -114, -114, -114, -114, -115, -114, -114, -115, -114,
-114, -114, -113, -114, -113, -114, -112, -112, -112, -112, -112, -111, -111,
-111, -111, -110, -109, -111, -109, -109, -109, -109, -108, -109, -108, -107,
-108, -107, -106, -107, -106, -105, -105, -105, -105, -104, -103, -104, -103,
-103, -102, -102, -102, -102, -101, -101, -100, -100, -100, -99, -99, -99, -98,
-98, -98, -97, -97, -96, -96, -95, -94, -95, -94, -94, -93, -92, -92, -92, -92,
-92, -91, -91, -91, -90, -89, -89, -89, -88, -88, -87, -88, -87, -87, -85, -85,
-85, -85, -84, -83, -83, -82, -82, -81, -82, -81, -79, -80, -80, -78, -78, -77,
-78, -78, -76, -77, -75, -74, -74, -74, -73, -73, -72, -72, -72, -71, -70, -70,
-70, -69, -69, -67, -67, -67, -66, -66, -65, -65, -63, -63, -63, -62, -61, -60,
-60, -60, -59, -59, -58, -58, -57, -55, -55, -54, -54, -53, -52, -52, -51, -50,
-49, -49, -48, -47, -47, -46, -45, -45, -43, -42, -42, -41, -40, -39, -39, -38,
-36, -36, -35, -34, -32, -32, -29, -28, -27, -26, -24, -23, -20, -19, -17, -15,
-13, -11, -9, -7, -6, -4, -1, -1, };

#endif /* AKWF_1855_512_H_ */
