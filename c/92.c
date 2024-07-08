/*
返回两个time_t型变量之间的时间间隔
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

	// 输出执行时间
	// 返回两个time_t型变量之间的时间间隔
	printf("时间间隔为 %6.3f\n",difftime(end,start));
}
