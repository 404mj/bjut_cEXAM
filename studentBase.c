#include "mydecl.h"

#define N 5

typedef struct{
	int year;
	int month;
	int day;
}Date;

typedef struct{
	int id;
	char name[20];
	Date birth;
	char major[20];
}Student;

//------------
void inputInfo(Student*);
void outputInfo(Student*);
void searchInfo(Student*,Date);
//-----------
int main(void){
	Student students[N];
	Date date;

	inputInfo(students);
	outputInfo(students);
	printf("Enter a data<month,day>\n");
	scanf("%d,%d",&date.month,&date.day);//fixed!learn!
	searchInfo(students,date);

	return 0;
}

void inputInfo(Student s[]){
	int i;

	printf("Enter %d student's Info(name,birhtday,major)\n",N);
	for(i=1;i<=N;++i){
	// printf("Enter %d student's Info(name,birhtday,major)\n",N);//learns
		s[i].id=i;
		scanf("%s",s[i].name);
		scanf("%d%d%d",&s[i].birth.year,&s[i].birth.month,&s[i].birth.day);
		scanf("%s",s[i].major);
	}
}

void outputInfo(Student s[]){
	int i;
	printf(" Id     Name \tBirthday\t    Major\n");
	for(i=1;i<=N;++i){
		printf("%4d%14s  %d/%d/%d %14s\n", 
			s[i].id,s[i].name,s[i].birth.year,s[i].birth.month,s[i].birth.day,s[i].major);
	}
}

void searchInfo(Student s[],Date d){
	int i;

	for(i=1;i<=N;++i){
		if(s[i].birth.month>d.month){
			printf("%4d%14s  %d/%d/%d %14s\n", 
			s[i].id,s[i].name,s[i].birth.year,s[i].birth.month,s[i].birth.day,s[i].major);
			continue;
		}
		if(s[i].birth.month == d.month && s[i].birth.day > d.day){
			printf("%4d%14s  %d/%d/%d %14s\n", 
			s[i].id,s[i].name,s[i].birth.year,s[i].birth.month,s[i].birth.day,s[i].major);
		}
	}
}
