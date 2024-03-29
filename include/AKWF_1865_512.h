#ifndef AKWF_1865_512_H_
#define AKWF_1865_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1865_512_NUM_CELLS 512
#define AKWF_1865_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1865_512_DATA [] = {2,
5, 9, 13, 16, 19, 23, 26, 28, 31, 34, 36, 39, 42, 44, 48, 50, 54, 56, 59, 61,
64, 67, 70, 74, 76, 79, 82, 84, 86, 89, 91, 92, 95, 96, 97, 99, 101, 101, 104,
105, 107, 107, 109, 110, 111, 112, 112, 114, 114, 115, 115, 116, 117, 118, 118,
119, 119, 120, 121, 120, 120, 122, 121, 122, 123, 123, 123, 124, 124, 124, 124,
125, 125, 126, 125, 125, 126, 126, 125, 126, 126, 126, 126, 126, 127, 127, 126,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 126, 124, 123, 123, 121, 120, 117, 116, 114, 112, 110, 109,
108, 106, 105, 102, 99, 98, 96, 94, 91, 90, 88, 87, 85, 84, 82, 79, 78, 75, 73,
71, 68, 64, 62, 59, 56, 53, 49, 44, 41, 37, 32, 28, 24, 19, 14, 10, 4, 0, -5,
-9, -15, -19, -24, -28, -32, -35, -39, -44, -48, -52, -55, -60, -63, -66, -69,
-72, -75, -76, -78, -79, -80, -82, -83, -83, -85, -86, -87, -86, -86, -86, -86,
-85, -85, -85, -85, -84, -84, -83, -82, -79, -79, -78, -77, -77, -75, -74, -73,
-73, -73, -73, -74, -74, -75, -75, -75, -75, -76, -76, -77, -77, -77, -78, -78,
-78, -78, -78, -79, -78, -78, -77, -76, -75, -75, -73, -73, -71, -70, -68, -66,
-64, -62, -61, -59, -56, -54, -51, -49, -48, -46, -44, -42, -41, -40, -38, -37,
-36, -35, -34, -34, -33, -34, -34, -34, -35, -36, -38, -39, -41, -43, -45, -49,
-51, -54, -56, -58, -63, -66, -69, -72, -75, -77, -80, -82, -84, -86, -88, -90,
-94, -94, -97, -97, -99, -101, -103, -104, -105, -106, -107, -108, -109, -110,
-111, -112, -113, -113, -114, -114, -115, -115, -117, -117, -118, -118, -119,
-119, -117, -117, -116, -116, -116, -113, -111, -111, -108, -106, -104, -101,
-100, -97, -93, -90, -87, -83, -80, -77, -74, -71, -68, -64, -62, -59, -57, -54,
-53, -49, -48, -46, -45, -43, -42, -40, -38, -37, -37, -37, -37, -37, -36, -37,
-38, -39, -40, -41, -41, -43, -43, -44, -45, -45, -46, -47, -49, -51, -52, -52,
-51, -53, -53, -53, -54, -54, -53, -53, -54, -54, -55, -54, -55, -54, -55, -55,
-56, -55, -55, -56, -56, -56, -55, -56, -56, -56, -59, -59, -60, -62, -62, -63,
-64, -65, -66, -68, -70, -71, -73, -75, -76, -77, -78, -80, -82, -81, -84, -84,
-85, -86, -87, -88, -89, -90, -90, -91, -91, -90, -90, -89, -89, -89, -87, -85,
-83, -82, -79, -76, -72, -71, -67, -64, -59, -56, -52, -48, -44, -41, -36, -32,
-30, -24, -21, -17, -13, -8, -6, -3, 0, };

#endif /* AKWF_1865_512_H_ */
