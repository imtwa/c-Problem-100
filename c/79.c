/*
×Ö·û´®ÅÅÐò
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gg(const void *x,const void *y) {
	char **a = x;
	char **b = y;
	return strcmp(a,b);
}

int main() {
	int i,n=5;
	char p[][10] = {"man","woman","girl","boy","sister"};
	qsort(p,n,sizeof(p[0]),gg);
	for(i=0; i<n; i++) {
		printf("%s\n",p[i]);
	}

	return 0;
}
