/*
��#define������ϰ
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)

int main() {
	int num;
	int flag = 1;
	//num < 20 ������ֹ
	while (flag) {
		scanf("%d", &num);
		printf("������ƽ��Ϊ %d \n", SQ(num));
		if (num >= 20)
			flag = TRUE;
		else
			flag = FALSE;
	}

	return 0;
}
