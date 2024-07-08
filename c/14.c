/*
将一个正整数分解质因数。例如：输入90，打印出90=2*3*3*5。
*/

#include <stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);
	
	printf("%d=",n);
	for(i=2; i<=n; i++) {
		while(n%i==0) {
			printf("%d",i);
			n/=i;
			// 如果不是最后一位 输出乘号 
			if(n!=1) printf("*");
		}
	}
	return 0;
}
