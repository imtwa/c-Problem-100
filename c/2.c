/*
��Ŀ��
��ҵ���ŵĽ������������ɡ�
����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
�Ӽ������뵱������I����Ӧ���Ž���������
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
	// �ּ��뽱�������
	int p[10] = {0,10,20,40,60,100};
	double b[10] = {0.1,0.075,0.05,0.03,0.015,0.01};
	int i,k = 0;
	double bonus = 0.0;
	// ��õ�ǰ�������ĸ��ȼ�
	for(i=0; i<6; i++) {
		if(profit<=p[i])break;
	}
	k = i-1;
	
	// �Ӹߵ���ͼ������ 
	for(i=k; i>=0; i--) {
		// ��ȡ��ÿ���ȼ��Ľ���� 
		int z = profit - p[i];
		// ����õȼ������ 
		bonus += z*b[i];
		// ��ȥ��һ�ȼ����� 
		profit -= z;
	}
	return bonus;
}

int main() {
	double profit;
	printf("�����뵱������");
	scanf("%lf", &profit);

//	double bonus = calculate_bonus(profit);
	double bonus = calc(profit);
	printf("Ӧ���Ž�������Ϊ��%.2lf\n", bonus);

	return 0;
}
