#include "mydecl.h"
#define ML 40

//-----
int getLine(char*);
//----

int main(int argc, char* argv[]){
	char line[ML];

	if(argc!=2){
		printf("usage: exe text\n");
	}
	else{
		while(getLine(line) > 0)
			if(strstr(line, argv[1]) != NULL)
				printf("%s\n",line);
	}

	return 0;
}

int getLine(char* line){
	gets(line);
	return strlen(line);
}
