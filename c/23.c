/*
打印出如下图案（菱形）。
*/

#include <stdio.h>
#include <stdlib.h>

void run(int n) {
	int i,j;
	for( i=-n/2; i<=n/2; i++) {
		for(j=1; j<=abs(i); j++)
			printf(" ");
		for(j=1; j<=n-abs(i*2); j++)
			printf("*");
		printf("\n");
	}
}

void run1(int n) {
	int i,j,k;
	for(i=1; i<=n/2+1; i++) {
		for(j=1; j<=n/2+1-i; j++)
			printf(" ");
		for(k=1; k<=2*i-1; k++)
			printf("*");
		printf("\n");
	}
	for(i=1; i<=n/2; i++) {
		for(j=1; j<=i; j++)
			printf(" ");
		for(k=1; k<=n-2*i; k++)
			printf("*");
		printf("\n");
	}
}

int main() {
	run(7);
//	run1(7);

}
