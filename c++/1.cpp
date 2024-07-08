/*
	题目
	有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
*/

#include <iostream>
#include <algorithm>
using namespace std;

int p[4] = {1,2,3,4};
int a[4],visit[4];
int n = 4,z = 0;

void dfs(int s) {
	int i;
	// 打印
	if(s==n) {
		for(i=0; i<n-1; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
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
	// 调用dfs深度优先搜索算法 
//	dfs(0);
	
	// 使用 algorithm算法库中的全排列函数 
	do {
		cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
		z++;
	} while(next_permutation(p,p+4));
	
	cout<<"共有"<<z<<"个"<<endl; 
	
	return 0;
}
