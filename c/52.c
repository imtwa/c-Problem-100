/*
学习使用按位或 |
0|0=0; 0|1=1; 1|0=1; 1|1=1 。
有1得1 
*/
#include <stdio.h>
int main() {
	int a,b;
	a=7;
	b=a|3;		//0111|0011 = 0111
	printf("b 的值为 %d \n",b);
	b|=0;		//0111|0000 = 0111
	printf("b 的值为 %d \n",b);
	return 0;
}
