/*
����3����a,b,c������С˳�������
*/
#include <stdio.h>
#include <stdlib.h>
 
int gg(const void* x,const void *y) {
	//�����Ҫ�Ӵ�С������д��return *(int *)y-*(int *)x;
	return *(int *)x-*(int *)y;
}
 
int main() {
	int p[10];
	int i;
	for(i=0; i<3; i++) {
		scanf("%d",&p[i]);
	}
 
	//�Դ������� ��ͷ�ļ�<stdlib.h>��
	qsort(p,3,sizeof(p[0]),gg);
	for(i=0; i<3; i++) {
		printf("%d ",p[i]);
	}
 
	return 0;
}
