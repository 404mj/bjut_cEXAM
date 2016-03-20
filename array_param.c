#include<stdio.h>
#define N 10

/*
to leanrn how to pass parameter between host function and sibling function
*/

int main(void){
	int list[N]={4,10,3,6,9,23,5,89,43,21};
	// put_array(list);
	// put_array_1(list);
	// put_array_2(list);
	put_array_3(list);
}

put_array_3(int *list){
	//这样写的时候就会出错！！！
	// /这样写会没有边界！！！
	int * bound=list;//a way
	int i;//another way
	for (; list<bound+N; ++list)
	{
		printf("%3d",*list);
	}
	putchar('\n');
}

put_array(int list[]){
	int i;
	for (i = 0; i < N; ++i)
	{
		printf("%3d",list[i]);
	}
	putchar('\n');
}

put_array_1(int list[]){
	int * ptr=list;
	for(;ptr<list+N;++ptr){
		printf("%3d",*ptr);
	}
	putchar('\n');
}

put_array_2(int list[]){
	int i;
	for(i=0;i<N;++i){
		printf("%3d",list[i]);
	}
	putchar('\n');
}

