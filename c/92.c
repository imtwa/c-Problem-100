/*
��������time_t�ͱ���֮���ʱ����
*/
#include <stdio.h>
#include <time.h>

int main() {
	time_t start,end;
	int i;
	start=time(NULL);
	for(i=0; i<33000; i++) {
		printf("*");
	}
	end=time(NULL);

	// ���ִ��ʱ��
	// ��������time_t�ͱ���֮���ʱ����
	printf("ʱ����Ϊ %6.3f\n",difftime(end,start));
}
