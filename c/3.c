/*
��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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
