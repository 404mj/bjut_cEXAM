#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i < 20; ++i){
		printf("%d, ", rand()%100);//random 0--99!!!
	}
	putchar('\n');

	//generate 8--19 random k=rand()%(Y-X+1)+X;
	for (i = 0; i < 20; ++i){
		printf("%d, ", rand()%12+8);
	}
	putchar('\n');
}

//(rand()%n)/(n*1.0) 
// 产生浮点随机数