/*
�����������ļ�97.txt��98.txt,�����һ������ 
Ҫ����������ļ��е���Ϣ�ϲ��������һ�����ļ�C�С�
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fa,*fb,*fc;
	int i,j,k;
	char str[100],str1[100];
	char tem;
	if((fa=fopen("97.txt","r"))==NULL) { // 97.txt �ļ���Ҫ����
		printf("error: cannot open A file!\n");
		exit(0);
	}
	fgets(str,99,fa);
	fclose(fa);

	if((fb=fopen("98.txt","r"))==NULL) { // 98.txt �ļ���Ҫ����
		printf("error: cannot open B file!\n");
		exit(0);
	}
	fgets(str1,99,fb);
	fclose(fb);
	
	// ƴ�������ַ��� 
	strcat(str,str1);

	if((fc=fopen("99.txt","w"))==NULL) { // �ϲ�Ϊ 99.txt
		printf("error: cannot open C file!\n");
		exit(0);
	}
	fputs(str,fc);
	fclose(fc);

	return 0;
}
