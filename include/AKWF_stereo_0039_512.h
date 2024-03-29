#ifndef AKWF_stereo_0039_512_H_
#define AKWF_stereo_0039_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0039_512_NUM_CELLS 1024
#define AKWF_stereo_0039_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0039_512_DATA
[] = {0, 27, 5, 36, 10, 32, 14, 34, 20, 31, 24, 33, 29, 32, 33, 32, 38, 30, 41,
30, 46, 29, 51, 30, 55, 28, 59, 27, 63, 26, 67, 26, 71, 25, 75, 24, 78, 22, 82,
22, 85, 19, 88, 19, 91, 18, 94, 17, 97, 16, 99, 14, 102, 13, 104, 12, 106, 11,
108, 10, 110, 9, 111, 7, 113, 6, 115, 6, 117, 4, 118, 3, 119, 2, 120, 1, 121,
-1, 123, -2, 124, -3, 125, -4, 125, -6, 126, -6, 126, -8, 127, -9, 127, -10,
127, -12, 127, -13, 127, -14, 127, -15, 127, -17, 127, -18, 127, -19, 127, -21,
127, -22, 126, -24, 126, -24, 124, -26, 123, -27, 124, -28, 122, -29, 122, -31,
120, -32, 119, -32, 119, -34, 118, -35, 116, -36, 115, -36, 114, -37, 113, -38,
112, -38, 111, -40, 109, -39, 107, -40, 106, -41, 106, -41, 103, -41, 102, -42,
101, -41, 99, -42, 98, -42, 96, -41, 94, -40, 93, -39, 92, -39, 89, -38, 88,
-37, 86, -36, 84, -34, 83, -32, 81, -30, 80, -28, 77, -26, 75, -23, 75, -21, 73,
-19, 71, -15, 70, -14, 68, -10, 67, -8, 65, -6, 64, -2, 63, 1, 61, 4, 60, 7, 59,
11, 57, 14, 57, 19, 55, 21, 54, 25, 53, 29, 53, 33, 52, 36, 51, 39, 51, 44, 50,
48, 49, 50, 49, 55, 48, 58, 48, 61, 48, 65, 47, 69, 47, 73, 46, 76, 46, 78, 47,
82, 46, 86, 46, 90, 45, 93, 45, 95, 46, 99, 45, 101, 45, 104, 46, 106, 46, 109,
45, 111, 45, 114, 46, 115, 45, 117, 46, 118, 47, 121, 48, 121, 48, 123, 48, 125,
49, 125, 50, 127, 51, 127, 52, 127, 53, 127, 54, 127, 55, 127, 56, 127, 56, 126,
57, 126, 59, 124, 60, 123, 61, 122, 62, 119, 63, 118, 65, 115, 66, 113, 67, 110,
69, 108, 69, 105, 70, 102, 71, 98, 72, 94, 73, 90, 74, 87, 75, 83, 76, 79, 77,
75, 78, 71, 77, 67, 78, 62, 79, 58, 78, 53, 78, 48, 78, 43, 79, 38, 78, 35, 78,
30, 78, 25, 78, 21, 77, 16, 77, 11, 77, 6, 77, 2, 76, -2, 76, -7, 75, -12, 76,
-17, 74, -21, 73, -26, 74, -30, 73, -33, 72, -37, 72, -42, 72, -46, 71, -49, 70,
-54, 70, -56, 69, -60, 69, -63, 67, -67, 67, -70, 65, -72, 65, -76, 64, -79, 63,
-82, 61, -85, 61, -88, 60, -90, 59, -93, 58, -96, 58, -97, 56, -99, 55, -101,
54, -102, 52, -103, 52, -104, 51, -105, 49, -106, 48, -106, 47, -107, 46, -106,
45, -106, 43, -107, 43, -106, 41, -106, 40, -105, 39, -105, 38, -104, 37, -104,
36, -103, 35, -102, 34, -102, 32, -101, 31, -99, 30, -98, 29, -96, 27, -95, 26,
-94, 24, -92, 23, -92, 22, -90, 20, -88, 20, -87, 18, -86, 17, -85, 16, -84, 14,
-81, 13, -80, 12, -78, 10, -76, 9, -75, 8, -74, 8, -71, 7, -69, 6, -67, 3, -65,
4, -63, 3, -61, 1, -59, 1, -56, -1, -54, -1, -52, -3, -49, -3, -47, -5, -46, -5,
-43, -6, -41, -7, -40, -8, -37, -8, -35, -9, -33, -10, -31, -10, -30, -12, -27,
-12, -25, -13, -23, -15, -22, -15, -21, -16, -19, -16, -17, -17, -16, -17, -15,
-18, -13, -19, -12, -19, -10, -20, -9, -21, -8, -20, -6, -21, -5, -21, -4, -21,
-3, -22, -2, -23, 1, -22, 1, -23, 3, -23, 5, -23, 6, -23, 8, -24, 10, -25, 13,
-25, 15, -25, 18, -24, 18, -25, 21, -25, 24, -24, 25, -24, 28, -26, 30, -24, 34,
-25, 36, -25, 38, -25, 40, -25, 44, -25, 45, -26, 47, -26, 50, -28, 51, -28, 53,
-28, 55, -29, 57, -30, 58, -31, 58, -31, 60, -32, 61, -33, 61, -34, 61, -35, 62,
-35, 63, -36, 63, -38, 63, -39, 63, -40, 63, -41, 62, -42, 63, -43, 62, -46, 62,
-47, 62, -48, 61, -49, 61, -51, 61, -52, 60, -53, 59, -54, 58, -56, 57, -57, 57,
-58, 56, -60, 54, -62, 53, -64, 52, -65, 51, -67, 49, -69, 47, -72, 45, -73, 44,
-75, 42, -77, 40, -79, 38, -81, 35, -84, 32, -85, 30, -87, 27, -89, 23, -91, 21,
-92, 18, -95, 14, -97, 11, -99, 7, -101, 3, -104, 0, -105, -5, -107, -9, -109,
-12, -110, -16, -112, -20, -114, -24, -115, -28, -117, -31, -118, -35, -120,
-39, -120, -42, -121, -44, -122, -48, -123, -51, -123, -53, -124, -56, -125,
-60, -125, -62, -126, -63, -126, -65, -126, -67, -126, -68, -126, -70, -127,
-71, -127, -73, -128, -74, -127, -76, -127, -77, -126, -77, -125, -78, -126,
-80, -125, -80, -124, -81, -124, -81, -124, -83, -123, -83, -122, -83, -121,
-83, -120, -84, -118, -83, -117, -83, -117, -83, -115, -83, -114, -82, -114,
-81, -112, -80, -111, -80, -111, -79, -108, -76, -108, -75, -108, -73, -106,
-71, -106, -70, -105, -68, -105, -66, -104, -64, -104, -61, -104, -59, -103,
-56, -102, -53, -103, -50, -103, -47, -103, -44, -103, -41, -104, -37, -105,
-35, -104, -31, -106, -27, -106, -23, -107, -19, -108, -17, -109, -14, -109,
-11, -109, -8, -111, -5, -112, -1, -112, 1, -114, 3, -114, 6, -115, 9, -116, 11,
-116, 14, -116, 15, -117, 17, -119, 19, -119, 20, -118, 22, -119, 25, -119, 25,
-120, 28, -120, 29, -120, 30, -119, 32, -119, 32, -118, 34, -118, 35, -117, 36,
-116, 38, -115, 39, -114, 40, -113, 41, -111, 43, -111, 43, -109, 44, -107, 45,
-106, 45, -103, 45, -102, 45, -101, 46, -99, 46, -97, 46, -95, 46, -93, 46, -91,
45, -88, 45, -85, 45, -82, 46, -79, 45, -76, 44, -73, 44, -70, 43, -67, 44, -63,
42, -59, 42, -56, 41, -52, 40, -48, 40, -44, 40, -39, 38, -34, 39, -31, 37, -26,
38, -22, 36, -17, 37, -11, 33, -8, 38, -1, 23, };

#endif /* AKWF_stereo_0039_512_H_ */
