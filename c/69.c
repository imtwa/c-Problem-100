/*
有n个人围成一圈，顺序排号。
从第一个人开始报数（从1到3报数）
凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
报数问题也就是约瑟夫环，用链表或数组都可以 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node {       //定义一个结构体，中间存放下一位置的指针以及数据
	int data;
	struct node *next;
} Node,*List;
List Init_list(int n) {      //初始化表，传入的n为所要求的人数
	int i;
	Node *t = (Node *)malloc(sizeof(Node));                 //创建一个指针t，t指针的数据域不赋值，用来作为移动的指针
	t->next = NULL;
	List head = t;                                        //定义一个头节点，存放指针t的地址，为了最后一个节点指向头节点的后一个数据，也就是1的位置
	for(i=1; i<=n; i++) {
		Node *temp = (Node *)malloc(sizeof(Node));        //创建一个指针temp，放入对应数据
		temp->data = i;
		temp->next = NULL;
		t->next = temp;                                    //将temp插入t指针的指针域中
		t = temp;                                        //插完之后t指针应该指向temp的内存地址为了下一次能够继续插入
	}
	t->next = head->next;                                //此时的t作为尾节点，其指针指向1(也就是head->next)
	return head;
}
void find_del(List head,int m,int k) {              //找数并且删除，直到最后一个数据 ，head为链表头节点，m为第几个开始，k为报数
	Node *p,*t;                                        //这里定义两个指针，p指向正在报数的地址，t指向p的前驱节点
	int i;
	p = head;
	for(i=1; i<=m; i++) {                             //这里做的是定位到第几个数据开始报 ，
		t = p;                                        //每循环一次t指向p，p指向下一个节点
		p = p->next;
	}
	while(p!=p->next) {                              //因为是循环链表，当链表中数据只剩下一个时，它对应的指针域应该指向它自己
		for(i=1; i<k; i++) {                         //根据k进行移动，因为每一节点的指针域都指向对应节点，就不用像数组一样要考虑最后一个节点指向哪里
			t = p;
			p = p->next;
		}
		t->next = p->next;                            //此时p指向报到k的的地址，t为p的前驱节点，也就是前面一个，这时我们要删除的是p所指的节点，(连接下面，写满了)
		free(p);                                   //那么只需要将指针t的下一节点改为p的下一节点指针域，并且free(p),也就是删除p指针的数据
		p = t->next;                                //这时p指针中为空，那么将p指向t的指针域也就移动到删除数的后面一节点了
	}
	printf("%d",p->data);                            //while出来，即为所剩下来的数据
	free(p);
	p = NULL;
}
//使用数组解决 
void run() {
	int n,j,i,current = -1;
	int a[1007];
	scanf("%d",&n);
	for(i=1; i<=n; i++)          		//将初始的数按1,2,3放入数组中
		a[i-1] = i;
	while(n!=1) {                  		//当总数为1时说明数组中只剩下一人
		for(j=1; j<=3; j++)
			current = (current+1)%n;  	//current作为报数的下标
		for(j=current+1; j<n; j++)    	//将下标后面的值依次往前移
			a[j-1] = a[j];
		current--;                 		//去掉一个数后报数下标也要往前移一次
		n--;                       		//总人数减去1
	}
	printf("%d",a[0]);                  //打印最后留在a[0]或者a[current+1]中的数即为最后一人
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


