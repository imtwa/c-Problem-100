/*
��ϰ�������á��ں����ڵ��ú�����
*/
#include <stdio.h>
void hello_world(void) {
	printf("Hello, world!\n");
}
void three_hellos(void) {
	int counter;
	for (counter = 1; counter <= 3; counter++)
		hello_world();/*���ô˺���*/
}
int main() {
	three_hellos();/*���ô˺���*/
	return 0;
}
