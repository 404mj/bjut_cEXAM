#include "mydecl.h"

/*
除了strcmp返回int之外，其他的str函数都返回char *类型！
*/
int main(void){
	clrscr();
	/*char str[]="iwill try to learn how to sub astring";
	char *constr="iwill try to learn how to sub astring";
	char * pstr1=0;
	char * pstr2=0;
	char * pch1=0;
	char * pch2=0;
	int com=0;


	pch1=strchr(str,'t');
	pch2=strchr(constr,'t');
	printf("%s\n",pch1);
	printf("%s\n",pch2);
	printf("%s\n",constr);
	printf("--------------\n");

	pstr1=strstr(str,"learn");
	pstr2=strstr(constr,"learn");
	printf("%s\n",pstr1);
	printf("%s\n",pstr2);
	printf("%s\n",str);

	printf("%s\n", strcpy(constr,pstr2));*/
	// printf("%s\n", strcpy(str,pstr1));

	/*
try to learn how to sub astring
try to learn how to sub astring
iwill try to learn how to sub astring
--------------
learn how to sub astring
learn how to sub astring
iwill try to learn how to sub astring
learn how to sub astring

	*/

//+++++++++++++++++++

	char string[] = "i, will, learn, how, to, use, split, string";
	char* ps=NULL;
	ps=strtok(string,", ");
	while(ps){
		printf("%s\n", ps);
		ps=strtok(NULL,", ");
	}
	putchar('\n');
	


	return 0;
}