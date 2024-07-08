/*
判断一个数字是否为质数（素数）。
*/

#include <stdio.h>

int vis(int n) {
	if(n<2)return 0;

	int i;
	for(i=2; i<n; i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	scanf("%d",&n);
	printf(vis(n)?"%d是素数":"%d不是素数",n);
	return 0;
}



