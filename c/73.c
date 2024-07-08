/*
�������һ��������
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
	printf("�������1��Ԫ�ص�ֵ��");
	scanf("%d", &(head->data));
	head->next = NULL;

	q = head;
	int i;
	for (i = 1; i < n; ++i) {
		p = (LNode*)malloc(sizeof(LNode));
		printf("�������%d��Ԫ�ص�ֵ��", i + 1);
		scanf("%d", &(p->data));
		p->next = q;
		q = p;
	}
	return q;
}

void print(LNode* list) {
	printf("�����ֵΪ:\n");

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
