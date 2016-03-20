#include "mydecl.h"

//----
int isprim(int);

int main(void){
	int i;
	FILE* fp;

	if((fp=fopen("primfile.data","w+"))==NULL){
		printf("ERROR IN OPEN FILE\n");
		exit(1);
	}

	for(i=1;i<1000;++i){
		if(isprim(i))
			fprintf(fp, "%d,",i);
	}

	printf("get prim numbers from file\n");
	fseek(fp,0,SEEK_SET);//这两种方式都可以
	// rewind(fp);
	while(!feof(fp)){
		fscanf(fp,"%d,",&i);
		printf("%d, ",i);
	}
	putchar('\n');


	return 0;
}

int isprim(int m){
	int i;

	for(i=2;i<m;++i){
		if(m%i==0)
			return 0;
	}
	return 1;
}