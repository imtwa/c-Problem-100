/*
���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ�
�����һ����ĸһ����������жϵڶ�����ĸ��
*/

#include <stdio.h>

int main() {
	char i,j;
	printf("�������һ����ĸ:\n");
	scanf("%c",&i);
	// scanf("%c",&j);�����⣬�ڶ����Ƕ����һ�����з���������������ַ�
	// �����Ҫ��һ��getchar() �Ե����з�
	getchar();
	switch(i) {
		case 'm':
			printf("monday\n");
			break;
		case 'w':
			printf("wednesday\n");
			break;
		case 'f':
			printf("friday\n");
			break;
		case 't':
			printf("��������һ����ĸ\n");
			scanf("%c",&j);
			if (j=='u') {
				printf("tuesday\n");
				break;
			}
			if (j=='h') {
				printf("thursday\n");
				break;
			}
		case 's':
			printf("��������һ����ĸ\n");
			scanf("%c",&j);
			if (j=='a') {
				printf("saturday\n");
				break;
			}
			if (j=='u') {
				printf("sunday\n");
				break;
			}
		default :
			printf("error\n");
			break;
	}
	return 0;
}
