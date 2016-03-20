#include "mydecl.h"

int main(void){
	char buf[10],*p;
	char* word[20];
	int index,i,j,min;

	index=0;
	while(1){
		gets(buf);
		if(strlen(buf)==0)
			break;
		word[index] = (char*)malloc(strlen(buf)+1);
		strcpy(word[index++],buf);
	}

	//select - sort
	for(i=0;i<index;++i){
		min=i;
		for(j=i+1;j<index-1;++j)
			if(strcmp(word[j],word[min])<0)
				min = j;
		if(min!=i){
			p = word[i];
			word[i] = word[min];
			word[min] = p;
		}
	}
	for(i=0;i<index;++i){
		puts(word[i]);
		free(word[i]);
	}

	return 0;
}