/*
��Ŀ����������ڹ����������̵�ͼ����
*/

#include <stdio.h>
int main() {
	int i = 0;
	int j = 0;
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++)
			if((i + j)&1) {
				printf("  ");
			} else {
				printf("��");
			}

		printf("\n");
	}
	return 0;
}

