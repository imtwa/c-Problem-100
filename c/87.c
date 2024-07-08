/*
回答结果（不运行程序，写出程序的结果）
提示 函数不传指针或者地址 都是形参 
*/

#include <stdio.h>

struct student {
	int x;
	char c;
} a;

void f(struct student b) {
	b.x = 555;
	b.c = 'w';
}

int main() {
	a.x = 4;
	a.c = 'b';
	f(a);
	printf("%d,%c", a.x, a.c);
	return 0;
}
