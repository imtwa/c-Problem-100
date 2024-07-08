/*
有两个磁盘文件97.txt和98.txt,各存放一行文字 
要求把这两个文件中的信息合并，输出到一个新文件C中。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fa,*fb,*fc;
	int i,j,k;
	char str[100],str1[100];
	char tem;
	if((fa=fopen("97.txt","r"))==NULL) { // 97.txt 文件需要存在
		printf("error: cannot open A file!\n");
		exit(0);
	}
	fgets(str,99,fa);
	fclose(fa);

	if((fb=fopen("98.txt","r"))==NULL) { // 98.txt 文件需要存在
		printf("error: cannot open B file!\n");
		exit(0);
	}
	fgets(str1,99,fb);
	fclose(fb);
	
	// 拼接两个字符串 
	strcat(str,str1);

	if((fc=fopen("99.txt","w"))==NULL) { // 合并为 99.txt
		printf("error: cannot open C file!\n");
		exit(0);
	}
	fputs(str,fc);
	fclose(fc);

	return 0;
}
