#ifndef AKWF_stereo_0045_512_H_
#define AKWF_stereo_0045_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0045_512_NUM_CELLS 1024
#define AKWF_stereo_0045_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0045_512_DATA
[] = {66, 92, 127, 125, 112, 85, 114, 97, 103, 84, 110, 93, 112, 85, 118, 92,
114, 87, 110, 91, 103, 89, 101, 92, 103, 89, 104, 90, 104, 89, 100, 90, 95, 88,
91, 88, 91, 88, 92, 88, 93, 88, 92, 86, 89, 86, 86, 85, 85, 86, 85, 84, 88, 85,
87, 84, 88, 84, 86, 83, 86, 83, 86, 82, 87, 83, 88, 81, 88, 82, 88, 80, 88, 81,
86, 80, 86, 80, 87, 79, 87, 79, 88, 78, 87, 78, 86, 77, 85, 77, 85, 76, 84, 76,
84, 75, 83, 75, 83, 75, 82, 75, 81, 75, 79, 74, 79, 73, 79, 73, 78, 72, 77, 72,
77, 71, 75, 71, 76, 71, 75, 70, 75, 70, 73, 70, 74, 69, 73, 69, 72, 68, 73, 67,
72, 68, 73, 67, 72, 67, 71, 66, 71, 65, 71, 65, 71, 65, 70, 64, 70, 65, 69, 64,
69, 64, 68, 63, 67, 63, 68, 62, 67, 62, 67, 62, 67, 61, 66, 60, 65, 61, 65, 60,
64, 60, 64, 58, 63, 58, 63, 58, 63, 58, 62, 57, 61, 57, 61, 56, 60, 56, 59, 55,
60, 55, 59, 55, 58, 55, 58, 53, 58, 53, 58, 53, 57, 53, 57, 53, 55, 53, 56, 52,
55, 52, 54, 50, 54, 50, 53, 50, 54, 50, 53, 49, 53, 49, 52, 49, 52, 48, 51, 47,
51, 47, 51, 47, 50, 47, 50, 46, 49, 46, 49, 46, 48, 45, 47, 44, 48, 45, 47, 43,
46, 44, 46, 43, 46, 42, 46, 42, 45, 42, 45, 41, 45, 41, 44, 41, 43, 40, 42, 40,
42, 39, 42, 39, 42, 39, 41, 39, 40, 39, 41, 38, 40, 37, 39, 37, 39, 37, 39, 36,
39, 35, 38, 35, 37, 35, 37, 35, 36, 34, 36, 33, 36, 34, 36, 34, 35, 32, 35, 32,
34, 32, 34, 31, 34, 31, 34, 31, 33, 30, 33, 29, 32, 30, 32, 30, 31, 29, 30, 28,
30, 28, 30, 28, 29, 28, 29, 27, 29, 27, 29, 26, 28, 25, 27, 26, 27, 26, 27, 26,
27, 25, 27, 24, 25, 23, 25, 23, 25, 23, 25, 23, 23, 23, 24, 22, 23, 22, 23, 22,
22, 21, 22, 21, 21, 19, 20, 20, 20, 19, 20, 19, 20, 19, 19, 17, 20, 18, 19, 18,
18, 18, 18, 16, 17, 17, 17, 16, 17, 16, 17, 16, 16, 16, 16, 15, 16, 14, 15, 14,
14, 13, 13, 13, 14, 12, 14, 13, 13, 12, 12, 12, 12, 11, 11, 11, 11, 10, 11, 11,
10, 10, 10, 9, 10, 8, 10, 8, 9, 9, 9, 8, 8, 8, 7, 7, 8, 7, 6, 6, 7, 6, 6, 6, 6,
5, 5, 6, 4, 5, 4, 4, 5, 4, 5, 4, 4, 3, 3, 3, 2, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 2,
1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1, -2, -2, -2, -2, -3, -2, -3, -3,
-3, -3, -3, -4, -3, -4, -5, -4, -5, -4, -5, -5, -5, -5, -5, -6, -6, -6, -7, -6,
-6, -7, -8, -6, -8, -8, -9, -8, -8, -9, -9, -8, -10, -9, -9, -8, -11, -9, -10,
-10, -11, -10, -11, -10, -12, -11, -12, -11, -13, -11, -12, -12, -13, -12, -14,
-13, -14, -13, -15, -13, -15, -13, -15, -14, -16, -14, -16, -15, -16, -14, -17,
-15, -17, -15, -17, -16, -18, -16, -18, -16, -19, -17, -18, -17, -18, -18, -19,
-18, -19, -18, -20, -18, -20, -19, -21, -19, -21, -20, -21, -20, -22, -19, -23,
-20, -23, -20, -23, -21, -23, -21, -24, -22, -24, -22, -25, -22, -25, -22, -25,
-23, -25, -23, -25, -24, -26, -24, -26, -25, -26, -24, -27, -25, -28, -25, -28,
-26, -28, -25, -28, -27, -28, -27, -29, -27, -29, -27, -30, -28, -31, -28, -30,
-28, -31, -28, -31, -29, -32, -28, -31, -29, -32, -30, -32, -30, -33, -30, -33,
-31, -34, -31, -33, -31, -34, -31, -35, -32, -35, -32, -35, -32, -36, -33, -36,
-33, -36, -33, -36, -34, -37, -35, -37, -34, -38, -36, -38, -35, -38, -36, -39,
-36, -39, -37, -39, -36, -40, -37, -40, -37, -41, -37, -41, -38, -40, -38, -41,
-39, -41, -38, -42, -39, -42, -39, -43, -39, -43, -40, -43, -40, -44, -40, -44,
-40, -45, -41, -45, -41, -45, -42, -45, -42, -45, -41, -47, -42, -47, -42, -47,
-43, -47, -43, -47, -44, -48, -44, -48, -45, -48, -44, -49, -45, -50, -45, -49,
-45, -50, -45, -49, -46, -50, -47, -51, -47, -51, -47, -51, -48, -51, -48, -52,
-48, -53, -48, -52, -48, -53, -49, -53, -49, -54, -49, -54, -49, -54, -50, -55,
-50, -56, -50, -55, -51, -56, -52, -56, -52, -56, -51, -56, -52, -56, -52, -57,
-53, -58, -54, -58, -53, -58, -53, -59, -54, -58, -54, -59, -54, -59, -55, -60,
-55, -60, -55, -61, -55, -61, -55, -60, -57, -61, -57, -61, -56, -62, -57, -62,
-57, -63, -57, -64, -59, -63, -58, -63, -59, -64, -59, -64, -60, -64, -60, -65,
-60, -65, -60, -66, -60, -66, -61, -66, -61, -67, -61, -66, -62, -67, -62, -67,
-62, -68, -62, -68, -63, -69, -63, -69, -64, -69, -63, -69, -63, -70, -64, -70,
-64, -70, -64, -70, -65, -70, -65, -71, -65, -71, -65, -71, -66, -71, -67, -73,
-66, -72, -66, -73, -67, -73, -67, -73, -67, -74, -68, -74, -68, -74, -69, -74,
-69, -75, -69, -75, -69, -76, -70, -76, -69, -76, -71, -76, -70, -77, -71, -77,
-71, -77, -71, -78, -71, -78, -73, -79, -72, -78, -73, -78, -72, -79, -73, -79,
-74, -80, -73, -80, -74, -80, -75, -81, -75, -81, -74, -82, -75, -81, -75, -82,
-76, -81, -75, -83, -76, -83, -76, -83, -77, -83, -76, -84, -78, -84, -76, -85,
-79, -85, -77, -85, -79, -85, -78, -85, -80, -85, -79, -86, -79, -87, -79, -86,
-80, -88, -80, -86, -81, -88, -82, -84, -79, -93, -86, -34, -21, };

#endif /* AKWF_stereo_0045_512_H_ */
