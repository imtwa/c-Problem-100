/*
�������ַ������ӡ�
��Ϊc���Բ�����c++��stringһ��ֱ�Ӹ�ֵ��������Ҫ������ֵ
˼·һ ʹ��string���strcat����ƴ��
˼·�� ʹ���Զ��庯��ƴ��
ע�� ����Ҫ��֤�ڴ���������ַ���
*/

#include <stdio.h>
#include <stdlib.h>// malloc�����ڴ溯����stblib.h���� 
#include <string.h>
// �Զ���ʵ�� strcat ���� 
void charcat(char *str,char *str1) {
	while(*str!='\0')str++;
	while(*str1!='\0') {
		*str = *str1;
		str++;
		str1++;
	}
	// ע��������\0
	*str = '\0';
}

char* strconnect(char *str1,char *str2) {
	char *str;
	// ��Ҫ��֤�ڴ���������ַ���
	str=(char*)malloc(strlen(str1)+strlen(str2)+1);
	str[0] = '\0';
//	strcat(str,str1);
//	strcat(str,str2);
	charcat(str,str1);
	charcat(str,str2);
	return str;
}

int main() {
	char str1[20],str2[20];
	char *str;
	scanf("%s%s", str1, str2);
	str = strconnect(str1,str2);
	puts(str);
	
	return 0;
}

