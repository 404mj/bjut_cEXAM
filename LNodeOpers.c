#include "mydecl.h"

typedef struct lnode{
	int data;
	struct lnode* next;
}LNode;

//------
LNode* create();
void print();
int reNth(LNode*,int);
void sortLNode(LNode*);
//------


int main(void){
	LNode* head=NULL;
	// LNode* re;
	int result;
	int n;

	head=create();
	print(head);

	printf("Enter a number count backward:<0-quit>\n");
	scanf("%d",&n);
	if(n){
		result=reNth(head,n);
		printf("result is : %d\n",result);
	}
	printf("sort this LNode result is:\n");
	sortLNode(head);
	print(head);
	return 0;
}

LNode* create(){
	int d;
	LNode *p,*r;
	LNode* q=(LNode*)malloc(sizeof(LNode));
	q->next=NULL;
	r=q;

	printf("enter numbers for lnode\n");
	scanf("%d",&d);
	while(d!=0){
		p=(LNode*)malloc(sizeof(LNode));
		p->data=d;
		p->next=NULL;
		r->next=p;
		r=p;
		scanf("%d",&d);
	}
	p->next=NULL;
	return q;
}

void print(LNode* head){
	LNode* p=head->next;

	while(p){
		printf("%3d",p->data);
		p=p->next;
	}
	puts("\n");
}

int reNth(LNode* head,int n){
	int c=1;
	LNode *p = head->next;
	LNode* q=head;

	while(p){
		if(c>=n){
			q=q->next;
		}
		p=p->next;
		++c;
	}
	if(q==head)
		return -1;
	else
		return q->data;
}

void sortLNode(LNode* L){
	LNode *p,*q,*r,*u;
	p=L->next;
	L->next=NULL;

	while(p){
		r=L;
		q=L->next;

		while(q&&q->data<p->data){
			r=q;
			q=q->next;
		}
		u=p->next;
		p->next = r->next;
		r->next = p;
		p=u;
	}
	//return L;//void 就行!!
}
