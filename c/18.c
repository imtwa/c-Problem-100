/*
��s=a+aa+aaa+aaaa+aa...a��ֵ
����a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)
����������ɼ��̿��ơ�
*/

#include <stdio.h>
int main() {
	int z=0,a=2,n,t;
	scanf("%d",&n);

	while(n) {
		t+=a;// �����t��ѭ���б����2 22 222 
		z+=t;
		a=a*10;
		n--;
	}
	printf("a+aa+...=%d\n",z);
	return 0;
}
