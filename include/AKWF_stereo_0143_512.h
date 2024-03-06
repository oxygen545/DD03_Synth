#ifndef AKWF_stereo_0143_512_H_
#define AKWF_stereo_0143_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0143_512_NUM_CELLS 1024
#define AKWF_stereo_0143_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0143_512_DATA
[] = {1, -57, 7, -73, 12, -62, 17, -64, 22, -56, 27, -56, 30, -51, 34, -50, 38,
-43, 41, -41, 46, -34, 49, -31, 53, -22, 57, -6, 61, 8, 62, 19, 63, 26, 65, 33,
67, 37, 67, 42, 69, 47, 69, 51, 71, 53, 73, 56, 74, 59, 75, 62, 74, 63, 75, 66,
76, 68, 77, 70, 78, 73, 78, 76, 80, 77, 81, 81, 82, 83, 83, 85, 85, 88, 87, 91,
89, 93, 91, 96, 93, 98, 95, 101, 97, 103, 99, 106, 100, 108, 102, 109, 104, 111,
104, 113, 105, 115, 104, 116, 105, 116, 105, 116, 105, 117, 103, 119, 103, 119,
102, 119, 102, 120, 101, 120, 101, 121, 100, 122, 100, 123, 100, 123, 101, 123,
102, 123, 102, 124, 103, 123, 103, 123, 103, 124, 103, 124, 103, 125, 103, 124,
103, 125, 103, 127, 103, 127, 104, 127, 103, 127, 103, 127, 102, 127, 101, 127,
101, 126, 101, 125, 99, 124, 98, 123, 98, 122, 96, 121, 96, 119, 95, 117, 93,
117, 93, 116, 92, 115, 92, 115, 92, 114, 91, 113, 90, 112, 90, 113, 90, 112, 90,
111, 90, 112, 90, 111, 91, 111, 93, 112, 94, 111, 95, 111, 94, 109, 94, 108, 94,
106, 93, 104, 91, 102, 90, 99, 90, 96, 89, 94, 88, 91, 87, 89, 86, 87, 85, 84,
83, 83, 82, 82, 79, 80, 78, 79, 76, 78, 75, 76, 74, 74, 73, 72, 72, 69, 70, 67,
68, 64, 68, 61, 64, 57, 61, 52, 58, 47, 54, 43, 49, 38, 45, 34, 39, 29, 34, 24,
28, 19, 23, 17, 21, 14, 19, 11, 19, 11, 20, 11, 21, 13, 22, 15, 22, 16, 22, 16,
20, 13, 19, 9, 16, 4, 13, -3, 8, -12, 2, -23, -2, -40, -5, -53, -7, -60, -9,
-64, -10, -66, -9, -66, -8, -64, -7, -63, -7, -60, -6, -58, -5, -55, -5, -53,
-4, -48, -3, -37, -1, -24, 2, -14, 6, -5, 12, 3, 17, 12, 23, 20, 29, 29, 34, 35,
40, 42, 43, 48, 46, 52, 48, 56, 50, 59, 50, 62, 51, 63, 52, 64, 54, 67, 56, 70,
57, 72, 59, 76, 60, 78, 62, 83, 63, 85, 63, 88, 64, 90, 64, 92, 65, 93, 65, 95,
65, 95, 64, 95, 64, 95, 62, 95, 61, 95, 59, 94, 59, 94, 59, 94, 58, 94, 59, 95,
60, 95, 61, 95, 61, 96, 61, 95, 60, 95, 59, 96, 58, 95, 56, 94, 55, 92, 53, 92,
52, 92, 51, 91, 50, 91, 51, 91, 50, 90, 49, 91, 47, 92, 46, 92, 45, 93, 44, 93,
43, 93, 44, 93, 43, 93, 44, 93, 43, 92, 44, 92, 44, 91, 42, 91, 41, 89, 41, 89,
39, 87, 37, 86, 35, 85, 34, 84, 34, 84, 33, 83, 32, 82, 32, 81, 32, 80, 31, 80,
30, 79, 27, 78, 27, 77, 25, 74, 23, 73, 21, 71, 20, 69, 21, 67, 20, 64, 20, 58,
20, 48, 20, 40, 19, 35, 18, 30, 17, 25, 16, 20, 15, 16, 13, 12, 11, 6, 8, 0, 4,
-5, 0, -8, -4, -14, -8, -18, -10, -22, -13, -26, -16, -30, -18, -32, -21, -37,
-24, -40, -25, -44, -28, -48, -30, -52, -32, -56, -33, -60, -35, -63, -37, -67,
-38, -71, -40, -73, -44, -77, -47, -80, -50, -82, -53, -85, -57, -88, -60, -90,
-64, -93, -66, -95, -68, -98, -71, -99, -72, -101, -74, -103, -75, -104, -77,
-106, -78, -108, -80, -109, -81, -110, -82, -111, -84, -113, -85, -114, -86,
-115, -86, -116, -86, -117, -86, -116, -88, -116, -87, -117, -86, -116, -87,
-117, -87, -118, -87, -118, -87, -118, -88, -120, -88, -119, -89, -121, -91,
-121, -91, -122, -93, -123, -94, -123, -95, -123, -96, -124, -97, -125, -98,
-125, -98, -126, -98, -126, -99, -125, -100, -125, -99, -125, -99, -125, -98,
-124, -97, -124, -97, -123, -95, -122, -94, -122, -94, -120, -93, -119, -94,
-119, -94, -118, -93, -117, -93, -117, -94, -116, -93, -114, -91, -114, -92,
-112, -91, -112, -90, -110, -91, -109, -89, -108, -88, -106, -88, -106, -86,
-104, -84, -102, -83, -100, -81, -99, -79, -98, -76, -96, -74, -94, -71, -92,
-68, -90, -65, -87, -64, -84, -63, -82, -62, -78, -61, -75, -57, -71, -56, -68,
-53, -62, -50, -56, -48, -51, -43, -45, -41, -38, -36, -31, -33, -21, -30, -12,
-26, 2, -24, 20, -24, 31, -23, 39, -24, 43, -25, 45, -27, 45, -30, 42, -30, 40,
-32, 38, -33, 40, -32, 42, -31, 48, -27, 53, -25, 59, -22, 63, -19, 67, -15, 71,
-14, 75, -14, 78, -13, 80, -14, 80, -17, 81, -18, 81, -22, 80, -25, 79, -28, 78,
-31, 77, -33, 74, -35, 73, -36, 72, -37, 70, -38, 68, -39, 65, -39, 63, -39, 61,
-40, 60, -41, 57, -43, 53, -44, 50, -48, 45, -52, 38, -55, 21, -57, 3, -60, -12,
-61, -22, -62, -30, -65, -37, -65, -40, -66, -46, -66, -49, -66, -52, -65, -55,
-64, -57, -63, -59, -62, -61, -60, -61, -60, -62, -57, -63, -57, -62, -57, -62,
-56, -64, -56, -66, -59, -68, -60, -72, -62, -75, -64, -77, -67, -81, -69, -83,
-71, -84, -72, -87, -74, -88, -74, -90, -76, -91, -76, -93, -79, -94, -80, -96,
-82, -97, -84, -100, -85, -101, -86, -102, -87, -104, -86, -105, -86, -107, -85,
-108, -85, -109, -85, -109, -83, -109, -83, -110, -83, -110, -83, -111, -83,
-112, -84, -113, -83, -114, -83, -115, -83, -115, -83, -116, -84, -116, -84,
-116, -84, -116, -85, -117, -85, -115, -85, -116, -85, -115, -85, -114, -85,
-113, -83, -112, -81, -110, -79, -109, -77, -108, -75, -106, -73, -106, -72,
-105, -70, -105, -70, -105, -70, -105, -69, -105, -68, -104, -67, -104, -67,
-103, -66, -103, -65, -102, -63, -101, -62, -100, -59, -98, -56, -97, -54, -94,
-50, -94, -47, -91, -42, -91, -37, -86, -32, -88, -25, -81, -19, -83, -13, -72,
-7, -82, -1, -47, };

#endif /* AKWF_stereo_0143_512_H_ */