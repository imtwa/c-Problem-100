/*
判断一个素数能整除几个9组成的数，例如：
素数13能整除6个9组成的数9999994
*/

#include <stdio.h>
int main() {
	int p,i=0;
	int sum=9;
	scanf("%d",&p);
	while(++i) {
		if(sum%p==0)break;
		else sum=sum*10+9;
	}

	printf("素数%d能整除%d个9组成的数%ld\n",p,i,sum);
	return 0;
}
