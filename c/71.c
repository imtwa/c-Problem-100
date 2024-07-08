/*
编写input()和output()函数输入，输出5个学生的数据记录（学生姓名、性别、年龄）
这道题考察结构体的使用，对于结构体来说普通变量使用.来取出，指针变量使用->
*/

#include <stdio.h>

// 定义学生结构体
struct Student {
	char name[50];
	char gender;
	int age;
};

// input函数用于输入学生数据
void input(struct Student students[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		scanf("%s", students[i].name);
		scanf("%c", &students[i].gender);
		scanf("%d", &students[i].age);
	}
}

// output函数用于输出学生数据
void output(struct Student students[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("姓名: %s\n", students[i].name);
		printf("性别: %c\n", students[i].gender);
		printf("年龄: %d\n", students[i].age);
	}
}

int main() {
	const int n = 5;
	struct Student students[n];
	// 输入学生数据
	input(students, n);
	// 输出学生数据
	output(students, n);

	return 0;
}
