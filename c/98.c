/*
�Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ�"98.txt"�б��档
fprintf(fp,"%s",str);
fpΪ�ļ� %s�����ʽ str���ַ��� �����ͽ�str���������ַ�������ʽ�������ļ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE*fp=NULL;
	char str[50];
	int i,len;
	printf("����һ���ַ�����\n");
	gets(str);
	len=strlen(str);
	// Сдת��д �����õ�ASCIIֵ
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
