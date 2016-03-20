#include "mydecl.h"

int recur(int);

/*
使用递归方式实现计算形如这样的算式：
1*2+2*3+3*4+...+n*(n+1)

自己想出来的
*/

int main(void){
	int n;

	printf("Input your want to add \n");
	scanf("%d", &n);
	printf("result is:%d\n",recur(n));

	return 0;
}

int recur(int m){
	if(m==1)
		return 1*2;
	else{
		return m*(m+1)+recur(m-1);
	}
}