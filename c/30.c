/*
һ��5λ�����ж����ǲ��ǻ�������
��12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
*/

#include <stdio.h>
#include <string.h>

// �ж������Ƿ����
// 12321����Ҳ����12321
int vis1(int n) {
	int a=n,s=0;
	while(a) {
		s=s*10+a%10;
		a=a/10;
	}
	return n==s;
}
// �����ַ������
int vis2(char *s) {
	int i=0,j=strlen(s)-1;
	while(i<j) {
		if(s[i]!=s[j]) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int main() {
//	int n;
//	scanf("%d",&n);
//	printf(vis1(n)?"%d�ǻ�����":"%d���ǻ�����",n);

	char s[10];
	scanf("%s",s);
	printf(vis2(s)?"%s�ǻ�����":"%s���ǻ�����",s);
}
