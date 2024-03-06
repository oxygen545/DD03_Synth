#ifndef AKWF_stereo_0062_512_H_
#define AKWF_stereo_0062_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0062_512_NUM_CELLS 1024
#define AKWF_stereo_0062_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0062_512_DATA
[] = {0, 38, 2, 53, 3, 49, 6, 54, 7, 52, 8, 57, 9, 55, 11, 59, 11, 58, 14, 62,
15, 61, 16, 63, 18, 64, 19, 66, 22, 65, 23, 68, 24, 68, 27, 70, 28, 71, 30, 72,
31, 73, 32, 75, 34, 76, 36, 77, 38, 78, 40, 78, 42, 80, 43, 81, 45, 81, 47, 83,
49, 84, 51, 85, 53, 85, 54, 86, 56, 88, 58, 89, 59, 90, 60, 91, 62, 92, 65, 93,
66, 94, 68, 95, 70, 97, 72, 97, 74, 97, 75, 99, 77, 100, 79, 100, 80, 102, 83,
103, 84, 103, 85, 104, 87, 106, 88, 106, 90, 108, 93, 108, 94, 108, 95, 110, 96,
111, 99, 111, 100, 113, 101, 113, 103, 113, 103, 114, 104, 115, 106, 116, 107,
116, 109, 117, 111, 117, 112, 118, 113, 118, 114, 119, 114, 119, 116, 121, 116,
121, 118, 121, 119, 123, 119, 122, 120, 123, 122, 124, 121, 124, 123, 124, 123,
125, 124, 125, 124, 125, 125, 126, 126, 126, 126, 126, 126, 127, 126, 126, 126,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 125, 127, 125,
127, 125, 127, 124, 127, 123, 127, 123, 127, 122, 126, 121, 126, 121, 126, 120,
126, 119, 125, 118, 126, 117, 125, 116, 124, 115, 123, 115, 123, 114, 123, 113,
122, 111, 122, 110, 122, 109, 121, 107, 121, 107, 121, 105, 120, 103, 120, 102,
118, 101, 119, 100, 118, 98, 117, 96, 116, 95, 116, 93, 116, 92, 114, 90, 114,
89, 113, 86, 113, 85, 112, 84, 111, 82, 110, 80, 110, 79, 109, 78, 107, 75, 108,
74, 106, 71, 106, 71, 105, 69, 104, 66, 103, 64, 102, 63, 102, 61, 101, 59, 100,
58, 99, 56, 98, 55, 96, 52, 95, 51, 95, 49, 94, 48, 93, 46, 92, 44, 92, 43, 91,
41, 89, 39, 88, 38, 88, 35, 85, 35, 85, 32, 84, 31, 83, 28, 82, 28, 81, 25, 78,
25, 78, 23, 76, 22, 76, 20, 75, 19, 73, 17, 72, 16, 71, 15, 69, 12, 67, 12, 65,
10, 64, 9, 63, 7, 61, 6, 58, 5, 56, 4, 55, 2, 52, 2, 51, 2, 48, 1, 47, 0, 43,
-1, 40, -1, 35, -1, 32, 7, 6, 13, -11, 13, -14, 13, -19, 12, -22, 12, -25, 10,
-27, 10, -31, 10, -33, 8, -35, 6, -37, 6, -39, 5, -40, 4, -42, 2, -43, 1, -45,
0, -46, -2, -48, -3, -50, -4, -50, -5, -53, -7, -54, -8, -54, -10, -56, -11,
-57, -12, -58, -13, -60, -16, -60, -16, -61, -18, -63, -19, -64, -20, -65, -21,
-66, -24, -67, -24, -68, -26, -69, -27, -70, -28, -70, -30, -73, -31, -72, -32,
-73, -33, -75, -35, -75, -36, -76, -37, -77, -39, -78, -40, -78, -41, -80, -41,
-80, -43, -81, -44, -82, -45, -83, -47, -83, -48, -84, -49, -85, -49, -85, -50,
-86, -52, -87, -52, -87, -54, -87, -54, -88, -56, -88, -57, -89, -57, -90, -58,
-90, -59, -90, -60, -92, -60, -92, -61, -92, -62, -92, -62, -92, -63, -93, -63,
-93, -65, -94, -65, -94, -65, -94, -66, -95, -66, -95, -66, -95, -67, -96, -68,
-96, -67, -95, -68, -96, -68, -97, -69, -96, -69, -96, -69, -97, -68, -96, -69,
-97, -69, -97, -69, -97, -69, -97, -69, -97, -68, -97, -69, -97, -68, -97, -68,
-96, -68, -97, -68, -97, -68, -96, -67, -97, -67, -97, -67, -97, -67, -98, -66,
-97, -66, -96, -65, -96, -65, -97, -64, -96, -64, -97, -64, -96, -64, -95, -62,
-95, -62, -95, -62, -95, -61, -95, -60, -95, -61, -95, -60, -95, -59, -95, -58,
-94, -58, -94, -58, -94, -57, -93, -56, -94, -56, -93, -57, -92, -56, -93, -55,
-93, -54, -93, -54, -93, -53, -92, -54, -92, -53, -92, -53, -92, -52, -93, -51,
-92, -52, -92, -51, -92, -51, -91, -50, -91, -51, -91, -50, -92, -50, -91, -49,
-92, -49, -91, -49, -92, -50, -91, -49, -92, -49, -91, -50, -91, -50, -92, -49,
-92, -49, -92, -49, -91, -49, -91, -49, -92, -49, -91, -50, -92, -50, -92, -49,
-93, -50, -93, -51, -93, -51, -93, -51, -94, -51, -93, -52, -92, -51, -93, -52,
-93, -53, -93, -53, -93, -53, -95, -54, -95, -55, -94, -54, -95, -56, -95, -55,
-95, -56, -95, -57, -95, -57, -96, -57, -95, -58, -96, -58, -96, -59, -97, -59,
-96, -60, -97, -60, -97, -60, -97, -62, -97, -62, -97, -62, -97, -63, -97, -63,
-98, -64, -98, -64, -97, -64, -98, -65, -99, -65, -98, -66, -98, -66, -99, -66,
-99, -66, -99, -66, -98, -66, -99, -67, -99, -67, -98, -67, -99, -67, -99, -69,
-99, -67, -98, -68, -98, -69, -99, -68, -98, -68, -98, -69, -98, -68, -98, -68,
-98, -67, -98, -68, -98, -68, -99, -67, -97, -66, -97, -66, -98, -66, -96, -66,
-96, -66, -97, -66, -96, -65, -96, -64, -96, -64, -95, -64, -95, -63, -95, -62,
-95, -61, -95, -60, -94, -61, -94, -60, -93, -58, -93, -59, -93, -58, -93, -57,
-92, -56, -91, -55, -90, -54, -90, -53, -90, -52, -90, -52, -89, -51, -88, -49,
-88, -49, -88, -48, -87, -46, -87, -45, -86, -44, -85, -42, -84, -42, -85, -41,
-83, -40, -82, -38, -82, -37, -81, -35, -80, -35, -80, -34, -78, -32, -78, -31,
-77, -31, -76, -29, -75, -28, -75, -26, -74, -25, -74, -24, -73, -22, -72, -22,
-71, -21, -70, -18, -68, -17, -68, -16, -67, -15, -64, -14, -65, -12, -63, -11,
-62, -10, -61, -9, -59, -8, -59, -7, -56, -5, -54, -4, -54, -4, -51, -3, -47,
-1, -44, 0, -40, 1, -37, 1, -32, 3, -28, 1, -24, 1, -19, -8, 3, -11, 16, -12,
19, -12, 24, -11, 25, -11, 30, -10, 31, -9, 35, -8, 34, -6, 39, -5, 38, -5, 43,
-3, 40, -2, 49, -2, 29, };

#endif /* AKWF_stereo_0062_512_H_ */