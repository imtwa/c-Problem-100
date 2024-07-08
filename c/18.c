/*
求s=a+aa+aaa+aaaa+aa...a的值
其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)
几个数相加由键盘控制。
*/

#include <stdio.h>
int main() {
	int z=0,a=2,n,t;
	scanf("%d",&n);

	while(n) {
		t+=a;// 这里的t在循环中变成了2 22 222 
		z+=t;
		a=a*10;
		n--;
	}
	printf("a+aa+...=%d\n",z);
	return 0;
}
