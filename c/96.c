/*
�����ַ������Ӵ����ֵĴ�����
���������ַ������Իس�������ĸ����ǰ���Ӵ��ں�
abca
a
�����2
*/

#include <stdio.h>
#include <string.h>

int subString(char *str,char *sub) {
	int count = 0, i, j;
	for (i = 0; i < strlen(str); i++) {
		for (j = 0; j < strlen(sub); j++) {
			if(str[i + j] != sub[j]) {
				break; // �����˲�ͬ�ַ����˳�ѭ��
			}
		}
		if (j == strlen(sub)) {
			count++; // �˳�ѭ������j��ֵ�����Ӵ��ĳ��ȣ�������Ӵ�
		}
	}
	return count;
}

int main(void) {
	char str[100],sub[50];
	printf("������ĸ����");
	gets(str);
	printf("�������Ӵ���");
	gets(sub);
	printf("%d", subString(str,sub));
	return 0;
}
