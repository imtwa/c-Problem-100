/*
ѧϰʹ�ð�λ�� &
0&0=0; 0&1=0; 1&0=0; 1&1=1 ��
ȫ1��1 
*/

#include <stdio.h>
int main() {
	int a,b;
	a=7;		//	7�Ķ�����Ϊ0111 
	b=a&3;		// 	3�Ķ�����Ϊ0011 &�õ�0011(3)
	printf("a & b(decimal) Ϊ %d \n",b);
	b&=0;		//  0000&0011 = 0000
	printf("a & b(decimal) Ϊ %d \n",b);
	return 0;
}
