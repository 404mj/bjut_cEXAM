#include "mydecl.h"

int main(void){
	char str[100];
	char* pstr;
	int max=0,n;

	printf("please input line text\n");
	fgets(str,80,stdin);

//a line ljhi huhaha liji
	for(pstr=str;*pstr!='\n'; pstr++){
		if(isalpha(*pstr))
			n++;
		else if(n>max){
			max=n;
		    n=0;
		}
		else
			n=0;//这个地方调试了半小时！！！！！让我心有余悸了！！！反思总结!!!!
		//还是考虑的不全面!!!!
	}

	printf("the max length is: %d\n",max);

	return 0;
}
