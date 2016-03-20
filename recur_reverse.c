#include "mydecl.h"

int reverse(int, int);
int checkbit(int);
int mypow(int);
int answer_revs(int );
/*
使用递归方式反转一个整形数字,
还可以用字符串处理
我自己想的，
*/

int main(void){
	int n,bits,result;

	printf("Input your want to reverse \n");
	scanf("%d", &n);
	bits = checkbit(n);//检测一共多少位数
	result = reverse(n,bits);
	printf("---my result is:%d\n",result);//reverse(n,bits));
	printf("+++answer result:%d\n",answer_revs(n));

	return 0;
}

int reverse(int n,int b){
	if(b==1)//just one bits digit
		return n;
	else{
		return n/mypow(b-1)+10*reverse(n%mypow(b-1),b-1);
	}
}

int checkbit(int n){
	int c=1,r;
	while((r=(n/10))!=0){
		n=r;
		c++;
	}
	return c;
}

int mypow(int n){
	int re=1;

	while(n>0){
		re*=10;
		n--;
	}
	return re;
}


//答案是这么写的!
int answer_revs(int value){
	int a=value,i,n=1;
	while(a>10){
	//这里整合我的mypow和checkbit函数,我确实没发现
		n=n*10;
		a=a/10;
	}
	if(value/10==0)
		return value;
	else
		return value%10*n+answer_revs(value/10);
}