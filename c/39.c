/*
有一个已经排好序的数组。
现输入一个数，要求按原来的规律将它插入数组中。
*/

#include <stdio.h>
int main() {
	int a[11]= {1,4,6,9,13,16,19,28,40,100};
	int i,j,num=10;

	printf("原始数组是:\n");
	for(i=0; i<10; i++) {
		printf("%4d",a[i]);
	}
	printf("\n插入一个新的数字: %d\n",num);

	// 找到位置
	for(i=0; i<10; i++) {
		if(num<a[i])break;
	}
	// 后移位置
	for(j=10; j>=i; j--) {
		a[j]=a[j-1];
	}
	// 插入
	a[i]=num;
	
	printf("插入后的数组是:\n");
	for(i=0; i<11; i++) {
		printf("%4d",a[i]);
	}

	return 0;
}
