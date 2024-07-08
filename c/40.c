/*
将一个数组逆序后输出。
*/

#include <stdio.h>
#define N 10
int main() {
	int a[N]= {0,1,2,3,4,5,6,7,8,9};
	int i,j,t;
	printf("原始数组是:\n");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	for(i=0,j=N-1; i<j; i++,j--) {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("\n逆序后的数组:\n");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
