/*
简单的结构体应用实例。（实现结构体的赋值）
*/
#include <stdio.h>

struct programming {
	float constant;
	char *pointer;
};

int main() {
	struct programming variable;
	char string[] = "指针原来是套娃的";

	variable.constant = 1.23;
	variable.pointer = string;

	printf("%f\n", variable.constant);
	printf("%s\n", variable.pointer);

	return 0;
}
