/*
连接两个链表。
*/

#include <stdio.h>
#include <malloc.h>

typedef struct LNode {
	int data;
	struct LNode *next;
} LNode;

LNode* createList(int n) {
	LNode *list, *p, *q;
	list = (LNode*)malloc(sizeof(LNode));
	list->next = NULL;
	q = list;
	int i;
	for (i = 0; i < n; ++i) {
		p = (LNode*)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值：", i + 1);
		scanf("%d", &(p->data));
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return list;
}

void print(LNode* list) {
	printf("链表各值为:\n");

	LNode* p = list->next;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
}


void connect(LNode* list1, LNode* list2) {
	LNode* p;
	for (p = list1; p->next != NULL; p = p->next) {
		continue;
	}
	p->next = list2->next;
	free(list2);
}

int main() {
	int n;
	scanf("%d", &n);
	LNode* list1 = createList(n);
	LNode* list2 = createList(n);
	connect(list1, list2);

	print(list1);

	return 0;
}
