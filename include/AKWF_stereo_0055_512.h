#ifndef AKWF_stereo_0055_512_H_
#define AKWF_stereo_0055_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0055_512_NUM_CELLS 1024
#define AKWF_stereo_0055_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0055_512_DATA
[] = {1, 1, 2, 2, 3, 4, 5, 7, 6, 8, 7, 10, 8, 12, 10, 13, 11, 15, 12, 16, 13,
18, 14, 20, 15, 22, 17, 23, 18, 25, 20, 27, 21, 29, 23, 31, 23, 33, 24, 34, 26,
36, 27, 38, 28, 38, 29, 41, 31, 42, 32, 44, 33, 46, 34, 47, 35, 49, 36, 51, 38,
52, 40, 54, 41, 55, 41, 56, 43, 58, 43, 60, 45, 61, 46, 64, 46, 64, 47, 66, 48,
68, 50, 69, 52, 71, 53, 72, 54, 73, 54, 74, 55, 75, 56, 77, 57, 79, 59, 80, 59,
81, 61, 82, 62, 83, 63, 84, 64, 86, 64, 87, 66, 89, 67, 90, 67, 91, 68, 92, 69,
93, 71, 95, 71, 95, 72, 96, 73, 97, 74, 99, 74, 100, 75, 100, 76, 102, 77, 103,
78, 103, 78, 105, 79, 106, 80, 106, 80, 107, 81, 109, 82, 109, 82, 110, 82, 110,
84, 111, 84, 111, 84, 113, 86, 113, 86, 114, 88, 114, 87, 116, 88, 116, 89, 117,
89, 117, 90, 118, 90, 118, 90, 119, 91, 120, 92, 120, 92, 121, 91, 121, 92, 121,
93, 121, 93, 122, 93, 123, 94, 124, 93, 124, 95, 124, 95, 124, 96, 124, 96, 125,
96, 125, 96, 125, 96, 126, 96, 126, 96, 126, 97, 126, 98, 127, 97, 126, 97, 127,
98, 127, 97, 127, 98, 127, 98, 127, 98, 127, 99, 127, 98, 127, 98, 127, 98, 127,
98, 127, 97, 127, 98, 127, 98, 127, 99, 127, 99, 127, 98, 127, 98, 127, 98, 127,
98, 127, 98, 127, 98, 127, 97, 127, 97, 127, 98, 126, 97, 127, 97, 127, 97, 125,
96, 126, 96, 126, 96, 126, 96, 124, 96, 125, 96, 124, 95, 123, 94, 124, 94, 123,
94, 123, 94, 123, 93, 122, 93, 122, 93, 121, 93, 121, 93, 121, 92, 120, 92, 119,
91, 119, 91, 118, 90, 117, 89, 116, 90, 116, 89, 116, 88, 115, 88, 114, 88, 114,
86, 112, 87, 112, 86, 111, 86, 110, 84, 110, 84, 109, 84, 109, 82, 107, 81, 106,
81, 105, 81, 104, 79, 103, 79, 103, 78, 102, 78, 101, 77, 99, 76, 99, 75, 98,
74, 97, 73, 95, 73, 95, 72, 94, 71, 92, 70, 92, 70, 90, 68, 89, 68, 88, 67, 87,
66, 85, 66, 85, 64, 83, 63, 81, 62, 81, 61, 80, 59, 78, 60, 77, 58, 76, 56, 75,
56, 73, 56, 71, 54, 70, 54, 69, 53, 67, 52, 66, 51, 64, 50, 63, 48, 62, 47, 61,
46, 59, 45, 58, 44, 56, 44, 55, 43, 54, 40, 51, 40, 50, 38, 49, 37, 47, 36, 45,
35, 44, 33, 42, 33, 40, 32, 39, 30, 37, 28, 36, 28, 34, 26, 32, 26, 31, 23, 29,
23, 27, 22, 26, 20, 23, 19, 22, 18, 21, 17, 18, 16, 16, 14, 16, 13, 13, 12, 11,
11, 10, 9, 8, 8, 7, 7, 5, 5, 3, 4, 2, 3, -1, 2, -2, 0, -3, -1, -6, -2, -7, -4,
-10, -5, -11, -5, -13, -7, -14, -8, -16, -10, -18, -11, -20, -12, -21, -13, -23,
-15, -25, -16, -26, -18, -28, -19, -30, -20, -31, -20, -33, -23, -35, -24, -37,
-24, -38, -26, -40, -27, -42, -28, -43, -29, -45, -31, -46, -31, -47, -34, -49,
-34, -51, -35, -53, -37, -54, -38, -55, -39, -57, -41, -58, -42, -60, -42, -61,
-44, -62, -44, -64, -46, -66, -47, -67, -49, -69, -50, -70, -51, -71, -51, -73,
-53, -74, -53, -75, -55, -76, -55, -78, -56, -79, -58, -81, -59, -82, -60, -83,
-61, -84, -62, -85, -63, -86, -64, -87, -64, -89, -66, -90, -67, -92, -67, -92,
-69, -93, -69, -94, -70, -95, -71, -97, -72, -97, -73, -98, -74, -100, -75,
-101, -76, -101, -76, -102, -76, -103, -78, -104, -78, -105, -79, -105, -81,
-106, -81, -108, -81, -108, -82, -109, -82, -109, -83, -111, -84, -110, -85,
-111, -85, -113, -85, -113, -87, -114, -87, -114, -87, -115, -88, -116, -88,
-116, -88, -117, -89, -118, -90, -118, -91, -119, -91, -119, -92, -120, -91,
-120, -92, -120, -92, -121, -93, -122, -93, -121, -94, -122, -94, -123, -94,
-122, -94, -123, -95, -123, -96, -124, -96, -124, -95, -124, -96, -125, -96,
-124, -96, -125, -97, -125, -97, -126, -97, -126, -98, -125, -97, -126, -97,
-126, -98, -125, -97, -126, -97, -126, -98, -126, -98, -126, -97, -125, -98,
-126, -98, -126, -98, -126, -98, -126, -99, -127, -99, -126, -98, -126, -98,
-127, -97, -126, -98, -126, -97, -126, -98, -125, -97, -126, -97, -125, -97,
-125, -98, -125, -97, -125, -98, -124, -97, -125, -97, -123, -96, -124, -96,
-124, -96, -123, -96, -123, -95, -123, -96, -123, -95, -122, -95, -121, -94,
-121, -95, -120, -94, -121, -94, -120, -94, -120, -93, -120, -93, -119, -93,
-117, -92, -118, -92, -117, -91, -117, -90, -116, -90, -115, -90, -115, -89,
-115, -88, -113, -88, -113, -88, -112, -87, -112, -86, -111, -86, -110, -85,
-110, -85, -109, -84, -108, -84, -108, -82, -107, -82, -106, -81, -106, -81,
-104, -81, -103, -80, -103, -79, -102, -78, -101, -78, -100, -76, -99, -76, -98,
-75, -98, -74, -97, -73, -96, -73, -95, -72, -93, -70, -92, -70, -91, -70, -90,
-69, -88, -68, -87, -67, -87, -65, -85, -65, -85, -64, -82, -62, -82, -62, -80,
-60, -80, -60, -78, -59, -78, -58, -77, -56, -75, -56, -73, -56, -72, -54, -71,
-53, -69, -52, -69, -51, -67, -50, -66, -48, -64, -48, -62, -47, -62, -46, -60,
-45, -58, -44, -58, -42, -56, -41, -54, -41, -53, -39, -51, -38, -50, -37, -48,
-35, -47, -35, -45, -33, -44, -32, -42, -31, -41, -29, -39, -28, -37, -27, -37,
-27, -34, -26, -33, -24, -32, -23, -30, -22, -28, -20, -27, -19, -24, -17, -23,
-16, -21, -16, -20, -14, -17, -13, -17, -12, -15, -11, -13, -9, -12, -8, -10,
-6, -8, -5, -7, -4, -5, -3, -4, -1, -1, 0, 0, };

#endif /* AKWF_stereo_0055_512_H_ */