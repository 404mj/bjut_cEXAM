#include "mydecl.h"
#define N 20

//~~~~~~~~~~~~~~
void bubbleSort(int []);
void arr_print(int [],char []);
//~~~~~~~~~~~~~

int main(void){
	//set the array to store the data begain 1
	int list[N+1] = {0,45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};

	arr_print(list,"原始数据是：\n");
	bubbleSort(list);
	arr_print(list,"排序后的数据是：\n");

	return 0;
}

void bubbleSort(int list[]){
	//use flag to reduce circle times
	int i,j,temp,flag=1;
	for(i=N;i>1&&flag;--i){//20--2
		flag=0;
		for(j=1;j<i;++j){
			if(list[j+1]<list[j]){
				//swap the two value
				temp=list[j+1];
				list[j+1]=list[j];
				list[j]=temp;
				flag=1;
			}
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

