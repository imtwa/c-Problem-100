/*
��������ͺ���������
*/

#include <stdio.h>
#define f(a,b) a*b
//��ȷ����
//#define f(a,b) (a)*(b) 

int f1(int a,int b){
	return a*b;
}
int main() {

	printf("%d\n", f(5+5,5+5));//��35 ����ʵ��Ϊ5+5*5+5 �궨��ֻ��ʵ���滻 
	printf("%d\n", f1(5+5,5+5));//��100 �Զ��Ӻ� 
	return 0;
}
