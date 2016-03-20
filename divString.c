#include "mydecl.h"

//defination---begain
char* divString(char*);

int main(void){
	char src[50]="tHIS IS A LInE STRINg cONTAiN loWWER ANvD SPNCe";
	char *end;

	end=divString(src);	
	printf("src: %s\n result: %s\n", src,end);
	return 0;
}

char* divString(char *src){
	int i=0,j=0,t=0;
	char* end = (char*)malloc(sizeof(char)*strlen(src));

	while(*(src+i)){
		if(*(src+i)>='a'&&*(src+i)<='z'){
			*(end+t)=*(src+i);
			t++;
		}else{
			*(src+j)=*(src+i);
			++j;
		}
		++i;
	}
	*(end+t)='\0';
	*(src+j)='\0';
	return end;

}
