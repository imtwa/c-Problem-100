/*
读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的*。
在考察循环的嵌套 , 使用while和for都可以做 
*/

#include <stdio.h>
int main() {
	int n=7,i,m;
	// 循环七次 
	while(n--){
		scanf("%d",&m);
		for(i=0;i<m;i++){
			printf("*");
		} 
		printf("\n");
	}
	return 0;
}
