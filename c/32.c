/*
ɾ��һ���ַ����е�ָ����ĸ
�磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
*/

#include <stdio.h>

// ɾ���ַ�����ָ����ĸ����
char* deleteCharacters(char * str, char charSet) {
	int i,j=0;
	for(i = 0; str[i]!='\0'; i++) {
		if(str[i]!=charSet) {
			str[j++]=str[i];
		}
	}
	str[j] = '\0';
	return str;
}

int main() {
	char c = 'a';     	// Ҫɾ������ĸ
	char s[10] = "aca";  // Ŀ���ַ���
	deleteCharacters(s, c);
	printf("%s\n", s);
	return 0;
}
