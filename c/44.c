/*
ѧϰʹ��external���÷�����ȫ�ֱ����� 
*/
#include <stdio.h>
int a=2, b=2, c;

void add() {
	int a;
	a = 1;// ����ʹ�õ��Ǻ����ڲ���a
	c = a + b;// ������1 + 2
}

int main() {
	add();
	printf("c = %d\n", c);
	return 0;
}
