/*
ָ��ָ���ָ�� 
*/
#include <stdio.h>
int main() {
	// �����ַ�������������д�� 
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
