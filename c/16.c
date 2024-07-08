/*
��������������m��n���������Լ������С��������
*/
#include <stdio.h>

//��ͨ�㷨���
void run(int n,int m) {
	int i;
	for(i=n; i>=1; i--) {
		if(n%i==0&&m%i==0) {
			printf("gcd=%d\n",i);
			break;
		}
	}
	
	for(i=n; i<=n*m; i++) {
		if(i%n==0&&i%m==0) {
			printf("lcm=%d\n",i);
			break;
		}
	}
}

//շת��������
void run1(int n,int m) {
	int t,r,a=n,b=m;
	//Ϊ��ȷ���Ǵ�����С��
	if (m<n) {
		t=m;
		m=n;
		n=t;
	}
	//շת���
	while((m%n)!=0) {
		r=m%n;
		m=n;
		n=r;
	};

	int gcd = n;
	int lcm = a*b/gcd;
	printf("gcd=%d\nlcm=%d",gcd,lcm);
}

// λ�������
void run2(int x, int y) {
	int a=x,b=y;
	/*
	gcd(a,b) = gcd(b,a mod b)
	#��������^�������a^a=0��a^0=a��������Ǵ���������
	x1=x%y;
	y1=y^x1=y^(x%y)
	x2=x1^y1=(x%y)^y^(x%y)=y
	y2=y1^x2=y^(x%y)^y=x%y
	����
	x'=y, y'=x%y
	gcd(x,y) = gcd(y,x%y) = gcd(x',y')
	*/
	while(y^=x^=y^=x%=y);

	int gcd = x;
	int lcm = a*b/gcd;
	printf("gcd=%d\nlcm=%d",gcd,lcm);
}

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	run(n,m);
	return 0;
}
