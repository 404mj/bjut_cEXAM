#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	FILE *fp;
	int ch;

	if(argc!=2){
		printf("No File name.Usage:exe file\n");
		exit(0);
	}
	if((fp=fopen(argv[1],"r")) == NULL){
		printf("Cannot open file!\n");
		return 0;
	}
	//~~~~~~~~
	ch = fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
}