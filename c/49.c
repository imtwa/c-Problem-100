/*
#if #ifdef��#ifndef���ۺ�Ӧ��
*/

#include <stdio.h>
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
int main() {
	int a = 10, b = 20;
#ifdef MAX
	printf("w �� %d\n", MAXIMUM(a, b));
#else
	printf("w С %d\n", MINIMUM(a, b));
#endif

#ifndef MIN
	printf("x С %d\n", MINIMUM(a, b));
#else
	printf("x �� %d\n", MAXIMUM(a, b));
#endif

#undef MAX
#ifdef MAX
	printf("y �� %d\n", MAXIMUM(a, b));
#else
	printf("y С %d\n", MINIMUM(a, b));
#endif

#define MIN
#ifndef MIN
	printf("z С %d\n", MINIMUM(a, b));
#else
	printf("z �� %d\n", MAXIMUM(a, b));
#endif

	return 0;
}
