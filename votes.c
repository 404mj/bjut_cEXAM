#include<stdio.h>
#define N 10
void collect_votes(int *);
void output_votes(int *);
int winer_votes(int *);
void winer(int *,int);

int main(void){
//为了练习，故意复杂化了：）

	int candidates[N]={0},vote;
	collect_votes(candidates);
	output_votes(candidates);
	vote=winer_votes(candidates);
	printf("The max vote is:%d\n",vote);
	winer(candidates,vote);
	return 0;
}

void collect_votes(int candidates[]){
	int code,*candi=candidates;
	printf("please input the code of candidate you want to support<0 end>\n");
	do{
		scanf("%d",&code);
		if(code<0||code>N){
			printf("Invalid Code,Try Again!\n");
			continue;
		}
		// *(candi+code-1)++
		candi[code-1]++;
	}while(code!=0);
}

void output_votes(int candidates[]){
	int * pointer;
	for (pointer=candidates; pointer<candidates+N; ++pointer)
	{
		printf("%3d",*pointer);
	}
	printf("\n");
}

int winer_votes(int candidates[]){
	int max=0,i;
	for (i = 0; i < N; ++i){
		if(candidates[i]>max){
			max=candidates[i];
		}
	}
	return max;
}

void winer(int candidates[],int max){
	int i;
	printf("the winer is:");
	for (i = 0; i < N; ++i){
		if(candidates[i]==max)
			printf("%3d", i);
	}
	printf("\n");
}
