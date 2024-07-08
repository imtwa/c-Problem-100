/*
题目：打印楼梯，同时在楼梯上方打印两个笑脸。
*/

#include <stdio.h>
int main() {
	int i,j;
	printf("①①\n");
	for(i=1; i<11; i++) {
		for(j=1; j<=i; j++) {
			printf("■■");
		}
		printf("\n");
	}

	return 0;
}
