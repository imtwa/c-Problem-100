/*
有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。
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

	for(i=x+n-1; i>=0; i--) { //全部移动x位
		p[i]=p[i-x];
	}
	
	//后面的移到前面来 
	j=n;
	for(i=0; i<x; i++,j++) {
		p[i]=p[j];
	}

	for(i=0; i<n; i++) {
		printf("%d ",p[i]);
	}

	return 0;
}
