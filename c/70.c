/*
дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�
*/

#include <stdio.h>
#include <string.h>
//���ַ�������
//�ַ������Ĭ���Դ�\0��Ϊ���� 
int length(char *s) {
	int i=0;
	while(*s++!='\0') {
		i++;
	}
	return i;
}

int main() {
	int len;
	char str[20];
	scanf("%s",str);
	// ʹ��string.h�������strlen���� 
//	len=strlen(str);
	// �Լ���ɺ��� 
	len=length(str);
	printf("%d",len);
}

