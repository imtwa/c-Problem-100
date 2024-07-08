/*
��дinput()��output()�������룬���5��ѧ�������ݼ�¼��ѧ���������Ա����䣩
����⿼��ṹ���ʹ�ã����ڽṹ����˵��ͨ����ʹ��.��ȡ����ָ�����ʹ��->
*/

#include <stdio.h>

// ����ѧ���ṹ��
struct Student {
	char name[50];
	char gender;
	int age;
};

// input������������ѧ������
void input(struct Student students[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		scanf("%s", students[i].name);
		scanf("%c", &students[i].gender);
		scanf("%d", &students[i].age);
	}
}

// output�����������ѧ������
void output(struct Student students[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("����: %s\n", students[i].name);
		printf("�Ա�: %c\n", students[i].gender);
		printf("����: %d\n", students[i].age);
	}
}

int main() {
	const int n = 5;
	struct Student students[n];
	// ����ѧ������
	input(students, n);
	// ���ѧ������
	output(students, n);

	return 0;
}
