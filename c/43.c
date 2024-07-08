/*
学习使用static的另一用法。　
*/
#include <stdio.h>

int main() {
	int cnt = 5,i;
	for (i = 0; i < 4; i++) {
		printf("cnt 变量为 %d\n", cnt);
		cnt++;
		{
			static int cnt = 1;
			printf("内置模块 cnt 变量为 %d\n", cnt);
			cnt++;
		}
	}

	return 0;
}
