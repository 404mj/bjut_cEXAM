#include "mydecl.h"

#define N 7

int main(void){
	int a[N][N];
	int *ptr,i,j;

	for(i=0;i<N;++i){
		//ptr=*a[i];//error!
		ptr=a[i];//right!
		// ptr=*(a+i);//right
		for(j=0;j<N;++j){
			if(i>=j)
				*(ptr+j)= j+1;
			else 
				*(ptr+j) = 0;
			}
	}
	for(i=0;i<N;++i){
		ptr=*(a+i);
		for(j=0;j<N;++j){
			printf("%d  ",*(ptr+j));
		}
		printf("\n");
	}
	// int pp=&a;
	// printf("%d\n",**(pp+7));

	return 0;
}