/*
打印出所有的"水仙花数"
所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
例如：153是一个"水仙花数"
因为153 = 1的三次方＋5的三次方＋3的三次方。
*/

#include <stdio.h>

int vis(int n){
	int x,y,z;
	// 取出三位 
	x=n%10;
	y=n/10%10;
	z=n/100%10;
	return n==x*x*x+y*y*y+z*z*z;
}

// 循环做法 
int vis1(int n){
	int z=0,k=n;
	while(n){
		// 取出最低位 
		int t=n%10;
		z+=t*t*t;
		// 去除最低位 
		n/=10;
	}
	return k==z;
}

int main() {
	int i,x,y,z;
	for(i=100; i<1000; i++) {
		if(vis1(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}
