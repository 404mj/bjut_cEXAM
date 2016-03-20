#include<stdio.h>
#include<string.h>

#define N 20
//1---20   two way to arange the data in array ,later i will choose the former way to 
//write my sort code !
//0---19

void in_sort1(int *);
void in_sort0(int *);
void arr_print(int *,int, int);

/**
*使用指定的方法进行排序
*
*printArr函数输出结果
*/
int main(void){
	//从1开始存储
	int oneList[N+1] ={0,45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};
	//从0开始存储
	int zeroList[N] = {45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};

	arr_print(oneList,1,1);
	arr_print(zeroList,0,1);

	//分别排序
	in_sort1(oneList);
	in_sort0(zeroList);

	//输出
	arr_print(oneList,1,0);
	arr_print(zeroList,0,0);

	return 0;

}

/*
记住算法思想--要写的时候画一画就出来了！
*/
void in_sort1(int list[]){
	int i,j,temp;
	for (i= 1; i < N; ++i){
		if(list[i+1]<list[i]){
			temp=list[i+1];
			for (j = i; j>=1&&temp<list[j] ; --j){
				list[j+1]=list[j];
			}
			list[j+1]=temp;
		}
	}
}

void in_sort0(int list[]){
	int i,j,temp;
	for(i= 0; i< N-1; ++i){
		if(list[i+1]<list[i]){
			temp=list[i+1];
			for(j=i+1; j>=1 && temp<list[j-1]; --j){
				list[j]=list[j-1];
			}
			list[j]=temp;
		}
	}
}

void arr_print(int list[],int begin,int new){
	int i,end;
	char mess[35];
	if(begin){
		end=N+1;
		strcpy(mess,"Use in_sort1, ");
	}
	else{
		end=N;
		strcpy(mess,"Use in_sort0, ");
	}

	switch(new){
		case 1 :
		//c语言中这样给字符串及字符数组赋值是不对的！！！
		//数组名是地址但不是指针变量是一个常量，不能
		//给常量复制呀！
			strcat(mess,"原始数据是：\n");
			break;
		case 0 :
			strcat(mess,"排序后的数据是：\n");
			break;
	}

	printf("%s",mess);
	for(i=begin; i<end; ++i){
		printf("%2d ",list[i]);
	}
	putchar('\n');
}