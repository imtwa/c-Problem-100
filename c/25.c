/*
��1+2!+3!+...+20!�ĺ͡�
*/

#include <stdio.h>

int main() {
	int i;
	double sum=0,mix=1;
	for(i=1; i<=20; i++) {
		mix=mix*i;//mixΪ1! 2! 3!... 
		sum=sum+mix;
	}
	printf("%lf\n",sum);
}
