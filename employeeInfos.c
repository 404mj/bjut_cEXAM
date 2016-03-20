#include "mydecl.h"
#define N 2
//define struct
typedef struct employee{
	int id;
	char name[20];
	int salary;
}Employee;

//define functions
void inputInfos(FILE*);
void printInfos(char*);

int main(void){
	FILE* fp;
	char filename[20];

	puts("please input filename");
	gets(filename);

	if((fp=fopen(filename,"wb"))==NULL){
		puts("ERROR IN OPEN FILE!exitnow");
		exit(1);
	}

	inputInfos(fp);
	fclose(fp);

	printInfos(filename);//show and save info that meet condition

	return 0;
}

void inputInfos(FILE* fp){
	int i;
	Employee e;
	char buf[80];

	for(i=0;i<N;++i){
		printf("enter %dth employee's infos<id name salary>:\n",i+1);
		gets(buf);
		sscanf(buf,"%d%s%d",&e.id,e.name,&e.salary);//bug in here!

		fwrite(&e,sizeof(Employee),1,fp);
	}
	puts("----------write- done ---------------");
}

void printInfos(char* filename){
	FILE *fp;
	FILE *fp2;
	char filename2[20];
	Employee e;

	puts("enter the second filename");
	gets(filename2);

	if((fp=fopen(filename,"rb"))==NULL){
		printf("cann't open file:%s\n",filename);
		exit(1);
	}
	if((fp2=fopen(filename2,"wb"))==NULL){
		printf("cann't open file:%s\n",filename2);
		exit(1);
	}

	while(fread(&e,sizeof(Employee),1,fp)){
		if(e.salary<300){
			printf("id=%d;name=%s;salary=%d\n",e.id,e.name,e.salary);
			fwrite(&e,sizeof(Employee),1,fp2);
		}
	}
	puts("---------write done------------");

}
