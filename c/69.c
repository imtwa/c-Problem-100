/*
��n����Χ��һȦ��˳���źš�
�ӵ�һ���˿�ʼ��������1��3������
������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
��������Ҳ����Լɪ�򻷣�����������鶼���� 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node {       //����һ���ṹ�壬�м�����һλ�õ�ָ���Լ�����
	int data;
	struct node *next;
} Node,*List;
List Init_list(int n) {      //��ʼ���������nΪ��Ҫ�������
	int i;
	Node *t = (Node *)malloc(sizeof(Node));                 //����һ��ָ��t��tָ��������򲻸�ֵ��������Ϊ�ƶ���ָ��
	t->next = NULL;
	List head = t;                                        //����һ��ͷ�ڵ㣬���ָ��t�ĵ�ַ��Ϊ�����һ���ڵ�ָ��ͷ�ڵ�ĺ�һ�����ݣ�Ҳ����1��λ��
	for(i=1; i<=n; i++) {
		Node *temp = (Node *)malloc(sizeof(Node));        //����һ��ָ��temp�������Ӧ����
		temp->data = i;
		temp->next = NULL;
		t->next = temp;                                    //��temp����tָ���ָ������
		t = temp;                                        //����֮��tָ��Ӧ��ָ��temp���ڴ��ַΪ����һ���ܹ���������
	}
	t->next = head->next;                                //��ʱ��t��Ϊβ�ڵ㣬��ָ��ָ��1(Ҳ����head->next)
	return head;
}
void find_del(List head,int m,int k) {              //��������ɾ����ֱ�����һ������ ��headΪ����ͷ�ڵ㣬mΪ�ڼ�����ʼ��kΪ����
	Node *p,*t;                                        //���ﶨ������ָ�룬pָ�����ڱ����ĵ�ַ��tָ��p��ǰ���ڵ�
	int i;
	p = head;
	for(i=1; i<=m; i++) {                             //���������Ƕ�λ���ڼ������ݿ�ʼ�� ��
		t = p;                                        //ÿѭ��һ��tָ��p��pָ����һ���ڵ�
		p = p->next;
	}
	while(p!=p->next) {                              //��Ϊ��ѭ������������������ֻʣ��һ��ʱ������Ӧ��ָ����Ӧ��ָ�����Լ�
		for(i=1; i<k; i++) {                         //����k�����ƶ�����Ϊÿһ�ڵ��ָ����ָ���Ӧ�ڵ㣬�Ͳ���������һ��Ҫ�������һ���ڵ�ָ������
			t = p;
			p = p->next;
		}
		t->next = p->next;                            //��ʱpָ�򱨵�k�ĵĵ�ַ��tΪp��ǰ���ڵ㣬Ҳ����ǰ��һ������ʱ����Ҫɾ������p��ָ�Ľڵ㣬(�������棬д����)
		free(p);                                   //��ôֻ��Ҫ��ָ��t����һ�ڵ��Ϊp����һ�ڵ�ָ���򣬲���free(p),Ҳ����ɾ��pָ�������
		p = t->next;                                //��ʱpָ����Ϊ�գ���ô��pָ��t��ָ����Ҳ���ƶ���ɾ�����ĺ���һ�ڵ���
	}
	printf("%d",p->data);                            //while��������Ϊ��ʣ����������
	free(p);
	p = NULL;
}
//ʹ�������� 
void run() {
	int n,j,i,current = -1;
	int a[1007];
	scanf("%d",&n);
	for(i=1; i<=n; i++)          		//����ʼ������1,2,3����������
		a[i-1] = i;
	while(n!=1) {                  		//������Ϊ1ʱ˵��������ֻʣ��һ��
		for(j=1; j<=3; j++)
			current = (current+1)%n;  	//current��Ϊ�������±�
		for(j=current+1; j<n; j++)    	//���±�����ֵ������ǰ��
			a[j-1] = a[j];
		current--;                 		//ȥ��һ���������±�ҲҪ��ǰ��һ��
		n--;                       		//��������ȥ1
	}
	printf("%d",a[0]);                  //��ӡ�������a[0]����a[current+1]�е�����Ϊ���һ��
}
int main() {
	int n;
	scanf("%d",&n);
	List head = (Node *)malloc(sizeof(Node));
	head = Init_list(n);
	find_del(head,1,3);
//	run();
	return 0;
}


