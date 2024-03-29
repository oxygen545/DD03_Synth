#ifndef AKWF_stereo_0018_512_H_
#define AKWF_stereo_0018_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0018_512_NUM_CELLS 1024
#define AKWF_stereo_0018_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0018_512_DATA
[] = {5, 25, 12, 42, 17, 40, 18, 41, 18, 40, 23, 44, 24, 46, 25, 47, 25, 45, 26,
44, 26, 46, 28, 47, 27, 46, 27, 46, 26, 45, 27, 47, 27, 47, 27, 47, 27, 46, 27,
46, 28, 47, 28, 47, 27, 47, 28, 47, 27, 48, 27, 48, 27, 48, 29, 48, 29, 49, 29,
48, 30, 49, 30, 49, 30, 50, 31, 50, 31, 51, 32, 51, 33, 52, 33, 52, 34, 54, 35,
53, 36, 54, 36, 54, 38, 56, 38, 55, 40, 56, 40, 57, 42, 58, 41, 58, 44, 59, 43,
58, 49, 64, 0, 8, -107, -107, -92, -75, -60, -9, -47, 25, -25, 52, -28, 31, -24,
14, -10, 16, 15, 40, 32, 53, 41, 53, 47, 52, 59, 64, 71, 78, 78, 83, 79, 80, 80,
80, 85, 84, 89, 89, 90, 88, 88, 84, 88, 84, 91, 85, 91, 87, 91, 85, 88, 83, 89,
82, 89, 84, 89, 83, 89, 82, 87, 79, 87, 79, 86, 80, 87, 79, 86, 78, 86, 77, 85,
78, 86, 78, 86, 78, 86, 78, 86, 76, 86, 78, 88, 78, 88, 77, 88, 77, 89, 78, 89,
78, 91, 79, 91, 79, 92, 79, 93, 80, 94, 81, 94, 81, 93, 78, 85, 67, 78, 59, 69,
53, 60, 46, 55, 42, 44, 35, 36, 30, 25, 20, 21, 20, -10, -13, -6, -6, 9, 16, 1,
9, 9, 17, 6, 10, 9, 10, 11, 10, 20, 17, 25, 19, 30, 21, 32, 20, 38, 24, 43, 27,
47, 31, 49, 29, 51, 31, 54, 33, 58, 35, 60, 35, 62, 36, 64, 36, 66, 37, 67, 37,
68, 38, 71, 37, 71, 38, 72, 40, 71, 37, 75, 39, -29, -72, -79, -115, -61, -81,
-72, -72, -65, -49, -76, -60, -84, -76, -93, -92, -88, -88, -86, -83, -84, -81,
-87, -89, -84, -88, -80, -82, -74, -74, -74, -75, -73, -79, -72, -78, -69, -74,
-66, -71, -67, -73, -67, -75, -66, -74, -67, -74, -55, -61, 64, 68, 119, 122,
103, 81, 110, 62, 104, 36, 113, 42, 122, 67, 127, 82, 125, 77, 118, 65, 114, 62,
113, 67, 109, 64, 100, 53, 89, 41, 84, 40, 81, 41, 74, 37, 66, 28, 58, 23, 55,
24, 53, 24, 47, 21, 41, 16, 38, 15, 35, 15, 34, 16, 29, 13, 27, 11, 25, 11, 24,
13, 24, 13, 21, 12, 21, 11, 21, 12, 20, 13, 21, 14, 21, 14, 20, 14, 21, 16, 22,
16, 23, 16, 24, 18, 24, 18, 25, 19, 27, 20, 28, 21, 29, 22, 31, 23, 33, 24, 35,
25, 36, 26, 38, 27, 41, 30, 43, 29, 44, 31, 46, 31, 48, 33, 50, 34, 52, 35, 54,
35, 56, 36, 58, 38, 57, 35, 48, 24, 41, 15, 33, 9, 26, 3, 19, 0, 10, -7, 3, -12,
-7, -23, -11, -24, -80, -100, -104, -124, -78, -79, -76, -64, -60, -39, -59,
-44, -58, -55, -55, -62, -39, -49, -25, -37, -14, -31, -9, -32, 0, -28, 10, -17,
19, -9, 22, -9, 25, -11, 23, -16, 19, -19, 15, -22, 9, -30, 3, -34, -3, -39, -8,
-42, -18, -48, -25, -55, -33, -62, -39, -66, -45, -72, -52, -77, -60, -84, -66,
-89, -72, -92, -70, -89, -63, -80, -60, -76, -55, -72, -50, -69, -44, -67, -37,
-63, -30, -57, -23, -51, -16, -48, -11, -42, -4, -38, 2, -34, 7, -29, 11, -27,
14, -24, 18, -20, 22, -18, 26, -15, 27, -13, 31, -10, 32, -7, 36, -4, 37, -3,
35, -4, 32, -10, 30, -10, 26, -12, 25, -11, 19, -14, 17, -13, -25, -58, -79,
-112, -59, -79, -50, -52, -45, -38, -40, -32, -46, -45, -46, -52, -42, -51, -32,
-40, -29, -36, -27, -37, -26, -38, -21, -32, -18, -26, -16, -24, -19, -26, -19,
-26, -18, -25, -17, -22, -19, -23, -21, -25, -22, -26, -22, -24, -22, -24, -24,
-25, -25, -26, -25, -26, -26, -25, -27, -25, -28, -26, -29, -26, -29, -25, -29,
-26, -30, -26, -31, -26, -31, -26, -31, -25, -30, -24, -32, -26, -30, -25, -31,
-25, -31, -24, -31, -24, -31, -25, -31, -24, -31, -23, -31, -22, -30, -23, -29,
-23, -29, -22, -29, -21, -30, -20, -29, -21, -29, -21, -27, -21, -28, -20, -27,
-18, -26, -18, -26, -18, -25, -18, -25, -17, -25, -17, -24, -16, -24, -16, -23,
-15, -22, -16, -22, -15, -21, -15, -21, -14, -21, -13, -21, -13, -20, -13, -19,
-13, -18, -12, -18, -11, -18, -12, -17, -11, -16, -9, -17, -10, -15, -8, -16,
-10, -14, -9, -15, -9, -14, -8, -14, -8, -12, -6, -13, -8, -12, -6, -12, -6,
-11, -5, -12, -6, -8, -3, -17, -12, -94, -97, -109, -107, -99, -81, -103, -71,
-97, -56, -105, -64, -110, -76, -114, -84, -109, -77, -105, -73, -101, -71,
-102, -76, -98, -71, -93, -65, -87, -58, -87, -60, -84, -59, -81, -58, -78, -52,
-75, -50, -75, -51, -75, -52, -71, -48, -73, -50, -55, -30, 16, 46, 34, 59, 24,
33, 28, 23, 24, 10, 32, 18, 37, 32, 40, 39, 35, 34, 30, 27, 26, 28, 26, 31, 22,
28, 15, 22, 10, 16, 7, 16, 5, 17, 2, 15, -4, 10, -7, 8, -9, 9, -11, 9, -14, 7,
-17, 5, -19, 4, -19, 5, -21, 5, -23, 5, -24, 4, -25, 4, -26, 4, -27, 4, -27, 4,
-29, 4, -28, 4, -28, 5, -29, 6, -29, 6, -29, 7, -30, 7, -29, 7, -29, 8, -29, 8,
-28, 9, -28, 9, -27, 11, -27, 10, -26, 11, -26, 12, -25, 13, -25, 13, -24, 14,
-24, 14, -23, 15, -23, 15, -21, 16, -21, 16, -21, 17, -20, 16, -19, 18, -19, 18,
-17, 18, -18, 18, -17, 19, -16, 19, -15, 20, -15, 21, -13, 21, -14, 21, -13, 21,
-12, 21, -11, 22, -15, 20, -76, -51, -95, -68, -68, -24, -62, -2, -47, 17, -45,
15, -43, 5, -39, 1, -27, 9, -15, 21, -8, 22, -4, 26, 0, 16, };

#endif /* AKWF_stereo_0018_512_H_ */
