#ifndef AKWF_1948_512_H_
#define AKWF_1948_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1948_512_NUM_CELLS 512
#define AKWF_1948_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1948_512_DATA [] = {8,
22, 34, 47, 58, 69, 78, 88, 97, 103, 109, 114, 118, 120, 121, 120, 118, 114,
110, 103, 95, 86, 77, 66, 55, 43, 30, 17, 2, -10, -24, -37, -50, -62, -72, -82,
-92, -100, -106, -112, -115, -118, -118, -117, -115, -111, -105, -99, -90, -80,
-70, -58, -45, -32, -19, -5, 9, 23, 36, 50, 62, 73, 84, 93, 102, 108, 113, 118,
120, 120, 119, 118, 114, 109, 103, 95, 86, 77, 66, 56, 44, 32, 21, 8, -3, -15,
-26, -35, -44, -53, -59, -65, -70, -73, -75, -75, -75, -72, -69, -63, -58, -50,
-42, -33, -24, -12, -2, 9, 20, 32, 43, 54, 64, 74, 84, 92, 100, 107, 113, 116,
120, 122, 123, 122, 120, 117, 114, 108, 102, 94, 85, 77, 66, 55, 44, 34, 22, 10,
-2, -15, -26, -37, -47, -58, -67, -76, -84, -91, -97, -102, -105, -107, -108,
-108, -107, -104, -99, -95, -89, -81, -73, -65, -53, -43, -32, -20, -8, 4, 17,
29, 42, 53, 64, 75, 85, 94, 101, 108, 113, 118, 120, 122, 123, 120, 118, 113,
108, 100, 94, 84, 74, 63, 49, 37, 24, 11, -2, -17, -30, -43, -55, -67, -78, -88,
-97, -104, -110, -115, -119, -121, -121, -119, -118, -113, -108, -100, -92, -83,
-72, -61, -49, -36, -21, -8, 5, 19, 33, 46, 59, 70, 81, 91, 101, 108, 115, 121,
125, 127, 127, 127, 126, 122, 117, 111, 104, 96, 86, 75, 64, 52, 40, 26, 13, 0,
-14, -27, -38, -51, -63, -73, -84, -91, -100, -106, -112, -116, -118, -121,
-121, -118, -116, -112, -107, -101, -93, -84, -75, -64, -53, -41, -28, -16, -4,
10, 22, 35, 46, 59, 70, 80, 89, 96, 104, 110, 115, 118, 120, 121, 120, 117, 113,
107, 101, 94, 85, 75, 64, 52, 40, 27, 14, 0, -13, -27, -39, -51, -64, -76, -85,
-94, -102, -109, -114, -118, -121, -121, -122, -118, -115, -110, -103, -96, -86,
-77, -64, -53, -40, -27, -13, 0, 15, 27, 41, 55, 67, 77, 88, 97, 105, 113, 117,
121, 124, 125, 125, 123, 119, 114, 108, 101, 93, 83, 72, 60, 48, 35, 23, 9, -4,
-18, -30, -42, -54, -65, -75, -86, -93, -100, -106, -111, -114, -116, -115,
-115, -112, -108, -104, -97, -89, -81, -71, -61, -50, -39, -26, -13, -1, 12, 26,
37, 50, 61, 73, 82, 90, 100, 107, 112, 117, 121, 122, 123, 122, 119, 117, 111,
106, 98, 90, 81, 71, 59, 48, 35, 22, 10, -3, -17, -30, -42, -55, -66, -76, -86,
-95, -102, -109, -115, -120, -121, -122, -122, -121, -118, -114, -109, -103,
-94, -85, -76, -65, -54, -43, -31, -19, -7, 6, 18, 29, 40, 52, 60, 69, 77, 84,
89, 94, 96, 98, 99, 98, 96, 94, 89, 83, 76, 69, 60, 50, 41, 30, 18, 8, -5, -16,
-26, -37, -48, -59, -67, -75, -83, -90, -95, -99, -102, -104, -105, -104, -103,
-98, -95, -89, -83, -74, -66, -56, -46, -34, -23, -10, 0, };

#endif /* AKWF_1948_512_H_ */
