/*
判断101到200之间的素数。
*/
#include <stdio.h>

int vis(int n){
	if(n<2)return 0;
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main() {
	int i,z=0;

	for (i=101; i<=200; i++) {
		if(vis(i)){
			z++;
			printf("%d ",i);
		}
	}
	printf("\n共%d个",z);
	return 0;
}
