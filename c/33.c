/*
�ж�һ�������Ƿ�Ϊ��������������
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
	printf(vis(n)?"%d������":"%d��������",n);
	return 0;
}



