#include "mydecl.h"
#define N 20

//~~~~~~~~~~~~~~
void selectSort(int []);
void arr_print(int [],char []);
//~~~~~~~~~~~~~

int main(void){
	//set the array to store the data begain 1
	int list[N+1] = {0,45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};

	arr_print(list,"原始数据是：\n");
	selectSort(list);
	arr_print(list,"排序后的数据是：\n");

	return 0;
}

void selectSort(int list[]){
	int i,j,min,temp;
	for(i=1;i<N;++i){//1--19
		min=i;
		for(j=i+1;j<=N;++j){
			if(list[j]<list[min])
				min=j;
		}
		if(i!=min){//swap the two value
			temp=list[min];
			list[min]=list[i];
			list[i]=temp;
		}
	}
}


void arr_print(int list[], char mess[]){
	int i;

	printf("%s",mess);
	for(i=1;i<N+1;++i){
		printf("%d, ",list[i]);
	}
	putchar('\n');
}
