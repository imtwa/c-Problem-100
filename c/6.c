/*
��Ŀ����*�������ĸC��ͼ����
*/
#include<stdio.h>

void run() {
	printf(" ***\n");
	printf("*\n");
	printf("*\n");
	printf(" ***\n");
}
void run2() {
	int i, j;
	int n = 10; // ����ͼ���Ĵ�С
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0) {
				printf("*"); // ��ӡ�߿�
			} else {
				printf(" "); // ��ӡ�ո�
			}
		}
		printf("\n"); // ����
	}
}

int main() {
//	run();
	run2();

	return 0;
}

