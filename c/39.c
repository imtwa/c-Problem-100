/*
��һ���Ѿ��ź�������顣
������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
*/

#include <stdio.h>
int main() {
	int a[11]= {1,4,6,9,13,16,19,28,40,100};
	int i,j,num=10;

	printf("ԭʼ������:\n");
	for(i=0; i<10; i++) {
		printf("%4d",a[i]);
	}
	printf("\n����һ���µ�����: %d\n",num);

	// �ҵ�λ��
	for(i=0; i<10; i++) {
		if(num<a[i])break;
	}
	// ����λ��
	for(j=10; j>=i; j--) {
		a[j]=a[j-1];
	}
	// ����
	a[i]=num;
	
	printf("������������:\n");
	for(i=0; i<11; i++) {
		printf("%4d",a[i]);
	}

	return 0;
}
