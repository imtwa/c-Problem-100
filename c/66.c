/*
输入3个数a,b,c，按大小顺序输出。
*/
#include <stdio.h>
#include <stdlib.h>
 
int gg(const void* x,const void *y) {
	//如果需要从大到小排序则写成return *(int *)y-*(int *)x;
	return *(int *)x-*(int *)y;
}
 
int main() {
	int p[10];
	int i;
	for(i=0; i<3; i++) {
		scanf("%d",&p[i]);
	}
 
	//自带排序函数 在头文件<stdlib.h>中
	qsort(p,3,sizeof(p[0]),gg);
	for(i=0; i<3; i++) {
		printf("%d ",p[i]);
	}
 
	return 0;
}
