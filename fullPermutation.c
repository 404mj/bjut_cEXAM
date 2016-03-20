#include "mydecl.h"

#define NUM 3

void anagram(int[], int);
void print(int[]);

int main(void){
	int d[NUM];
	int i;

	for(i=0;i<NUM; i++)
		d[i]=NUM-i;
	anagram(d, NUM);

	return 0;
}


/*
求解n的全排列,!!!
*/
void anagram(int d[],int n){
	int i,j, temp;

	if(n==1){//出口条件
		print(d);
		return ;
	}

	/*
1 2 3 
1 3 2 
3 1 2 
3 2 1 
2 3 1 
2 1 3
通过观察规律，发现每个数字都充当第一位n-1次，然后后移一位
	*/
	for(i=0;i<n;i++){
		// 先排n-1位
		anagram(d,n-1);
		//后移一位
		temp=d[0];
		for(j=1;j<=n-1;j++){
			d[j-1] = d[j];
		}
		d[n-1] = temp;
	}

}

void print(int d[]){
	int i;

	printf("\n");
	for(i=NUM-1;i>=0;i--){
		printf("%d ", d[i]);
	}
	putchar('\n');
}