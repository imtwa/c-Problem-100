/*
输入一个整数，并将其反转后输出。
方法一 使用%10得到最低位数字 
方法二 看成字符串，变成第35题字符串反转 
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int m=0;
	while(n) {
		m*=10;		// 注意这条语句的位置 
		m+=n%10;
		n/=10;
	}
	printf("%d",m);

	return 0;
}
