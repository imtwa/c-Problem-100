/*
�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
*/
#include <stdio.h>

// �������� ʹ��ָ����� ��Ҫ�����ַ ��Ȼ�޷�Ӱ���������еı��� 
void swap(int *a,int *b) {
	int t=*a;
	*a=*b;
	*b=t;
}

int main() {
	int p[10]={12,123,4,65,21};
	int i,n=5;
	// Ѱ�����ֵ��Сֵλ�� 
	int mmax = 0,mmin = 0;
	for(i=0; i<n; i++) {
		if(p[i]>p[mmax]) {
			mmax=i;
		}
		if(p[i]<p[mmin]) {
			mmin=i;
		}
	}
	// ����
	swap(&p[0],&p[mmax]);
	swap(&p[n-1],&p[mmin]);
	// ��ӡ 
	for(i=0; i<n; i++) {
		printf("%d ",p[i]);
	}

	return 0;
}
