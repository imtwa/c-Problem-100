/*
题目：输入三个整数x,y,z，把这三个数由小到大输出。
*/
#include <stdio.h>
#include <stdlib.h>

void run(int x,int y,int z) {
	int t;
	if (x > y) {
		t = x;
		x = y;
		y = t;
	}
	if (x > z) {
		t = x;
		x = z;
		z = t;
	}
	if (y > z) {
		t = y;
		y = z;
		z = t;
	}
	printf("%d %d %d", x, y, z);
}

int gg(const void* x,const void *y) {
	//如果需要从大到小排序则写成return *(int *)y-*(int *)x;
	return *(int *)x-*(int *)y;
}

int main() {
	int p[10];
	int i;
	for(i=0; i<3; i++) {
		scanf("%d",p+i);
	}
	
//	run(p[0],p[1],p[2]);

	//自带排序函数 在头文件<stdlib.h>中
	qsort(p,3,sizeof(p[0]),gg);
	for(i=0; i<3; i++) {
		printf("%d ",p[i]);
	}

	return 0;
}
