#include "mydecl.h"

#define NUM 5

int main(void){
	int m[NUM][NUM];
	int i,j;

	printf("Please input the data:\n");
	for(i=0;i<NUM;++i){
		for(j=0;j<NUM;++j){
			scanf("%d",&m[i][j]);
		}
	}

	//显示
	printf("Your matrix is:\n");
	for(i=0;i<NUM;++i){
		for(j=0;j<NUM;++j){
			printf("%d  ",m[i][j]);
		}
		if(j==NUM)
			printf("\n");
	}	

	//判读是否是对称
	for(i=0;i<NUM;++i){
		for(j=0;j<NUM;++j){
			if(m[i][j]!=m[j][i]){
				printf("NOT SYMMETRICAL\n");
				// return 0;//can be or not just fine!!!
			}
		}
	}
	printf("YES!\n");
	// return 0;
}