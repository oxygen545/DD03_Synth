#ifndef AKWF_stereo_0136_512_H_
#define AKWF_stereo_0136_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0136_512_NUM_CELLS 1024
#define AKWF_stereo_0136_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0136_512_DATA
[] = {2, -2, 6, -1, 8, 3, 10, 5, 14, 8, 17, 11, 21, 14, 23, 17, 25, 20, 29, 22,
32, 26, 33, 29, 37, 31, 39, 33, 42, 35, 44, 37, 47, 40, 49, 43, 51, 45, 53, 47,
55, 48, 57, 51, 59, 53, 61, 55, 63, 56, 63, 58, 65, 60, 67, 61, 68, 62, 69, 64,
71, 65, 71, 66, 72, 67, 72, 68, 73, 69, 75, 70, 76, 71, 76, 71, 76, 73, 76, 72,
78, 73, 78, 74, 78, 74, 78, 74, 78, 74, 78, 75, 79, 74, 79, 76, 80, 75, 79, 75,
79, 75, 79, 75, 78, 75, 79, 76, 78, 75, 78, 75, 78, 75, 77, 75, 77, 75, 77, 74,
77, 74, 76, 73, 77, 73, 76, 73, 76, 72, 75, 74, 75, 73, 75, 73, 74, 71, 74, 72,
74, 72, 73, 72, 72, 72, 73, 71, 73, 71, 72, 71, 72, 71, 71, 71, 71, 71, 71, 70,
70, 70, 70, 70, 70, 69, 69, 69, 69, 70, 69, 69, 69, 70, 68, 69, 68, 70, 69, 70,
67, 69, 68, 68, 67, 69, 66, 69, 66, 68, 66, 68, 64, 67, 64, 66, 63, 66, 64, 66,
62, 65, 62, 64, 60, 63, 59, 63, 58, 62, 57, 61, 57, 60, 55, 59, 53, 58, 53, 57,
51, 55, 49, 54, 47, 52, 46, 50, 43, 48, 41, 46, 39, 45, 37, 43, 35, 40, 32, 39,
30, 37, 28, 34, 25, 31, 23, 29, 19, 27, 17, 22, 14, 21, 11, 17, 8, 14, 5, 12, 1,
8, -2, 5, -6, 2, -9, -2, -11, -5, -15, -8, -19, -12, -23, -15, -25, -19, -30,
-22, -33, -26, -37, -30, -41, -33, -44, -37, -48, -40, -52, -44, -55, -48, -59,
-51, -62, -55, -66, -58, -69, -62, -72, -66, -77, -69, -79, -72, -83, -76, -86,
-79, -89, -83, -92, -86, -95, -89, -98, -92, -102, -94, -103, -97, -106, -100,
-108, -103, -110, -105, -113, -107, -114, -109, -116, -112, -119, -114, -121,
-115, -121, -117, -123, -119, -124, -120, -125, -121, -126, -123, -128, -123,
-128, -123, -127, -125, -128, -125, -128, -125, -128, -126, -128, -125, -127,
-126, -126, -125, -126, -123, -124, -123, -124, -123, -123, -123, -121, -121,
-120, -119, -118, -119, -117, -117, -115, -116, -112, -113, -111, -111, -108,
-110, -106, -107, -103, -105, -100, -103, -98, -101, -95, -98, -92, -95, -89,
-93, -86, -90, -83, -87, -81, -84, -78, -81, -74, -79, -70, -76, -67, -73, -64,
-69, -61, -67, -59, -64, -55, -60, -52, -58, -49, -55, -45, -52, -43, -50, -39,
-47, -35, -43, -33, -40, -30, -38, -27, -35, -24, -32, -22, -30, -19, -27, -16,
-24, -14, -22, -11, -19, -9, -17, -6, -15, -3, -12, -1, -10, 1, -7, 3, -5, 6,
-3, 7, -1, 9, 1, 11, 3, 14, 4, 15, 7, 17, 9, 18, 10, 21, 12, 22, 14, 23, 15, 26,
17, 26, 19, 28, 20, 29, 21, 30, 22, 32, 25, 33, 26, 34, 28, 36, 29, 37, 30, 38,
31, 40, 32, 41, 34, 42, 36, 44, 36, 44, 38, 46, 38, 46, 40, 48, 41, 48, 43, 49,
44, 50, 44, 52, 46, 53, 47, 54, 49, 55, 49, 56, 52, 57, 52, 58, 53, 59, 54, 60,
57, 61, 58, 62, 59, 63, 59, 64, 60, 65, 62, 66, 63, 67, 65, 67, 65, 68, 66, 69,
68, 70, 69, 71, 69, 72, 71, 72, 71, 73, 73, 74, 74, 74, 75, 75, 76, 76, 77, 76,
77, 76, 77, 77, 79, 78, 79, 78, 79, 78, 80, 79, 80, 78, 81, 79, 82, 79, 82, 78,
82, 79, 82, 79, 83, 78, 82, 79, 82, 78, 81, 77, 81, 76, 82, 76, 80, 75, 80, 75,
80, 74, 78, 72, 79, 72, 77, 71, 77, 70, 75, 68, 74, 69, 74, 66, 72, 66, 70, 63,
69, 63, 68, 61, 66, 58, 65, 57, 63, 55, 62, 54, 60, 52, 57, 50, 55, 48, 54, 46,
52, 44, 49, 42, 48, 40, 45, 37, 44, 35, 41, 33, 39, 31, 37, 29, 34, 27, 31, 25,
31, 23, 27, 20, 24, 19, 22, 15, 20, 13, 19, 11, 16, 9, 14, 7, 10, 4, 9, 2, 7, 1,
5, -2, 2, -4, -1, -6, -2, -9, -4, -10, -7, -12, -8, -14, -11, -16, -12, -17,
-14, -19, -15, -20, -17, -23, -20, -24, -21, -26, -22, -27, -24, -28, -25, -29,
-26, -30, -28, -31, -28, -32, -30, -33, -31, -33, -32, -34, -32, -34, -32, -35,
-34, -36, -34, -35, -34, -36, -34, -36, -35, -36, -34, -36, -35, -36, -34, -36,
-34, -35, -34, -35, -34, -35, -33, -34, -33, -33, -33, -33, -32, -33, -31, -33,
-30, -32, -30, -31, -29, -30, -29, -30, -28, -29, -28, -28, -27, -27, -26, -27,
-24, -26, -24, -25, -23, -24, -22, -24, -22, -24, -22, -23, -22, -23, -20, -22,
-20, -22, -20, -21, -20, -21, -18, -21, -19, -21, -19, -21, -18, -21, -19, -21,
-18, -21, -19, -21, -19, -22, -20, -22, -20, -23, -20, -25, -21, -24, -22, -26,
-22, -26, -23, -27, -24, -29, -25, -30, -27, -30, -27, -31, -28, -33, -30, -35,
-31, -35, -33, -36, -34, -38, -35, -39, -36, -42, -39, -43, -40, -45, -41, -46,
-43, -47, -45, -49, -47, -51, -48, -52, -50, -54, -51, -55, -53, -57, -55, -58,
-57, -60, -57, -61, -59, -62, -61, -63, -63, -65, -64, -66, -64, -68, -66, -69,
-67, -69, -68, -70, -69, -71, -71, -72, -71, -72, -72, -72, -72, -73, -73, -74,
-73, -75, -74, -74, -74, -74, -75, -75, -75, -74, -75, -73, -75, -74, -75, -73,
-74, -73, -74, -72, -73, -70, -72, -70, -71, -68, -70, -67, -69, -65, -69, -65,
-67, -62, -65, -61, -63, -59, -62, -57, -61, -56, -59, -53, -56, -51, -54, -49,
-53, -47, -50, -44, -48, -41, -45, -39, -43, -36, -40, -32, -38, -30, -35, -27,
-32, -25, -30, -22, -27, -18, -23, -15, -20, -13, -17, -10, -15, -6, -11, -3,
-9, 0, -3, };

#endif /* AKWF_stereo_0136_512_H_ */
