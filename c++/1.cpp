/*
	��Ŀ
	��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
*/

#include <iostream>
#include <algorithm>
using namespace std;

int p[4] = {1,2,3,4};
int a[4],visit[4];
int n = 4,z = 0;

void dfs(int s) {
	int i;
	// ��ӡ
	if(s==n) {
		for(i=0; i<n-1; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
		z++;
		return;
	}
	//�ݹ���� 
	for(i=0; i<n; i++) {
		// ������λ��û���ù� 
		if(!visit[i]) {
			visit[i]=1;
			// ��ֵ��a������ 
			a[s]=p[i];
			// �ݹ���һ��λ�� 
			dfs(s+1);
			// �ݹ�����ͷŸ�λ�� 
			visit[i]=0;
		}
	}
}

int main() {
	// ����dfs������������㷨 
//	dfs(0);
	
	// ʹ�� algorithm�㷨���е�ȫ���к��� 
	do {
		cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
		z++;
	} while(next_permutation(p,p+4));
	
	cout<<"����"<<z<<"��"<<endl; 
	
	return 0;
}
