/*
计算字符串中子串出现的次数。
输入两个字符串，以回车隔开，母串在前，子串在后：
abca
a
输出：2
*/

#include <stdio.h>
#include <string.h>

int subString(char *str,char *sub) {
	int count = 0, i, j;
	for (i = 0; i < strlen(str); i++) {
		for (j = 0; j < strlen(sub); j++) {
			if(str[i + j] != sub[j]) {
				break; // 出现了不同字符就退出循环
			}
		}
		if (j == strlen(sub)) {
			count++; // 退出循环后若j的值等于子串的长度，则存在子串
		}
	}
	return count;
}

int main(void) {
	char str[100],sub[50];
	printf("请输入母串：");
	gets(str);
	printf("请输入子串：");
	gets(sub);
	printf("%d", subString(str,sub));
	return 0;
}
