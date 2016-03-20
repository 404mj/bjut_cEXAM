#include<stdio.h>
#include<ctype.h>
#define M 26

int main(void){
	int letters[M]={0};
	int i; 
	char c;
	
	// char string[];
	// char *strP=string;
	//无法确定数组的长度！！！
	//动态分配malloc等方式解决不了问题！！！
	//使用getchar那种思路啊！！！！
	//学习！！


	/*puts("please input a line of a English");
	gets(string);
	for(;*strP!='\0';strP++){
		if(isalpha(*strP)){
			if(islower(*strP))
				letters[*strP-97]++;
			else
				letters[*strP-65]++;
		}
	}*/

	while((c=getchar())!='\n'){
		if(isalpha(c)){
			if(islower(c))
				letters[c-97]++;
			else
				letters[c-65]++;
		}
	}

	puts("this line of English's letter frequecy is<ignore case>:");
	for(i=0;i<M;++i){
		printf("%c--%d\t",i+65,letters[i]);
		if ((i+1)%3==0) putchar('\n');//has fised!
		}
	printf("\n");

	return 0;
}