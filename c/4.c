/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
*/

#include <stdio.h>

int main() {
	int i;
	int n,x,y;
	int z=0;

	printf("���������\n");
	scanf("%d",&n);
	printf("�������·�\n");
	scanf("%d",&x);
	printf("����������\n");
	scanf("%d",&y);

	for(i=1; i<x; i++) {
		//����2�µ�����
		if(i==2) {
			if(n%400 == 0 || n%4 == 0 && n%100 != 0) {// �ж�����
				z+=29;
			} else {
				z+=28;
			}
		}

		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) {
			z+=31;
		} else if(i!=2) {
			z+=30;
		}
	}
	z+=y;

	printf("%d��%d��%d�ţ��Ǹ���ĵ�%d��",n,x,y,z);

	return 0;
}

