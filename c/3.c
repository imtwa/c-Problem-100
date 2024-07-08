/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/

#include <stdio.h>
#include <math.h>

int main() {
	int i = -101;
	double a = -1, b = -1;

	while (i<1e+8) {
		a = sqrt(i + 100);
		b = sqrt(i + 100 + 168);

		if (a == (int)a && b == (int)b) {
			printf("%d\n", i);
		}

		i++;
	}

	return 0;
}
