#ifndef AKWF_stereo_0081_512_H_
#define AKWF_stereo_0081_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0081_512_NUM_CELLS 1024
#define AKWF_stereo_0081_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0081_512_DATA
[] = {0, 6, 5, 11, 7, 15, 11, 18, 14, 23, 18, 27, 21, 30, 24, 34, 28, 38, 31,
41, 33, 46, 37, 49, 40, 53, 43, 56, 46, 59, 49, 63, 52, 67, 54, 70, 57, 74, 60,
76, 63, 79, 65, 82, 68, 84, 70, 88, 73, 90, 75, 92, 76, 95, 79, 97, 80, 100, 82,
101, 84, 103, 86, 105, 88, 106, 89, 107, 90, 109, 91, 110, 93, 112, 94, 112, 94,
113, 95, 114, 96, 115, 98, 115, 97, 116, 98, 115, 99, 115, 98, 116, 99, 115,
100, 116, 100, 115, 100, 115, 101, 116, 103, 115, 102, 116, 103, 115, 105, 115,
104, 115, 105, 115, 105, 115, 106, 116, 107, 116, 108, 115, 108, 116, 109, 116,
108, 115, 109, 116, 109, 115, 109, 116, 110, 115, 111, 115, 110, 115, 111, 115,
110, 115, 111, 114, 111, 115, 111, 115, 111, 115, 111, 114, 111, 114, 111, 114,
111, 114, 110, 114, 111, 114, 110, 113, 110, 114, 109, 114, 108, 113, 109, 113,
108, 113, 109, 113, 107, 112, 108, 113, 107, 112, 106, 112, 106, 112, 106, 112,
106, 111, 105, 111, 104, 111, 104, 111, 104, 110, 103, 110, 103, 110, 102, 109,
101, 109, 101, 108, 100, 109, 100, 109, 99, 108, 99, 108, 99, 108, 98, 107, 98,
107, 96, 107, 96, 107, 96, 106, 95, 107, 95, 105, 95, 106, 94, 105, 94, 104, 94,
104, 94, 103, 93, 104, 92, 104, 91, 103, 92, 102, 91, 103, 91, 101, 91, 101, 90,
101, 90, 100, 90, 100, 90, 99, 88, 99, 89, 99, 89, 98, 87, 97, 88, 98, 88, 97,
88, 97, 87, 95, 87, 96, 86, 95, 87, 94, 86, 94, 86, 93, 86, 93, 86, 93, 84, 92,
85, 91, 85, 90, 85, 91, 84, 90, 84, 89, 84, 89, 83, 89, 83, 88, 83, 87, 84, 86,
82, 85, 82, 85, 82, 85, 81, 84, 82, 84, 81, 83, 82, 82, 80, 82, 79, 81, 80, 81,
79, 80, 80, 79, 79, 78, 78, 77, 78, 77, 77, 75, 76, 76, 77, 74, 75, 74, 74, 73,
75, 73, 73, 71, 72, 71, 73, 71, 72, 69, 70, 70, 71, 68, 69, 67, 69, 67, 68, 66,
67, 65, 66, 64, 65, 64, 65, 63, 64, 61, 63, 61, 63, 60, 61, 60, 60, 59, 60, 58,
59, 57, 58, 55, 56, 55, 56, 55, 55, 53, 54, 53, 52, 53, 51, 51, 51, 51, 49, 50,
49, 49, 47, 48, 47, 48, 46, 46, 45, 45, 44, 45, 44, 43, 43, 44, 41, 42, 40, 40,
39, 40, 38, 39, 36, 38, 35, 38, 35, 37, 34, 36, 32, 34, 32, 34, 31, 33, 30, 32,
28, 31, 28, 30, 26, 29, 24, 29, 25, 28, 23, 27, 23, 26, 20, 24, 20, 24, 19, 24,
18, 22, 16, 21, 16, 20, 15, 19, 14, 18, 13, 17, 12, 16, 12, 15, 11, 14, 8, 13,
9, 12, 8, 11, 7, 11, 6, 9, 5, 8, 4, 7, 4, 5, 3, 5, 2, 3, 1, 3, 1, 1, -1, 1, -1,
0, -2, -1, -3, -2, -4, -3, -5, -5, -5, -5, -6, -6, -7, -8, -8, -8, -9, -9, -9,
-10, -11, -11, -11, -13, -13, -13, -13, -14, -14, -16, -15, -17, -15, -18, -16,
-19, -17, -20, -18, -21, -20, -22, -20, -23, -21, -24, -23, -25, -23, -26, -25,
-26, -24, -28, -26, -30, -26, -30, -28, -31, -28, -32, -30, -34, -30, -33, -31,
-35, -32, -36, -33, -37, -34, -38, -36, -39, -36, -39, -37, -41, -38, -41, -39,
-43, -40, -44, -41, -45, -42, -46, -42, -47, -43, -48, -45, -49, -45, -50, -47,
-51, -47, -53, -48, -53, -50, -54, -49, -55, -51, -56, -52, -57, -53, -58, -54,
-58, -54, -60, -55, -60, -56, -62, -57, -62, -58, -63, -58, -64, -60, -65, -61,
-65, -61, -68, -61, -68, -63, -68, -63, -70, -65, -71, -65, -71, -66, -72, -66,
-74, -68, -74, -68, -74, -69, -75, -70, -77, -71, -77, -71, -79, -72, -79, -73,
-80, -73, -81, -74, -82, -74, -83, -77, -83, -77, -84, -78, -85, -77, -85, -79,
-86, -78, -88, -80, -88, -80, -89, -81, -90, -82, -91, -83, -91, -83, -92, -84,
-93, -85, -94, -85, -94, -86, -95, -87, -96, -87, -96, -88, -96, -88, -98, -89,
-99, -89, -99, -90, -100, -90, -101, -91, -101, -92, -102, -93, -102, -93, -103,
-93, -104, -93, -105, -94, -105, -95, -106, -96, -107, -96, -106, -97, -108,
-98, -108, -98, -108, -99, -109, -99, -109, -99, -111, -100, -111, -100, -112,
-101, -112, -101, -113, -102, -113, -102, -114, -103, -114, -103, -115, -104,
-116, -105, -116, -105, -116, -106, -116, -106, -117, -107, -117, -108, -118,
-108, -118, -108, -119, -108, -120, -108, -119, -110, -120, -110, -120, -110,
-120, -111, -121, -111, -122, -111, -121, -112, -122, -112, -123, -112, -123,
-112, -122, -113, -123, -114, -123, -114, -123, -114, -124, -114, -124, -115,
-125, -115, -125, -115, -125, -116, -126, -116, -126, -116, -125, -117, -126,
-117, -127, -117, -126, -118, -126, -118, -126, -118, -126, -119, -127, -118,
-127, -118, -127, -118, -127, -119, -128, -118, -127, -119, -128, -120, -127,
-119, -128, -120, -127, -119, -127, -119, -128, -120, -128, -119, -128, -120,
-127, -121, -128, -119, -128, -120, -128, -120, -128, -120, -127, -120, -127,
-119, -128, -120, -127, -119, -128, -119, -128, -119, -127, -118, -127, -118,
-126, -117, -125, -116, -125, -116, -125, -115, -124, -115, -123, -113, -122,
-112, -121, -111, -121, -109, -119, -109, -118, -107, -117, -105, -115, -103,
-114, -102, -112, -100, -110, -98, -108, -97, -107, -95, -104, -94, -103, -92,
-101, -89, -98, -88, -95, -85, -93, -82, -91, -80, -88, -78, -86, -74, -82, -72,
-80, -71, -76, -67, -74, -64, -70, -61, -67, -59, -63, -55, -60, -54, -57, -50,
-53, -47, -50, -44, -46, -40, -42, -38, -38, -34, -34, -31, -31, -27, -27, -24,
-23, -21, -20, -18, -15, -15, -11, -11, -7, -7, -4, -4, 1, -2, 2, };

#endif /* AKWF_stereo_0081_512_H_ */
