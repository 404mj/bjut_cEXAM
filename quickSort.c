#include "mydecl.h"
#define N 20

//~~~~~~~~~~~~~~
void q_s(int [],int, int);
void arr_print(int [],char []);
//~~~~~~~~~~~~~

int main(void){
	//set the array to store the data begain 1
	int list[N+1] = {0,45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};

	arr_print(list,"原始数据是：\n");
	q_s(list,1,N);
	arr_print(list,"排序后的数据是：\n");

	return 0;
}

void q_s(int list[],int low,int high){//learn!
	int temp=list[low],i=low,j=high;

	if(i<j){
		while(i!=j){
			while(i<j&&list[j]>temp) --j;
			if(i<j){
				list[i]=list[j];
				++i;
			}

			while(i<j&&list[i]<temp) ++i;
			if(i<j){
				list[j]=list[i];
				--j;
			}
		}
		list[i]=temp;
		q_s(list,1,i-1);
		q_s(list,i+1,high);
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

