/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/
#include <stdio.h>
int main() {
	float h=100,s=0;
	int i;

	for(i=1; i<=10; i++) {
		if(i==1) {
			s=s+h;
		} else {
			s=s+2*h;
		}
		h=h/2;

		printf("第%d次落地时，共经过%f米，第%d次反弹高%f米\n",i,s,i,h);

	}

	return 0;
}
