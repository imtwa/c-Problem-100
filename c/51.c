/*
学习使用按位与 &
0&0=0; 0&1=0; 1&0=0; 1&1=1 。
全1得1 
*/

#include <stdio.h>
int main() {
	int a,b;
	a=7;		//	7的二进制为0111 
	b=a&3;		// 	3的二进制为0011 &得到0011(3)
	printf("a & b(decimal) 为 %d \n",b);
	b&=0;		//  0000&0011 = 0000
	printf("a & b(decimal) 为 %d \n",b);
	return 0;
}
