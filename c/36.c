/*
��100֮�ڵ�������
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
	int i,z=0;
	for (i=0; i<=100; i++) {
		if(vis(i)) {
			z++;
			printf("%d ",i);
		}
	}
	printf("\n��%d��",z);
	return 0;
}
