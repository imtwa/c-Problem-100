/*
��Ŀ����������������̡���8��*8�У�
*/

#include <stdio.h>
int main() {
	int i = 8;
	while(i--) {
		int j = 8;
		while(j--) {
			if((i + j)&1) {
				printf("  ");
			} else {
				printf("��");
			}
		}
		printf("\n");
	}

	return 0;
}
