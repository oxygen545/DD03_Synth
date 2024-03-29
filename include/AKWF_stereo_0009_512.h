#ifndef AKWF_stereo_0009_512_H_
#define AKWF_stereo_0009_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0009_512_NUM_CELLS 1024
#define AKWF_stereo_0009_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0009_512_DATA
[] = {0, 15, 1, 20, 0, 18, 0, 21, 2, 20, 2, 21, 2, 20, 2, 21, 3, 22, 3, 22, 3,
22, 3, 23, 3, 23, 4, 24, 4, 23, 5, 25, 5, 24, 5, 25, 5, 24, 6, 26, 7, 25, 6, 26,
6, 25, 6, 26, 7, 26, 7, 27, 7, 27, 8, 27, 8, 28, 7, 27, 8, 28, 9, 28, 8, 28, 8,
28, 9, 28, 9, 28, 9, 29, 9, 29, 10, 29, 10, 29, 10, 29, 10, 29, 9, 30, 10, 30,
11, 29, 10, 30, 10, 29, 11, 30, 10, 30, 12, 30, 11, 30, 11, 30, 12, 30, 12, 31,
11, 30, 11, 31, 11, 31, 12, 30, 12, 30, 12, 31, 12, 30, 12, 31, 12, 31, 12, 30,
12, 30, 12, 30, 13, 31, 13, 31, 12, 30, 12, 30, 12, 30, 12, 30, 13, 30, 12, 31,
12, 29, 13, 29, 13, 30, 12, 30, 12, 29, 13, 29, 13, 30, 12, 30, 12, 30, 12, 29,
13, 28, 12, 29, 12, 29, 12, 28, 12, 29, 12, 28, 13, 28, 13, 28, 12, 28, 11, 28,
12, 27, 11, 28, 12, 27, 12, 27, 12, 26, 11, 26, 11, 26, 12, 26, 11, 25, 11, 26,
11, 25, 11, 25, 10, 24, 10, 24, 11, 23, 23, 39, 69, 90, 108, 125, 118, 127, 122,
120, 121, 112, 121, 109, 125, 117, 127, 125, 127, 125, 124, 122, 120, 120, 120,
120, 119, 120, 114, 117, 109, 112, 105, 110, 105, 109, 102, 108, 98, 105, 95,
103, 93, 102, 93, 103, 91, 101, 89, 99, 88, 98, 87, 99, 87, 98, 86, 98, 85, 98,
85, 97, 86, 98, 85, 97, 84, 98, 85, 97, 86, 98, 86, 98, 87, 98, 87, 98, 88, 99,
88, 99, 89, 99, 89, 98, 91, 99, 91, 99, 92, 100, 93, 100, 93, 100, 95, 101, 95,
100, 95, 101, 96, 101, 98, 102, 98, 101, 99, 101, 100, 102, 101, 102, 101, 102,
101, 101, 102, 102, 103, 103, 104, 102, 104, 101, 104, 102, 105, 102, 106, 101,
106, 101, 106, 100, 107, 100, 107, 99, 107, 99, 107, 99, 107, 99, 107, 99, 107,
97, 107, 97, 108, 97, 108, 96, 107, 96, 107, 96, 107, 94, 107, 94, 107, 94, 107,
93, 107, 93, 106, 92, 106, 91, 106, 90, 106, 90, 105, 89, 105, 88, 104, 88, 103,
86, 103, 85, 103, 85, 102, 83, 102, 82, 101, 82, 101, 81, 100, 80, 99, 80, 99,
78, 98, 77, 97, 77, 97, 76, 97, 74, 96, 73, 96, 74, 95, 72, 94, 72, 92, 70, 92,
69, 91, 68, 90, 68, 89, 67, 89, 66, 88, 65, 87, 65, 86, 63, 85, 62, 85, 61, 84,
60, 83, 59, 82, 59, 80, 57, 80, 57, 79, 55, 78, 55, 64, 36, 16, -15, -21, -48,
-31, -50, -36, -46, -35, -39, -37, -39, -42, -49, -46, -57, -46, -57, -45, -55,
-42, -55, -42, -58, -40, -58, -36, -54, -34, -51, -32, -51, -30, -52, -29, -51,
-26, -50, -24, -49, -23, -49, -24, -52, -23, -50, -22, -51, -21, -50, -21, -52,
-23, -52, -22, -53, -23, -54, -24, -54, -25, -55, -25, -57, -26, -58, -28, -58,
-29, -60, -31, -62, -32, -63, -32, -64, -34, -66, -37, -66, -38, -67, -39, -69,
-41, -70, -43, -72, -45, -73, -46, -74, -48, -76, -50, -77, -52, -78, -53, -80,
-54, -81, -56, -80, -59, -82, -60, -83, -61, -85, -63, -86, -64, -86, -66, -88,
-67, -89, -69, -89, -70, -90, -72, -91, -72, -92, -74, -91, -74, -93, -76, -92,
-76, -94, -77, -94, -79, -94, -79, -95, -81, -96, -81, -95, -82, -97, -82, -97,
-83, -96, -83, -97, -85, -98, -85, -98, -86, -98, -87, -98, -86, -99, -87, -98,
-87, -98, -88, -99, -88, -99, -88, -99, -88, -99, -88, -98, -90, -98, -89, -99,
-88, -98, -89, -97, -89, -97, -88, -97, -88, -97, -89, -96, -88, -97, -89, -95,
-89, -96, -89, -95, -89, -95, -89, -95, -88, -95, -87, -93, -87, -94, -87, -93,
-87, -93, -86, -93, -86, -92, -86, -92, -86, -91, -85, -91, -85, -90, -85, -89,
-84, -89, -83, -88, -83, -87, -83, -87, -83, -86, -81, -86, -81, -85, -81, -84,
-80, -84, -79, -84, -80, -83, -79, -82, -79, -81, -78, -81, -78, -81, -77, -80,
-77, -79, -75, -79, -76, -78, -75, -77, -75, -76, -73, -75, -74, -76, -74, -74,
-72, -74, -72, -73, -71, -72, -71, -72, -69, -71, -69, -70, -68, -69, -67, -68,
-67, -67, -67, -67, -66, -66, -65, -65, -64, -64, -64, -64, -63, -63, -63, -62,
-62, -62, -62, -60, -61, -60, -60, -58, -60, -58, -59, -57, -59, -58, -58, -57,
-58, -55, -57, -55, -56, -55, -56, -52, -55, -53, -55, -51, -53, -50, -53, -50,
-53, -49, -53, -48, -52, -47, -51, -47, -50, -46, -50, -44, -49, -45, -49, -44,
-47, -43, -47, -43, -46, -41, -46, -40, -46, -40, -44, -39, -44, -38, -44, -37,
-42, -36, -43, -36, -42, -35, -41, -34, -41, -34, -41, -32, -39, -31, -39, -30,
-38, -30, -37, -30, -37, -29, -35, -28, -36, -27, -35, -27, -35, -26, -35, -25,
-33, -24, -33, -23, -32, -23, -31, -22, -32, -21, -31, -20, -30, -20, -29, -19,
-29, -19, -29, -18, -28, -17, -28, -17, -26, -15, -26, -14, -25, -14, -24, -13,
-24, -13, -24, -11, -23, -11, -23, -10, -22, -10, -21, -8, -21, -9, -21, -8,
-21, -7, -20, -6, -19, -5, -19, -5, -17, -5, -18, -3, -18, -4, -16, -2, -17, -2,
-15, -1, -16, -1, -15, 0, -14, 0, -15, 2, -14, 3, -13, 2, -13, 3, -12, 4, -11,
5, -12, 5, -11, 5, -10, 7, -10, 7, -9, 7, -8, 8, -8, 8, -8, 9, -7, 9, -7, 9, -7,
10, -5, 11, -6, 11, -5, 12, -5, 13, -4, 13, -4, 13, -4, 14, -4, 14, -4, 15, -2,
15, -2, 16, -2, 16, -2, 17, -1, 16, -1, 17, -1, 16, 0, 21, 0, 12, };

#endif /* AKWF_stereo_0009_512_H_ */
