/*
�ش����������г���д������Ľ����
��ʾ ��������ָ����ߵ�ַ �����β� 
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
