/*
��ӡ�����е�"ˮ�ɻ���"
��ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ�������
���磺153��һ��"ˮ�ɻ���"
��Ϊ153 = 1�����η���5�����η���3�����η���
*/

#include <stdio.h>

int vis(int n){
	int x,y,z;
	// ȡ����λ 
	x=n%10;
	y=n/10%10;
	z=n/100%10;
	return n==x*x*x+y*y*y+z*z*z;
}

// ѭ������ 
int vis1(int n){
	int z=0,k=n;
	while(n){
		// ȡ�����λ 
		int t=n%10;
		z+=t*t*t;
		// ȥ�����λ 
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
