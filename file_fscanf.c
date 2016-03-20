#include <stdio.h>
#define N 2

typedef struct info{
	int no;
	char name[20];
	char major[20];
}Info;

int main(void){
	Info info;
	int i;
	FILE* fp;
	char filename[25];

	printf("Enter file name\n");
	gets(filename);

	if((fp=fopen(filename,"wb")) == NULL){
		printf("ERROR!!!\n");
		return 1;
	}

	for(i=0;i<N;++i){
		scanf("%d%s%s",&info.no,info.name,info.major);
		fprintf(fp, "%2d%12s%12s\n",info.no,info.name,info.major);
	}
	fclose(fp);

	if((fp=fopen(filename,"rb")) == NULL){
		printf("ERROR IN READ!\n");
		return 0;
	}
	while(!feof(fp)){
	// while(fscanf(fp,"%4d%12s%12s\n",&info.no,info.name,info.major)){//wrong!!!
		fscanf(fp,"%4d%12s%12s\n",&info.no,info.name,info.major);

		printf("%2d%10s%10s\n",info.no,info.name,info.major);
	}
	fclose(fp);
	return 0;
}