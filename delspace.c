#include "mydecl.h"

//defination-------begain
int delspce(char*);
int myDelspace(char*);
//defination----------end

int main(void){
	char str1[40]="this is a line that contain space";
	char str2[40]="this is a line that contain space";
	int nu1,nu2;

	puts("================below is need learn============");
	nu1=delspce(str1);
	printf("deleted %d space and then is:%s\n", nu1,str1);
	puts("================below is my  way============");
	nu2 = myDelspace(str2);
	printf("deleted %d space and then is:%s\n", nu2,str2);
	return 0;
}

int delspce(char str[]){
	int i=0,j=0;
	while(str[i]){
		if(str[i]!=' '){
			str[j]=str[i];
			++j;//该算法思想我应该学习类似与ds学习中的一个方式，j来记录非空格的个数.
		}
		++i;
	}
	return i-j;//i为最后个数，i-j即为空格个数
}

//我本来想的实现方式
int myDelspace(char* str){
	int i=0,j=0;
	int l;
	char cp[30];

	while(*(str+i)){
		if(*(str+i)!=' '){
			cp[j]=*(str+i);
			++j;
		}
		i++;
	}
	cp[j]='\0';
	l=strlen(str)-j;
	strcpy(str,cp);
	return l;
}

