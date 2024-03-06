#ifndef AKWF_1088_512_H_
#define AKWF_1088_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1088_512_NUM_CELLS 512
#define AKWF_1088_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1088_512_DATA [] =
{22, 19, 17, 15, -15, -7, 5, 9, 13, 13, 14, 14, 15, 17, 17, 17, 16, 15, 16, 18,
17, 14, 16, 18, 19, 18, 18, 19, 16, 17, 17, 16, 14, 14, 14, 14, 13, 10, 10, 10,
10, 8, 9, 9, 9, 10, 6, 6, 5, 6, 5, 0, 1, 5, 6, 5, 4, 0, -1, 2, 1, 0, -1, -3, -2,
0, 1, 5, -4, -4, -1, 1, 2, -1, -1, 0, 1, 1, -1, 0, 1, 1, 2, 3, -1, -3, -1, 1, 2,
1, 1, 0, 1, 2, 2, 2, 3, 4, 2, 5, 6, 4, 3, 3, 6, 4, 7, 6, 7, 10, 9, 10, 8, 8, 11,
9, 12, 12, 11, 15, 11, 11, 11, 13, 12, 13, 13, 11, 11, 20, 36, 26, 8, 11, 15,
16, 19, 21, 21, 18, 19, 20, 20, 21, 22, 21, 23, 23, 17, 17, 19, 21, 22, 21, 20,
20, 18, 19, 20, 22, 22, 19, 16, 18, 17, 18, 18, 18, 18, 18, 20, 18, 17, 17, 17,
18, 19, 16, 16, 13, 12, 16, 18, 15, 12, 10, 13, 15, 18, 17, 14, 12, 11, 12, 16,
19, 10, 10, 13, 12, 11, 13, 15, 14, 14, 12, 8, 10, 13, 12, 16, 15, 10, 10, 15,
15, 15, 13, 13, 15, 16, 14, 12, 10, 11, 11, 12, 15, 13, 12, 12, 11, 11, 11, 11,
8, 10, 11, 8, 11, 8, 10, 12, 11, 7, 8, 9, 12, 11, 13, 4, 27, 88, 80, 72, 77, 97,
109, 125, 120, 58, 84, 110, 117, 120, 120, 123, 120, 122, 121, 121, 119, 117,
112, 114, 113, 109, 105, 103, 102, 99, 95, 92, 89, 84, 80, 77, 73, 67, 65, 62,
60, 58, 54, 48, 45, 42, 38, 37, 33, 28, 24, 19, 18, 12, 9, 6, 1, 0, -1, -3, -7,
-11, -14, -15, -16, -20, -24, -28, -29, -31, -32, -30, -28, -37, -38, -38, -37,
-40, -41, -42, -44, -42, -45, -49, -49, -48, -49, -45, -45, -52, -53, -51, -54,
-52, -54, -52, -52, -52, -53, -56, -55, -55, -55, -55, -54, -54, -53, -53, -54,
-55, -56, -54, -55, -53, -49, -50, -50, -51, -50, -49, -52, -50, -49, -46, -43,
-46, -48, -46, -46, -46, -47, -47, -47, -46, -38, -23, -34, -50, -44, -41, -42,
-40, -39, -38, -36, -33, -36, -38, -38, -40, -39, -35, -33, -37, -38, -35, -36,
-36, -36, -35, -34, -35, -35, -34, -32, -34, -34, -34, -35, -35, -35, -36, -34,
-33, -35, -34, -35, -36, -34, -34, -34, -35, -35, -35, -36, -34, -32, -33, -35,
-36, -37, -35, -31, -31, -36, -38, -37, -36, -36, -29, -29, -37, -33, -34, -31,
-33, -32, -32, -32, -30, -30, -33, -31, -29, -29, -28, -29, -32, -32, -28, -27,
-29, -28, -27, -25, -26, -28, -30, -30, -29, -28, -26, -25, -27, -26, -26, -25,
-24, -23, -23, -26, -24, -22, -24, -23, -24, -23, -21, -20, -23, -21, -20, -20,
-18, -18, -20, -18, -17, -15, -21, -12, };

#endif /* AKWF_1088_512_H_ */
