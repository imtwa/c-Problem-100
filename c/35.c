/*
�ַ�����ת���罫�ַ��� "abcde" ��תΪ "edcba"��
*/
 
#include <stdio.h>
#include <string.h>
 
char* rvs(char *s){
	int i=0,j=strlen(s)-1;
	while(i<j){
		char c=s[i];
		s[i]=s[j];
		s[j]=c;
		i++;
		j--;
	}
	return s;
} 
 
int main() {
	char s[10] = "abcde";
	rvs(s);
	printf("%s",s);
}
