/*
理解宏命令和函数的区别
*/

#include <stdio.h>
#define f(a,b) a*b
//正确做法
//#define f(a,b) (a)*(b) 

int f1(int a,int b){
	return a*b;
}
int main() {

	printf("%d\n", f(5+5,5+5));//得35 这里实际为5+5*5+5 宏定义只会实现替换 
	printf("%d\n", f1(5+5,5+5));//得100 自动加好 
	return 0;
}
