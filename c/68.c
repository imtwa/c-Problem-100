/*
��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m������
*/

#include <stdio.h>

int main() {
	int i,j=0;
	int x,n;
	int p[1007]= {0};

	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&p[i]);
	}
	scanf("%d",&x);

	for(i=x+n-1; i>=0; i--) { //ȫ���ƶ�xλ
		p[i]=p[i-x];
	}
	
	//������Ƶ�ǰ���� 
	j=n;
	for(i=0; i<x; i++,j++) {
		p[i]=p[j];
	}

	for(i=0; i<n; i++) {
		printf("%d ",p[i]);
	}

	return 0;
}
