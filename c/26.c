/*
利用递归方法求5!
*/

#include <stdio.h>

int fact(int n) {
	
	if(n==0) {
		return 1;
	}
	return n*fact(n-1);
}

int main() {
	int i;
	int fact(int);
	for(i=0; i<6; i++) {
		printf("%d!=%d\n",i,fact(i));
	}
}

