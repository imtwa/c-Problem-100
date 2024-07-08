/*
	题目
	有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
*/

#include <stdio.h>

int p[4] = {1,2,3,4};
int a[4],visit[4];
int n = 4,z = 0;

void dfs(int s) {
	int i;
	// 打印
	if(s==n) {
		for(i=0; i<n-1; i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
		z++;
		return;
	}
	//递归调用 
	for(i=0; i<n; i++) {
		// 如果这个位置没有用过 
		if(!visit[i]) {
			visit[i]=1;
			// 赋值到a数组中 
			a[s]=p[i];
			// 递归下一个位置 
			dfs(s+1);
			// 递归结束释放该位置 
			visit[i]=0;
		}
	}
}

int main() {
	int i, j, k;

	// 使用dfs深度优先算法
//	dfs(0);

	// 使用三个变量作为下标 改变下标位置打印
	for (i = 0; i < n; i++)	{
		for (j = 0; j < n; j++)	{
			for (k = 0; k < n; k++) {
				if (p[i] != p[j] && p[i] != p[k] && p[j] != p[k]) {
					printf("%d %d %d\n", p[i], p[j], p[k]);
					z++;
				}
			}
		}
	}
	printf("共有%d个",z);


	return 0;
}
