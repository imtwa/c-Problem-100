/*
将两个字符串连接。
因为c语言不能像c++的string一样直接赋值，所以需要单个赋值
思路一 使用string库的strcat函数拼接
思路二 使用自定义函数拼接
注意 都需要保证内存大于两个字符串
*/

#include <stdio.h>
#include <stdlib.h>// malloc申请内存函数在stblib.h库中 
#include <string.h>
// 自定义实现 strcat 函数 
void charcat(char *str,char *str1) {
	while(*str!='\0')str++;
	while(*str1!='\0') {
		*str = *str1;
		str++;
		str1++;
	}
	// 注意最后加上\0
	*str = '\0';
}

char* strconnect(char *str1,char *str2) {
	char *str;
	// 需要保证内存大于两个字符串
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

