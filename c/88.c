/*
��ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������*��
�ڿ���ѭ����Ƕ�� , ʹ��while��for�������� 
*/

#include <stdio.h>
int main() {
	int n=7,i,m;
	// ѭ���ߴ� 
	while(n--){
		scanf("%d",&m);
		for(i=0;i<m;i++){
			printf("*");
		} 
		printf("\n");
	}
	return 0;
}
