/*
有5个人坐在一起，问第五个人多少岁？
他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。
问第2个人，说比第一个人大两岁。
最后问第一个人，他说是10岁。请问第五个人多大？
*/

#include <stdio.h>

int age1(int n) {
	if(n==1){
		return 10;
	}
	return age1(n-1)+2;
}
int age2(){
	int i,z=10;
	for(i=1;i<5;i++){
		printf("第%d个人%d岁\n",i,z);
		z+=2;
	}
	return z;
}
int main() {
	printf("第%d个人%d岁\n",5,age1(5));
}
