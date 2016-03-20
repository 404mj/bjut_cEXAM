#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// #define N 20
// int w=3;
//===============
// void say(char*);
// int try(int );
//==============

int main(void){
	// char* me="hellp\n";
	// int a=5;
	// int* b=&a;
	// printf("%d\n", *b);//right
	// say(me);
	// printf("%s\n", me);//but why wrong
	/*int values[N];
	int i,temp;
	for(i=0;i<N;++i){
		scanf("%d",&values[i]);
	}

	for(i=0;i<N/2;++i){
		temp=values[i];
		values[i]=values[N-i-1];
		values[N-i-1]=temp;
	}
	for(i=0;i<N;++i){
		printf("%4d",values[i] );
	}
	putchar('\n');*/

	//=================
	/*char str1[80],str2[80];
	int i,j;
	printf("Enter a text line \n");
	gets(str1);
	str2[0] = str1[0];
	for(i=1,j=1; str1[i]!='\0';i++){
		if(str1[i]==' '&& str1[i-1]==' ')
			continue;
		str2[j++] = str1[i];
	}
	str2[j] = '\0';
	puts(str2);*/

	//=============================
	/*char str[10];
	fgets(str,10,stdin);
	puts(str);	*/

	//================
	/*srand(time(NULL));

	int i=rand()%6;
	printf("%d\n", i);

	return 0;*/
//+++++++++++++++++++
	/*char s[10];
	strcpy(s,"jaaj");
	strcpy(s,"jaaj---2");
	// printf("%s\n", s);
	// puts(s);
	// printf("%d\n", (int)strlen(s));
	printf("%s\n", s);*/

	//-----------------------
	/*char ch='a';
	printf("%c\n", tolower(ch));*/

	//==================
	/*int i,k=1;
	for(i=0;i < 3; i++){
		printf("try(%d) = %d\n",i,try(i+k)+w );
	}
*/

	//=================
	/*double n=4;
	// int d = (int)pow(10.0,n-1.0);
	int d = (int)pow(10,n-1);//编译出错
	printf("%d\n",d );
*/
	//==================
/*
	int i=3;
	printf("%d\n",--i);*/

	//================
	// printf("%d\n",1%1 );
	/*char hanzi[80];
	scanf("%s",hanzi);
	printf("you have inputed : %s\n", hanzi);
	puts("input a chinese word");
	char cw[80];
	getchar();
	gets(cw);//这俩要一块用!!!
	// scanf("%s",cw);
	printf("%s\n",cw);*/
	/*char en[]="abcd";
	char hanzi[]="我";
	char hanzi2[]={"我是歌手"};

	printf("%slength:%d---%slength:%d ----%slenght:%d .\n",en,strlen(en),hanzi, 
	strlen(hanzi),hanzi2,strlen(hanzi2));
*/
	//---------------
	/*int i;
	int x;
	scanf("%d",&i);
	printf("%d\n", i);
	if(i=='#')
		printf("yeah!\n");
	else 
		printf("oh no!\n");
	scanf("%d",&x);
	printf("%d\n", x);
	scanf("%d",&x);
	printf("%d\n", x);*/

	//-----------------------
	/*char buf[80];
	gets(buf);
	int x,y;
	char name[10];

	sscanf(buf,"%d%s%d",&x,name,&y);

	printf("x=%d\n",x );
	printf("name=%s\n",name);
	printf("y=%d\n",y );
*/

	//-------------
	typedef struct node{
		int data;
	}Node;
	Node* p = (Node*)malloc(sizeof(Node));
	p=NULL;
	printf("p==NULL: %d\n",p==NULL);
	p->data=2;
	printf("p->data: %d\n",p->data);

	return 0;
}

/*void say(char* mess){
	printf("%s", mess);
}*/

/*int try(int x){
	static int a=5;
	int b=2;

	a+=x+b;
	w++;
	return a+w;
}*/
