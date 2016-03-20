//learn!!!
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 2//5

typedef struct cscore{
	char cname[10];
	int score;
	struct cscore* next;
}Cscore;

typedef struct student{
	char name[15];
	Cscore* pscore;
}Student;

//----
void initStuInfo(Student[]);
void inputCscoreInfo(Student[], int);
void outputStuInfo(Student[]);
//----
int main(void){
	int i;
	Student s[N];

	initStuInfo(s);
	for(i=0;i<N;++i)
		inputCscoreInfo(s,i);
	outputStuInfo(s);

	return 0;
}

void initStuInfo(Student s[]){
	int i;

	printf("Enter information of %d students:\n",N);
	for(i=0;i<N;++i){
		printf("Enter the %d's name:\n",i+1);
		gets(s[i].name);
		s[i].pscore=NULL;
	}
}

void inputCscoreInfo(Student s[],int No){
	char text[40];
	int score,num,i;
	Cscore* c;

	printf("Enter 课程数量: \n");//课程数量
	gets(text);
	sscanf(text,"%d", &num);
	printf("Enter course's name and score: \n");
	for(i=1;i<=num;++i){
		gets(text);
		c=(Cscore*)malloc(sizeof(Cscore));
		sscanf(text,"%s%d",c->cname,&c-score);//学习sscanf的用法
		c->next = s[No].pscore;
		s[No].pscore=c;
	}
}

void outputStuInfo(Student s[]){
	int i;
	Cscore* p;

	for(i=0;i<N;++i){
		printf("\n%12s:   ",s[i].name);
		for(p=s[i].pscore;p;p=p->next){
			printf("(%s,%d) ",p->cname,p->score);
		}
		printf("\n");
	}
}
