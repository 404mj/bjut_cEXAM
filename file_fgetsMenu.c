#include <stdio.h>
#include <string.h>

//---
// int readFile(char lines[][80]);
int readFile(char**);
int writeFile(char lines[][80], int n);
//---

int main(void){
	int choice, num;
	char c;
	// char lines[80][80];
	char* lines[80];

	do{
		printf("\n    ===== MENU =====\n");
		printf("\n    readFile.........1");
		printf("\n    writeFile........2");
		printf("\n    exit.............3");
		printf("\n    select:");
		scanf("%d",&choice);
		// fflush(stdin);//不推荐
		getchar();//以下两种都用来清除缓冲区。解决42行运行时的疑问
		/*while((c=getchar())!='\n')
			continue;*/
		if(choice==1)
			num = readFile(lines);
		if(choice==2){
			if(writeFile(lines,num))
				printf("WriteFile--Done!\n");
		}
	}while(choice!=3);

	return 0;
}

/*
尝试了一下两种传参数的方式，一种是char二维数组，函数声明，函数调用和函数实现；
另一种是char*指针数组，要注意的是函数声明应该为char**,函数实现理解
*/

// int readFile(char lines[][80]){
int readFile(char* lines[80]){
	int i;
	FILE *fp;
	char filename[20];

	printf("Enter file name: \n");
	gets(filename);//???
	// scanf("%s",filename);

	if((fp=fopen(filename,"r")) == NULL){
		printf("Cannot open file:%s\n",filename);
		return 0;
	}
	for(i=0;!feof(fp);++i){
		// fgets(&lines[i][0],80,fp);
		lines[i]=(char*)malloc(sizeof(char)*80);
		fgets(lines[i],80,fp);
		// puts(&lines[i][0]);//会加空格
		// printf("%s",&lines[i][0]);
		printf("%s",lines[i]);
	}
	fclose(fp);
	return i;//返回读了多少行
}

int writeFile(char lines[][80],int num){
	FILE* fp;
	int i=0;
	char filename[20];

	printf("Enter file name:\n");
	//gets(filename);
	scanf("%s",filename);

	if((fp=fopen(filename,"w"))== NULL){
		printf("Cannot opent the file! \n");
		return 0;
	}
	while(i<num)
		fputs(&lines[i++][0],fp);
	fclose(fp);
	return 1;
}
