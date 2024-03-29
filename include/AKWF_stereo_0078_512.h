#ifndef AKWF_stereo_0078_512_H_
#define AKWF_stereo_0078_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0078_512_NUM_CELLS 1024
#define AKWF_stereo_0078_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0078_512_DATA
[] = {0, 14, 2, 21, 5, 20, 6, 24, 8, 24, 8, 28, 11, 28, 12, 31, 14, 32, 16, 34,
18, 36, 19, 40, 22, 41, 23, 43, 24, 44, 27, 46, 28, 48, 30, 50, 31, 51, 33, 53,
34, 55, 36, 57, 37, 58, 39, 60, 41, 61, 43, 63, 44, 65, 46, 67, 47, 67, 49, 70,
51, 70, 53, 73, 54, 74, 56, 75, 57, 77, 57, 78, 58, 80, 59, 81, 61, 82, 62, 84,
64, 85, 64, 86, 65, 88, 66, 89, 68, 90, 69, 91, 69, 92, 70, 94, 72, 95, 73, 95,
73, 96, 75, 97, 76, 98, 76, 99, 77, 101, 78, 102, 78, 103, 79, 103, 79, 106, 80,
106, 81, 106, 81, 108, 82, 109, 82, 110, 82, 111, 83, 110, 83, 112, 83, 112, 84,
113, 85, 114, 84, 115, 86, 116, 86, 116, 86, 117, 86, 117, 86, 117, 86, 119, 87,
119, 88, 120, 88, 120, 88, 121, 88, 122, 88, 122, 88, 122, 88, 123, 89, 123, 89,
123, 90, 125, 90, 124, 89, 124, 90, 125, 90, 125, 91, 126, 91, 126, 90, 126, 92,
127, 90, 127, 92, 126, 91, 127, 92, 127, 91, 127, 91, 127, 92, 127, 93, 127, 92,
127, 93, 127, 91, 127, 93, 127, 88, 124, 82, 118, 79, 116, 76, 113, 75, 111, 73,
109, 72, 107, 71, 103, 70, 102, 68, 99, 67, 96, 67, 94, 67, 92, 66, 90, 65, 88,
63, 86, 63, 85, 62, 84, 61, 82, 61, 81, 60, 79, 59, 77, 58, 76, 58, 73, 57, 71,
56, 70, 55, 69, 55, 67, 54, 65, 53, 64, 52, 63, 51, 62, 51, 61, 50, 60, 49, 58,
48, 56, 47, 56, 47, 53, 45, 53, 45, 51, 44, 50, 43, 49, 42, 47, 41, 45, 39, 44,
39, 43, 38, 42, 37, 42, 36, 40, 35, 39, 33, 38, 35, 36, 37, 34, 38, 34, 37, 32,
35, 31, 35, 29, 34, 28, 33, 27, 31, 27, 30, 25, 28, 24, 27, 22, 26, 23, 24, 21,
23, 20, 21, 18, 20, 18, 19, 17, 17, 15, 17, 15, 16, 13, 14, 13, 13, 12, 11, 10,
10, 10, 10, 8, 9, 8, 7, 7, 6, 6, 5, 5, 4, 3, 4, 2, 2, 2, 1, 0, 1, 0, -1, -1, -2,
-2, -3, -4, -3, -4, -4, -5, -5, -6, -6, -6, -8, -7, -7, -9, -7, -10, -9, -10,
-10, -12, -9, -12, -10, -13, -11, -14, -12, -15, -12, -16, -13, -16, -13, -17,
-15, -17, -15, -20, -15, -20, -16, -21, -16, -21, -17, -22, -17, -23, -18, -24,
-18, -24, -19, -26, -19, -26, -19, -27, -20, -28, -20, -28, -22, -29, -21, -31,
-21, -32, -22, -32, -22, -32, -22, -32, -23, -32, -24, -34, -25, -35, -25, -36,
-26, -37, -27, -38, -27, -40, -28, -40, -29, -41, -30, -42, -29, -43, -31, -44,
-31, -44, -31, -45, -32, -45, -32, -47, -33, -46, -34, -48, -33, -48, -34, -48,
-34, -50, -35, -50, -36, -50, -36, -52, -37, -52, -37, -52, -38, -54, -39, -54,
-40, -55, -40, -56, -41, -57, -42, -57, -42, -58, -43, -59, -43, -59, -44, -59,
-45, -61, -46, -61, -45, -62, -46, -62, -46, -63, -47, -64, -48, -64, -48, -64,
-48, -65, -49, -66, -49, -67, -50, -68, -50, -68, -52, -69, -53, -69, -52, -70,
-53, -71, -53, -71, -54, -72, -55, -73, -55, -74, -56, -74, -57, -74, -57, -75,
-57, -76, -58, -76, -58, -76, -58, -77, -59, -77, -59, -79, -60, -78, -60, -80,
-62, -81, -61, -81, -61, -81, -61, -82, -62, -83, -63, -83, -63, -83, -66, -84,
-67, -84, -68, -85, -69, -86, -69, -87, -70, -87, -71, -87, -70, -87, -70, -88,
-70, -88, -70, -89, -70, -90, -70, -91, -71, -90, -71, -92, -71, -91, -70, -92,
-71, -93, -71, -93, -72, -94, -72, -95, -72, -95, -73, -95, -72, -96, -72, -96,
-72, -97, -73, -96, -73, -97, -73, -99, -74, -99, -74, -99, -74, -99, -74, -100,
-72, -98, -71, -98, -71, -98, -71, -98, -70, -97, -71, -98, -71, -98, -71, -97,
-71, -99, -71, -98, -73, -98, -72, -97, -73, -98, -72, -98, -73, -99, -74, -99,
-74, -99, -74, -100, -73, -101, -72, -101, -72, -101, -73, -101, -72, -102, -73,
-102, -73, -103, -74, -103, -73, -103, -74, -103, -76, -104, -75, -104, -76,
-105, -76, -105, -76, -105, -77, -106, -78, -106, -78, -106, -79, -106, -79,
-107, -80, -108, -80, -108, -80, -108, -81, -110, -81, -109, -80, -109, -82,
-110, -82, -109, -81, -109, -81, -110, -82, -110, -82, -110, -82, -110, -83,
-111, -83, -112, -83, -111, -83, -113, -83, -113, -84, -113, -84, -113, -85,
-114, -85, -114, -85, -114, -85, -115, -85, -115, -86, -115, -86, -116, -86,
-117, -86, -116, -86, -116, -86, -117, -87, -117, -87, -117, -87, -118, -88,
-118, -88, -118, -88, -118, -88, -119, -88, -120, -89, -119, -89, -120, -89,
-120, -90, -120, -89, -121, -89, -120, -89, -121, -90, -120, -90, -121, -90,
-122, -91, -122, -90, -123, -91, -123, -91, -122, -91, -123, -92, -123, -91,
-123, -91, -124, -91, -123, -92, -124, -91, -124, -92, -123, -91, -124, -92,
-124, -92, -125, -93, -125, -93, -125, -93, -125, -94, -126, -94, -126, -93,
-125, -93, -126, -94, -126, -93, -126, -94, -127, -94, -126, -94, -126, -95,
-126, -94, -127, -95, -126, -95, -126, -94, -126, -94, -126, -95, -127, -96,
-127, -94, -127, -94, -128, -94, -127, -96, -127, -95, -127, -95, -127, -94,
-126, -97, -128, -89, -122, -75, -109, -71, -106, -66, -100, -62, -97, -59, -92,
-56, -88, -53, -83, -51, -78, -49, -74, -47, -69, -46, -66, -43, -61, -41, -57,
-40, -54, -38, -51, -37, -48, -34, -46, -33, -42, -31, -41, -29, -37, -28, -33,
-27, -30, -25, -28, -23, -25, -22, -22, -21, -19, -20, -15, -18, -12, -16, -11,
-15, -9, -13, -7, -11, -4, -10, -2, -9, 0, -7, 3, -5, 5, -5, 8, -3, 9, -2, 15,
0, 10, };

#endif /* AKWF_stereo_0078_512_H_ */
