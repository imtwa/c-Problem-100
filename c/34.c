/*
练习函数调用。在函数内调用函数。
*/
#include <stdio.h>
void hello_world(void) {
	printf("Hello, world!\n");
}
void three_hellos(void) {
	int counter;
	for (counter = 1; counter <= 3; counter++)
		hello_world();/*调用此函数*/
}
int main() {
	three_hellos();/*调用此函数*/
	return 0;
}
