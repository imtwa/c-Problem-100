/*
反向输出一个链表。　
*/

#include <stdio.h>
#include <malloc.h>

typedef struct LNode {
	int data;
	struct LNode *next;
} LNode;

LNode* createList(int n) {
	LNode *head, *p, *q;
	head = (LNode*)malloc(sizeof(LNode));
	printf("请输入第1个元素的值：");
	scanf("%d", &(head->data));
	head->next = NULL;

	q = head;
	int i;
	for (i = 1; i < n; ++i) {
		p = (LNode*)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值：", i + 1);
		scanf("%d", &(p->data));
		p->next = q;
		q = p;
	}
	return q;
}

void print(LNode* list) {
	printf("链表各值为:\n");

	LNode* p = list;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	LNode* list = createList(n);
	print(list);

	return 0;
}
