/*
һ�������ǡ�õ�������������֮�ͣ�������ͳ�Ϊ"����"��
����6=1��2��3������ҳ�1000���ڵ�����������
*/

#include <stdio.h>

int main() {
	int i,j,n;
	int a[256];
	for(i=2; i<=1000; i++) {
		int sum=0,k=0;
		for(j=1; j<i; j++) {
			if(i%j==0) {
				sum+=j;
				a[k++]=j;
			}
		}
		if(i==sum) {
			printf("%d=%d",i,a[0]);
			for(n=1; n<k; n++)
				printf("+%d",a[n]);
			printf("\n");
		}

	}
	return 0;
}
