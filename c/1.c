/*
	��Ŀ
	��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
*/

#include <stdio.h>

int p[4] = {1,2,3,4};
int a[4],visit[4];
int n = 4,z = 0;

void dfs(int s) {
	int i;
	// ��ӡ
	if(s==n) {
		for(i=0; i<n-1; i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
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
	int i, j, k;

	// ʹ��dfs��������㷨
//	dfs(0);

	// ʹ������������Ϊ�±� �ı��±�λ�ô�ӡ
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
	printf("����%d��",z);


	return 0;
}
