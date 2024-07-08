/*
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
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
