/*
ѧϰʹ��register��������ķ�����
*/
#include <stdio.h>

int main() {
	register int i;//������i�洢�ڼĴ����� 
	int sum = 0;
	for (i = 0; i <= 10; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}
