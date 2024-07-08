/*
题目：输出国际象棋棋盘。（8行*8列）
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
				printf("■");
			}
		}
		printf("\n");
	}

	return 0;
}
