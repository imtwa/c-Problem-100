/*
题目：用*号输出字母C的图案。
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
	int n = 10; // 控制图案的大小
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0) {
				printf("*"); // 打印边框
			} else {
				printf(" "); // 打印空格
			}
		}
		printf("\n"); // 换行
	}
}

int main() {
//	run();
	run2();

	return 0;
}

