/*
编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n
当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
这道题的重点是指针函数的使用
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
	// 重点 声明指针函数写法函数类型、指针、所需参数类型 
	double (*pfunc)(int);
	scanf("%d",&n);
	// 赋值的是函数名 
	if(n%2==0) pfunc=evenumber;
	else pfunc=oddnumber;

	r=(*pfunc)(n);
	printf("%lf\n",r);

	return 0;
}

