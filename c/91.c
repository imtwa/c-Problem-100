/*
��ӡ����ʱ��
*/
#include <stdio.h>
#include <time.h>

int main () {
	time_t rawtime;
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "��ǰ����ʱ��Ϊ: %s", asctime (timeinfo) );

	return 0;
}
