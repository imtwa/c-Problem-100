/*
写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
*/

#include <stdio.h>
#include <string.h>
//求字符串长度
//字符串最后默认自带\0作为结束 
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
	// 使用string.h库里面的strlen函数 
//	len=strlen(str);
	// 自己完成函数 
	len=length(str);
	printf("%d",len);
}

