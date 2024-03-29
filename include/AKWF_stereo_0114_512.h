#ifndef AKWF_stereo_0114_512_H_
#define AKWF_stereo_0114_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0114_512_NUM_CELLS 1024
#define AKWF_stereo_0114_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0114_512_DATA
[] = {0, -1, 3, -4, 4, -6, 5, -9, 7, -13, 7, -15, 9, -18, 11, -21, 13, -24, 14,
-27, 16, -30, 17, -33, 19, -35, 20, -38, 22, -41, 24, -44, 26, -46, 27, -49, 29,
-51, 30, -53, 31, -55, 33, -58, 34, -59, 36, -61, 36, -63, 39, -65, 41, -67, 42,
-68, 43, -68, 43, -70, 46, -71, 47, -73, 49, -74, 50, -73, 52, -74, 52, -75, 53,
-75, 54, -75, 56, -75, 57, -75, 59, -74, 59, -74, 60, -74, 62, -73, 63, -71, 64,
-71, 65, -70, 66, -70, 67, -68, 68, -67, 69, -66, 69, -65, 71, -64, 71, -61, 72,
-60, 73, -58, 74, -57, 75, -56, 75, -54, 76, -51, 76, -50, 78, -48, 78, -45, 78,
-43, 79, -40, 80, -38, 80, -36, 82, -33, 83, -30, 84, -28, 84, -24, 85, -22, 85,
-18, 86, -15, 88, -13, 88, -10, 88, -6, 89, -3, 90, 1, 91, 4, 92, 8, 92, 11, 93,
15, 94, 19, 94, 23, 94, 27, 95, 31, 95, 34, 97, 39, 97, 43, 97, 46, 98, 50, 99,
54, 100, 58, 101, 61, 101, 64, 102, 68, 103, 72, 104, 76, 104, 79, 106, 82, 106,
86, 107, 89, 108, 91, 109, 94, 110, 98, 111, 101, 111, 102, 112, 104, 113, 106,
114, 108, 115, 111, 116, 112, 116, 114, 118, 116, 118, 116, 119, 119, 121, 120,
121, 122, 122, 123, 122, 123, 123, 125, 123, 126, 124, 127, 125, 127, 126, 127,
126, 127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 127, 126, 126, 126, 125,
127, 124, 126, 123, 126, 122, 125, 122, 125, 120, 125, 118, 124, 117, 123, 115,
122, 112, 121, 111, 121, 108, 120, 106, 117, 104, 118, 101, 117, 99, 115, 96,
114, 93, 113, 89, 111, 86, 110, 83, 109, 80, 108, 76, 106, 74, 105, 69, 104, 66,
102, 62, 101, 58, 98, 54, 97, 51, 97, 47, 96, 43, 94, 39, 93, 35, 93, 31, 90,
27, 90, 23, 88, 19, 88, 15, 86, 11, 85, 7, 85, 3, 84, -1, 84, -5, 83, -10, 82,
-13, 81, -17, 80, -21, 79, -25, 78, -29, 78, -33, 77, -36, 77, -40, 76, -43, 76,
-47, 75, -50, 73, -53, 74, -56, 74, -60, 72, -63, 73, -64, 72, -68, 71, -70, 70,
-72, 71, -75, 70, -77, 70, -79, 68, -81, 68, -83, 67, -85, 66, -88, 65, -89, 65,
-90, 64, -91, 63, -93, 63, -93, 61, -94, 61, -95, 60, -96, 58, -96, 57, -97, 56,
-97, 55, -96, 54, -97, 53, -96, 51, -95, 50, -95, 50, -93, 48, -92, 47, -91, 46,
-90, 44, -87, 43, -87, 42, -85, 40, -83, 40, -82, 38, -79, 37, -77, 36, -75, 34,
-73, 33, -71, 31, -68, 29, -65, 28, -62, 28, -60, 25, -57, 24, -53, 22, -51, 21,
-48, 19, -45, 18, -42, 16, -39, 15, -36, 14, -33, 12, -30, 11, -27, 9, -23, 8,
-19, 6, -16, 5, -12, 4, -9, 2, -5, 0, -2, 0, 2, -3, 6, -4, 10, -5, 13, -7, 17,
-8, 21, -10, 24, -12, 27, -14, 31, -14, 34, -16, 37, -17, 40, -18, 43, -20, 46,
-21, 49, -23, 51, -24, 54, -26, 58, -27, 60, -29, 63, -30, 66, -32, 69, -33, 71,
-35, 73, -36, 75, -37, 77, -38, 79, -40, 82, -41, 83, -42, 85, -44, 87, -44, 89,
-46, 89, -46, 91, -48, 94, -50, 94, -50, 95, -52, 96, -53, 97, -55, 96, -56, 97,
-56, 96, -58, 97, -59, 96, -59, 95, -60, 94, -61, 94, -63, 93, -64, 92, -64, 91,
-66, 89, -66, 88, -67, 87, -67, 85, -67, 83, -68, 81, -70, 79, -70, 76, -71, 74,
-72, 72, -71, 69, -72, 67, -72, 64, -73, 63, -74, 59, -74, 56, -75, 53, -75, 50,
-76, 46, -76, 42, -77, 38, -76, 35, -78, 31, -79, 27, -79, 24, -80, 20, -81, 16,
-81, 12, -82, 7, -83, 3, -84, -1, -85, -4, -86, -9, -87, -13, -88, -16, -88,
-20, -90, -24, -92, -28, -92, -31, -94, -35, -94, -40, -96, -45, -97, -48, -98,
-52, -100, -56, -101, -59, -103, -63, -104, -67, -105, -70, -107, -74, -108,
-77, -110, -81, -110, -84, -111, -88, -113, -90, -114, -93, -116, -96, -116,
-100, -117, -101, -118, -105, -120, -107, -121, -109, -122, -111, -121, -113,
-123, -115, -123, -117, -124, -118, -124, -120, -125, -122, -126, -122, -126,
-124, -126, -125, -127, -125, -127, -126, -127, -128, -127, -128, -126, -128,
-127, -128, -126, -128, -126, -128, -125, -127, -124, -127, -124, -127, -124,
-125, -124, -125, -123, -123, -121, -122, -120, -122, -121, -120, -120, -118,
-118, -117, -117, -116, -117, -113, -116, -112, -115, -110, -113, -108, -113,
-107, -112, -103, -111, -101, -110, -99, -110, -97, -109, -94, -107, -91, -107,
-87, -107, -85, -105, -81, -105, -78, -103, -75, -103, -71, -101, -67, -101,
-64, -100, -60, -99, -57, -99, -53, -98, -48, -97, -46, -97, -41, -96, -37, -96,
-33, -96, -30, -94, -25, -94, -22, -93, -17, -92, -14, -93, -10, -92, -6, -90,
-3, -90, 0, -89, 3, -88, 7, -88, 10, -88, 14, -86, 16, -86, 19, -85, 22, -84,
24, -83, 28, -82, 31, -81, 34, -81, 37, -80, 38, -79, 41, -78, 43, -77, 47, -77,
47, -76, 50, -75, 52, -75, 55, -74, 56, -74, 58, -73, 59, -72, 61, -71, 63, -70,
64, -69, 65, -68, 66, -67, 68, -66, 69, -65, 69, -64, 71, -63, 72, -62, 72, -61,
73, -60, 74, -59, 74, -58, 75, -57, 75, -56, 75, -55, 74, -54, 74, -52, 75, -51,
74, -50, 74, -48, 73, -46, 73, -45, 70, -44, 69, -42, 68, -41, 67, -39, 66, -38,
64, -37, 63, -35, 61, -34, 59, -32, 57, -31, 55, -29, 52, -28, 50, -26, 47, -24,
45, -23, 43, -22, 40, -19, 37, -18, 35, -17, 32, -15, 29, -14, 26, -12, 23, -11,
20, -9, 17, -8, 14, -6, 11, -5, 9, -3, 6, -2, 3, -1, 1, };

#endif /* AKWF_stereo_0114_512_H_ */
