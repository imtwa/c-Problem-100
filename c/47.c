/*
对宏命令实现函数功能
*/

#include <stdio.h>
#define exchange(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里
int main() {
	int x = 5;
	int y = 10;
	printf("x=%d; y=%d\n", x, y);
	exchange(x, y);
	printf("x=%d; y=%d\n", x, y);
	return 0;
}
