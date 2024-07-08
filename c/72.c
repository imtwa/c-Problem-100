/*
创建一个链表
*/

#include <stdio.h>
#include <malloc.h>

struct LNode {
	int data;
	struct LNode *next;
};

struct LNode* createList(int n) {
	struct LNode *list, *p, *q;
	list = (struct LNode*)malloc(sizeof(struct LNode));
	list->next = NULL;
	q = list;
	int i;
	for (i = 0; i < n; ++i) {
		p = (struct LNode*)malloc(sizeof(struct LNode));
		printf("请输入第%d个元素的值：", i + 1);
		scanf("%d", &(p->data));
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return list;
}

void print(struct LNode* list) {
	printf("链表各值为:\n");

	struct LNode* p = list->next;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
}

int main() {
	struct LNode* list = NULL;
	int n;
	scanf("%d", &n);
	list = createList(n);
	print(list);

	return 0;
}
