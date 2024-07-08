/*
学习使用register定义变量的方法。
*/
#include <stdio.h>

int main() {
	register int i;//将变量i存储在寄存器中 
	int sum = 0;
	for (i = 0; i <= 10; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}
