/*
一个偶数总能表示为两个素数之和。给出一个偶数，请把它分解成两个素数。
素数|质数的问题很重要呀！ 
重点代码是这一行：if(vis(i)&&vis(n-i)) 
*/

#include <stdio.h>

int vis(int n) {
	if(n<2)return 0;
	int i=2;
	for(i=2; i<n; i++) {
		if(n%i==0)return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++){
		if(vis(i)&&vis(n-i)){
			printf("%d = %d + %d\n",n,i,n-i);
		}
	}
	
	return 0;
} 
