/*
��дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n
������nΪ����ʱ�����ú���1/1+1/3+...+1/n(����ָ�뺯��)��
�������ص���ָ�뺯����ʹ��
*/

#include <stdio.h>
double  evenumber(int n) {
	double s=0,a=0;
	int i;
	for(i=2; i<=n; i+=2) {
		a=(double)1/i;
		s+=a;
	}
	return s;
}
double  oddnumber(int n) {
	double s=0,a=0;
	int i;
	for(i=1; i<=n; i+=2) {
		a=(double)1/i;
		s+=a;
	}
	return s;
}

int main() {
	int n;
	double r;
	// �ص� ����ָ�뺯��д���������͡�ָ�롢����������� 
	double (*pfunc)(int);
	scanf("%d",&n);
	// ��ֵ���Ǻ����� 
	if(n%2==0) pfunc=evenumber;
	else pfunc=oddnumber;

	r=(*pfunc)(n);
	printf("%lf\n",r);

	return 0;
}

