/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
*/

#include <stdio.h>

int main() {
	int i;
	int n,x,y;
	int z=0;

	printf("请输入年份\n");
	scanf("%d",&n);
	printf("请输入月份\n");
	scanf("%d",&x);
	printf("请输入日期\n");
	scanf("%d",&y);

	for(i=1; i<x; i++) {
		//计算2月的天数
		if(i==2) {
			if(n%400 == 0 || n%4 == 0 && n%100 != 0) {// 判断闰年
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

	printf("%d年%d月%d号，是该年的第%d天",n,x,y,z);

	return 0;
}

