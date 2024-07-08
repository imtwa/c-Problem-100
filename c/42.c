/*
学习使用auto定义变量的用法。
*/

#include <stdio.h>

int main() {
	int cnt = 5,i;
	for (i = 0; i < 4; i++) {
		printf("cnt 变量为 %d\n", cnt);
		cnt++;
		{
			// auto关键字用于声明一个变量的存储类型为自动存储类型
			// 可以简化变量声明，让编译器自己确定变量的存储类型 
			auto cnt = 1;
			// 优先使用生存域小的变量
			// 下一次循环该变量被重新定义
			printf("内置模块 cnt 变量为 %d\n", cnt);
			cnt++;
		}
	}

	return 0;
}
