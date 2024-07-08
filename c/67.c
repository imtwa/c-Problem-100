/*
输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
*/
#include <stdio.h>

// 交换函数 使用指针接收 需要传入地址 不然无法影响主函数中的变量 
void swap(int *a,int *b) {
	int t=*a;
	*a=*b;
	*b=t;
}

int main() {
	int p[10]={12,123,4,65,21};
	int i,n=5;
	// 寻找最大值最小值位置 
	int mmax = 0,mmin = 0;
	for(i=0; i<n; i++) {
		if(p[i]>p[mmax]) {
			mmax=i;
		}
		if(p[i]<p[mmin]) {
			mmin=i;
		}
	}
	// 交换
	swap(&p[0],&p[mmax]);
	swap(&p[n-1],&p[mmin]);
	// 打印 
	for(i=0; i<n; i++) {
		printf("%d ",p[i]);
	}

	return 0;
}
