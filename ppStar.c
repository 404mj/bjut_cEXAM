#include "mydecl.h"

//----------
void fun1();
void fun0();
//----------

int main(void){
	
	// fun0()
	//============fun1()
	printf("run fun1\n");
	fun1();


	return 0;
}

void fun0(){
	int j,a[]={1,3,5,7,9,11,13,15},*p=a+5;
	for(j=3;j;j--){
		switch(j){
			case 1:
			case 2: 
				printf("case 2---%d,",*p++);
				break;
			case 3: 
				// printf("case3:%d\n", p);
				printf("case3---%d,", *(--p));
		}
		putchar('\n');
	}
}
//=======================

void fun1(){
	/*int q[]={1,2,3,4,5,6};
	int *p;
	p=q;

	printf("%d,%d,%d\n",*p,*p++,*(p++));*/
	puts("------restore---++ and * which is higher?---");
	int a[]={0,2,4,6,8,10,12,14,16},x,y;
	int *p,*q;
	p=a;
	q=a;
	x=(*p)++;//*p++;
	int x_1=*p;
	y=*++q;
	printf("x= %d\n", x);
	printf("x_1= %d\n",x_1 );
	printf("y= %d\n", y);
	// x=p++*;//error
	// y=++p*;//error
	/*printf("x=p++*:%d\n", y);
	printf("y=++p*:%d\n", y);*/
}


