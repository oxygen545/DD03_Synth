#ifndef AKWF_stereo_0148_512_H_
#define AKWF_stereo_0148_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0148_512_NUM_CELLS 1024
#define AKWF_stereo_0148_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0148_512_DATA
[] = {68, 40, 127, 74, 110, 65, 120, 70, 112, 67, 118, 69, 113, 66, 115, 68,
112, 66, 114, 66, 112, 65, 112, 65, 111, 65, 111, 66, 111, 65, 111, 65, 110, 64,
109, 64, 109, 65, 108, 63, 108, 65, 107, 63, 108, 63, 105, 63, 106, 63, 105, 62,
104, 62, 104, 62, 105, 62, 103, 60, 103, 61, 101, 60, 102, 60, 101, 59, 100, 60,
100, 59, 99, 59, 99, 59, 99, 59, 98, 59, 97, 58, 97, 58, 96, 57, 95, 58, 95, 57,
95, 57, 94, 57, 94, 56, 93, 56, 93, 57, 93, 56, 92, 56, 92, 55, 91, 55, 91, 55,
90, 55, 91, 55, 89, 54, 89, 53, 88, 54, 88, 54, 87, 54, 88, 53, 86, 53, 86, 52,
86, 53, 85, 53, 85, 53, 84, 52, 84, 52, 83, 51, 82, 52, 83, 52, 82, 52, 81, 52,
80, 51, 80, 50, 80, 51, 79, 50, 80, 50, 79, 50, 79, 50, 78, 51, 78, 51, 77, 51,
77, 49, 76, 49, 75, 50, 76, 49, 76, 49, 75, 49, 74, 49, 74, 49, 73, 48, 73, 50,
72, 49, 72, 48, 72, 49, 72, 49, 71, 50, 70, 49, 71, 49, 71, 49, 70, 48, 69, 48,
69, 48, 68, 48, 69, 49, 67, 48, 68, 49, 67, 48, 66, 48, 66, 48, 65, 48, 65, 49,
65, 48, 65, 48, 64, 48, 65, 48, 64, 48, 63, 48, 62, 48, 63, 48, 62, 48, 61, 48,
62, 48, 61, 48, 61, 48, 61, 49, 60, 48, 60, 49, 60, 49, 59, 49, 59, 49, 58, 50,
57, 49, 58, 48, 58, 49, 57, 49, 57, 50, 56, 50, 56, 49, 55, 50, 55, 50, 56, 50,
55, 49, 54, 49, 54, 49, 54, 50, 54, 50, 53, 50, 53, 51, 52, 50, 52, 50, 52, 51,
52, 51, 51, 51, 51, 51, 51, 51, 51, 51, 50, 51, 51, 51, 50, 51, 50, 52, 49, 52,
50, 52, 48, 53, 48, 53, 49, 53, 48, 53, 47, 53, 48, 54, 47, 54, 47, 54, 46, 54,
47, 54, 46, 55, 46, 54, 46, 55, 46, 56, 45, 55, 45, 56, 45, 56, 44, 56, 44, 56,
43, 57, 43, 57, 44, 57, 44, 58, 43, 57, 43, 58, 43, 59, 42, 58, 42, 59, 43, 59,
42, 59, 41, 60, 42, 60, 41, 60, 41, 60, 41, 60, 40, 61, 40, 61, 41, 61, 40, 62,
39, 62, 40, 63, 39, 64, 39, 64, 39, 64, 39, 64, 38, 63, 38, 64, 38, 65, 37, 64,
38, 65, 37, 65, 38, 67, 37, 66, 37, 67, 36, 67, 36, 67, 36, 67, 36, 68, 36, 68,
36, 68, 35, 68, 36, 68, 35, 69, 35, 69, 35, 70, 34, 70, 34, 70, 34, 70, 34, 70,
34, 71, 34, 72, 32, 71, 32, 72, 32, 72, 32, 72, 32, 73, 32, 73, 32, 74, 32, 74,
31, 74, 32, 74, 31, 74, 32, 74, 30, 75, 30, 75, 30, 75, 30, 75, 30, 76, 31, 75,
30, 77, 29, 77, 29, 77, 29, 77, 29, 77, 28, 78, 29, 79, 29, 78, 28, 78, 27, 80,
27, 79, 28, 79, 27, 80, 26, 80, 27, 81, 26, 80, 26, 80, 27, 81, 26, 82, 26, 82,
26, 82, 26, 82, 25, 83, 25, 83, 24, 82, 14, 59, -17, -13, -52, -92, -66, -124,
-63, -118, -57, -103, -54, -97, -56, -98, -56, -101, -57, -100, -57, -98, -56,
-98, -56, -96, -55, -95, -56, -94, -56, -94, -56, -93, -55, -92, -56, -91, -56,
-91, -55, -89, -56, -89, -56, -89, -55, -87, -55, -87, -56, -86, -55, -85, -55,
-85, -56, -85, -56, -83, -56, -83, -55, -82, -56, -82, -56, -81, -56, -80, -56,
-80, -55, -79, -56, -78, -56, -78, -57, -78, -56, -77, -57, -77, -57, -76, -56,
-76, -57, -76, -57, -74, -57, -74, -57, -74, -57, -73, -57, -73, -57, -73, -57,
-72, -58, -72, -57, -71, -58, -71, -58, -71, -58, -71, -58, -70, -58, -70, -58,
-69, -58, -70, -59, -69, -58, -68, -59, -68, -59, -67, -60, -67, -59, -67, -59,
-67, -60, -67, -60, -67, -60, -65, -61, -66, -60, -66, -61, -65, -61, -64, -61,
-65, -61, -64, -61, -64, -61, -64, -62, -64, -62, -63, -62, -63, -63, -64, -63,
-62, -63, -63, -62, -62, -63, -62, -63, -62, -63, -61, -63, -62, -64, -61, -64,
-61, -65, -61, -64, -61, -65, -61, -65, -60, -64, -59, -65, -60, -66, -60, -67,
-60, -66, -59, -66, -59, -66, -59, -66, -60, -66, -59, -67, -59, -68, -58, -67,
-58, -68, -59, -68, -58, -68, -58, -68, -58, -69, -58, -69, -57, -69, -58, -69,
-57, -69, -57, -70, -56, -70, -57, -71, -56, -71, -56, -71, -56, -71, -56, -71,
-56, -71, -57, -71, -56, -71, -55, -72, -57, -72, -56, -72, -56, -72, -56, -73,
-55, -73, -56, -73, -56, -74, -55, -73, -55, -74, -55, -75, -56, -75, -56, -75,
-55, -75, -55, -75, -55, -76, -55, -76, -55, -75, -55, -77, -55, -77, -55, -77,
-55, -77, -54, -77, -54, -77, -55, -77, -55, -78, -55, -79, -54, -79, -54, -79,
-54, -79, -54, -79, -53, -79, -54, -80, -55, -80, -54, -80, -54, -81, -54, -81,
-55, -82, -54, -81, -54, -82, -54, -82, -54, -82, -54, -82, -54, -83, -55, -83,
-55, -84, -54, -83, -54, -83, -54, -84, -54, -83, -54, -84, -54, -84, -54, -85,
-55, -86, -54, -86, -54, -86, -54, -85, -55, -87, -54, -87, -54, -88, -55, -87,
-55, -87, -55, -88, -54, -88, -54, -88, -55, -89, -56, -89, -55, -89, -55, -90,
-54, -90, -55, -89, -55, -90, -54, -90, -55, -91, -55, -92, -56, -91, -55, -92,
-56, -92, -55, -93, -55, -92, -56, -93, -57, -93, -55, -94, -56, -94, -56, -94,
-56, -94, -55, -95, -56, -95, -56, -96, -56, -96, -57, -96, -56, -95, -57, -97,
-57, -97, -57, -97, -57, -97, -57, -97, -58, -98, -58, -98, -57, -99, -59, -97,
-58, -100, -59, -96, -55, -106, -62, -39, -23, };

#endif /* AKWF_stereo_0148_512_H_ */
