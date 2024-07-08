/*
学习使用按位异或 ^
0^0=0; 0^1=1; 1^0=1; 1^1=0
相异得1
性质：a^0=a a^a=0 
*/
#include <stdio.h>
int main() {
	int a,b;
	a=7; 
	b=a^3;		//0111^0011 = 0100(4)
	printf("b 的值为 %d \n",b);
	b^=0;		//0100^0000 = 0100(4)
	printf("b 的值为 %d \n",b);
	return 0;
}
