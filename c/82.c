/*
�˽���ת��Ϊʮ���ơ�
˼·һ ʹ�ð�Ȩչ����ʮ����
˼·�� �����ַ���ʹ�ð�Ȩչ��
*/
#include <stdio.h>

void run1() {
	int n,k=1,z=0;
	scanf("%d",&n);
	while(n) {
		z+=n%10*k;
		k*=8;
		n/=10;
	}
	printf("%d",z);
}
void run2() {
	int i,z=0;
	char s[20];
	gets(s);
	while(s[i]!='\0') {
		z=z*8+s[i]-'0';
		i++;
	}
	printf("%d",z);
}
int main() {
	run1();
//	run2();

	return 0;
}
