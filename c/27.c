/*
���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
*/

#include <stdio.h>

void rvs(char *s){
	if(*s=='\0'){
		return;
	}
	rvs(s+1);
	printf("%c",*s);
} 

int main() {
	char s[10];
	scanf("%s",s);
	rvs(s);
}
