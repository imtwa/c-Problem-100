/*
��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...
���������е�ǰ20��֮�͡�
*/

#include <stdio.h>

int main() {
	int i,t;
	float sum=0;
	float a=2,b=1;
	for(i=1; i<=20; i++) {
		sum=sum+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%9.6f\n",sum);
}
