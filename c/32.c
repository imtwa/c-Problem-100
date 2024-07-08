/*
删除一个字符串中的指定字母
如：字符串 "aca"，删除其中的 a 字母。
*/

#include <stdio.h>

// 删除字符串中指定字母函数
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
	char c = 'a';     	// 要删除的字母
	char s[10] = "aca";  // 目标字符串
	deleteCharacters(s, c);
	printf("%s\n", s);
	return 0;
}
