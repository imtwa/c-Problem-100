/*
����һ�������������䷴ת�������
����һ ʹ��%10�õ����λ���� 
������ �����ַ�������ɵ�35���ַ�����ת 
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int m=0;
	while(n) {
		m*=10;		// ע����������λ�� 
		m+=n%10;
		n/=10;
	}
	printf("%d",m);

	return 0;
}