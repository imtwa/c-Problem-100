/*
学习static定义静态变量的用法。
*/

#include <stdio.h>

void f() {
	int i = 0;
	static int si = 0;
	i++;
	si++;
	printf("i=%d\n", i);
	printf("static si = %d\n", si);
}

int main() {
	int i;
	for (i = 0; i < 4; i++) {
		f();
	}
	return 0;
}

