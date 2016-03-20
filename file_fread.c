#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct info{
	int no;
	char name[15];
	char major[10];
}Info;

int main(void){
	Info info;
	int i;
	FILE* fp;
	char filename[20];

	printf("input filename:\n");
	gets(filename);
	if((fp=fopen(filename,"wb"))==NULL){
		printf("Cannot write file!\n");
		return 0;
	}
  	puts("Enter basic info");
	for(i=0;i<N;++i){
		scanf("%d%s%s",&info.no,info.name,info.major);
		fwrite(&info,sizeof(Info),1,fp);
	}
	fclose(fp);

	if((fp=fopen(filename,"rb"))==NULL){
		printf("Cannot open file!\n");
		return 1;
	}

	puts("the message read form file is:");
	while(fread(&info,sizeof(Info),1,fp))
		printf("%4d%12s%12s\n",info.no,info.name,info.major);
	fclose(fp);

	return 0;
}