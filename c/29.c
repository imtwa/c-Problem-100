/*
给一个不多于5位的正整数
要求：一、求它是几位数，二、逆序打印出各位数字。
*/
#include <stdio.h>

void run1(int n){
	int k=0;
	while(n){
		printf("%d",n%10);
		n/=10;
		k++;
	}
	printf("这是%d位数",k);
}

void run2(int n){
	int k=0,a=n;
	while(n){
		n/=10;
		k++;
	}
	printf("这是%d位数,逆序为",k);
	while(a){
		printf("%d",a%10);
		a/=10;
	} 
}

int main( ) {
	int n;
	scanf("%d",&n);
	run2(n);
}
