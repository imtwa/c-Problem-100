/*
��һ��������5λ��������
Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
*/
#include <stdio.h>

void run1(int n){
	int k=0;
	while(n){
		printf("%d",n%10);
		n/=10;
		k++;
	}
	printf("����%dλ��",k);
}

void run2(int n){
	int k=0,a=n;
	while(n){
		n/=10;
		k++;
	}
	printf("����%dλ��,����Ϊ",k);
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
