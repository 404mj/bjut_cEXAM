#include "mydecl.h"
#define N 2

typedef struct node{
	int no;
	struct node* next;
}Node;

//---
Node* creatNode();
//---


int main(void){
	Node* head=NULL;
	Node *p,*pre,*del;
	int i=1,m;

	//没有头结点
	head=creatNode();

	printf("Enter a numebr:\n");
	scanf("%d",&m);
 	
 	pre=NULL;
 	p=head;
 	printf("\n----------");
	while(p->no){//我就是想这么判断怎么办!!!???
	//当被释放后里面有垃圾值也不为空！p指向它后会执行导致bug！！！！！
		if(i%m){
			pre=p;
			p=p->next;
			++i;
		}
		else{//delete this node and print and restore the value of i
			//有逻辑错误因为是循环链表，最后一个节点会陷入死循环
			del=p;
			printf("%3d",del->no);
			// del->no=0;
			if(pre==NULL){//依次删除
					p=p->next;
			}
			else{
				if(p->next==p)//just one node,bug!
					//p->no=0;
					break;
				else{
					p=p->next;
					pre->next=p;
				}
			}
		free(del);//SIGABRT, double free or corruption (fasttop):
		i=1;		
		}
		// printf("\np ====%d\n",p);
	}
	free(p);
	putchar('\n');

	return 0;
}

Node* creatNode(){//构造没有头结点的
	int i;
	Node *pHead=NULL;
	Node *pRear=NULL;
	Node *pNew=NULL;

	for(i=1;i<=N;++i){
		pNew=(Node*)malloc(sizeof(Node));
		pNew->no=i;
		pNew->next=NULL;
		if(i==1){
			pHead=pNew;
			pRear=pNew;
		}
		else{			
			pRear->next=pNew;
			pRear=pNew;
		}
	}
	//fixed!
	pRear->next=pHead;
	return pHead;
}
