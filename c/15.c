/*
���������������Ƕ�ף�
ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ
60-89��֮�����B��ʾ
60�����µ���C��ʾ
*/

#include <stdio.h>
int main() {
	int score;
	char grade;
	scanf("%d",&score);
	grade = (score>=90) ? 'A' : ( (score>=60) ? 'B' : 'C' );
//	grade = score>=90 ? 'A' : score>=60 ? 'B' : 'C';
	printf("%c\n",grade);
	return 0;
}
