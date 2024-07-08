/*
从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"98.txt"中保存。
fprintf(fp,"%s",str);
fp为文件 %s输出格式 str是字符串 这样就将str的内容以字符串的形式存入了文件中
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE*fp=NULL;
	char str[50];
	int i,len;
	printf("输入一个字符串：\n");
	gets(str);
	len=strlen(str);
	// 小写转大写 这里用到ASCII值
	for(i=0; i<len; i++) {
		if(str[i]<='z'&&str[i]>='a')
			str[i]-=32;
	}
	if((fp=fopen("98.txt","w"))==NULL) {
		printf("error: cannot open file!\n");
		exit(0);
	}

	fprintf(fp,"%s",str);
	fclose(fp);

	return 0;
}
