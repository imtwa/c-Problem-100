/*
ѧϰʹ��static����һ�÷�����
*/
#include <stdio.h>

int main() {
	int cnt = 5,i;
	for (i = 0; i < 4; i++) {
		printf("cnt ����Ϊ %d\n", cnt);
		cnt++;
		{
			static int cnt = 1;
			printf("����ģ�� cnt ����Ϊ %d\n", cnt);
			cnt++;
		}
	}

	return 0;
}
