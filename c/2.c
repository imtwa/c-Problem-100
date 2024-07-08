/*
题目：
企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？
*/

#include <stdio.h>

double calculate_bonus(double profit) {
	double bonus = 0.0;

	if (profit <= 10) {
		bonus = profit * 0.1;
	} else if (profit <= 20) {
		bonus = 10 * 0.1 + (profit - 10) * 0.075;
	} else if (profit <= 40) {
		bonus = 10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05;
	} else if (profit <= 60) {
		bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
	} else if (profit <= 100) {
		bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
	} else {
		bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;
	}

	return bonus;
}

double calc(double profit) {
	// 分级与奖金提成率
	int p[10] = {0,10,20,40,60,100};
	double b[10] = {0.1,0.075,0.05,0.03,0.015,0.01};
	int i,k = 0;
	double bonus = 0.0;
	// 获得当前利润在哪个等级
	for(i=0; i<6; i++) {
		if(profit<=p[i])break;
	}
	k = i-1;
	
	// 从高到最低计算提成 
	for(i=k; i>=0; i--) {
		// 获取在每个等级的金额数 
		int z = profit - p[i];
		// 计算该等级的提成 
		bonus += z*b[i];
		// 减去上一等级内容 
		profit -= z;
	}
	return bonus;
}

int main() {
	double profit;
	printf("请输入当月利润：");
	scanf("%lf", &profit);

//	double bonus = calculate_bonus(profit);
	double bonus = calc(profit);
	printf("应发放奖金总数为：%.2lf\n", bonus);

	return 0;
}
