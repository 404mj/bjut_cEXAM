#include "mydecl.h"

int main(void){
	
	int ml = 0;
	char line[80];
	char strl[80];

	printf("please input lines\n");
	do{
		// strcpy(line,"");
		// fgets(line,80,stdin);
		gets(line);
		if(strlen(line)>ml){
			// strcpy(strl,"");//我担心内容会累加，试试,
			//我的担心是多余的，strcpy会从头开始复制！！！
			ml = strlen(line);
			strcpy(strl,line);
		}
	}while(strlen(line)>1);
	printf("the max lenght is %d,it's content is\"%s\"\n", ml,strl);

	return 0;
}
