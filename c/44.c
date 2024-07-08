/*
学习使用external的用法。（全局变量） 
*/
#include <stdio.h>
int a=2, b=2, c;

void add() {
	int a;
	a = 1;// 这里使用的是函数内部的a
	c = a + b;// 这里是1 + 2
}

int main() {
	add();
	printf("c = %d\n", c);
	return 0;
}
