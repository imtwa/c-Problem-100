/*
�ж�һ����������������9��ɵ��������磺
����13������6��9��ɵ���9999994
*/

#include <stdio.h>
int main() {
	int p,i=0;
	int sum=9;
	scanf("%d",&p);
	while(++i) {
		if(sum%p==0)break;
		else sum=sum*10+9;
	}

	printf("����%d������%d��9��ɵ���%ld\n",p,i,sum);
	return 0;
}
