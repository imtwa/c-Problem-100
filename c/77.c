/*
指向指针的指针 
*/
#include <stdio.h>
int main() {
	// 对于字符串数组有两种写法 
//	char s[][10]= {"man","woman","girl","boy","sister"};
	char *s[] = {"man","woman","girl","boy","sister"};
	char **q;
	int i;
	for(i=0; i<5; i++) {
		q=s[i];
		printf("%s\n",q);
	}
	return 0;
}
