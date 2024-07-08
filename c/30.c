/*
一个5位数，判断它是不是回文数。
即12321是回文数，个位与万位相同，十位与千位相同。
*/

#include <stdio.h>
#include <string.h>

// 判断数字是否回文
// 12321倒看也等于12321
int vis1(int n) {
	int a=n,s=0;
	while(a) {
		s=s*10+a%10;
		a=a/10;
	}
	return n==s;
}
// 当成字符串检测
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
//	printf(vis1(n)?"%d是回文数":"%d不是回文数",n);

	char s[10];
	scanf("%s",s);
	printf(vis2(s)?"%s是回文数":"%s不是回文数",s);
}
