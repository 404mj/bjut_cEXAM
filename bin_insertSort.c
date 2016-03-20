#include<stdio.h>
#define N 20

//~~~~~~~~~~~~~~
void bin_insertSort(int []);
void arr_print(int [],char []);
//~~~~~~~~~~~~~

int main(void){
/*
relocation 16 has invalid symbol index 13
/usr/bin/ld: 
/usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info):
 relocation 17 has invalid symbol index 13

/usr/bin/ld: 
/usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info): 
relocation 18 has invalid symbol index 13

/usr/bin/ld: 
/usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_info):
relocation 19 has invalid symbol index 21

/usr/bin/ld:
 /usr/lib/debug/usr/lib/x86_64-linux-gnu/crt1.o(.debug_line): 
 relocation 0 has invalid symbol index 2

/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../x86_64-linux-gnu/crt1.o：在函数‘_start’中：
(.text+0x20)：对‘main’未定义的引用
collect2: error: ld returned 1 exit status

>>>>>>>>>>>because i wrote main to mian~!fuck!

*/
	//set the array to store the data begain 1
	int list[N+1] = {0,45,6,22,53,31,52,11,72,65,7,8,16,20,34,35,78,3,38,40,23};

	arr_print(list,"原始数据是：\n");
	bin_insertSort(list);
	arr_print(list,"排序后的数据是：\n");

	return 0;
}


void bin_insertSort(int list[]){
    int i,j,low,high,mid,temp;
    for(i=1;i<N;++i){//1-19,there can be many way
    	if(list[i+1]<list[i]){
    		temp=list[i+1];
    		low=1;//that time :error in here. bug
    		high=i;
    		while(low<=high){//look for the position which temp can be put at
    			mid=(low+high)/2;
    			if(temp<list[mid])
    				high=mid-1;
    			else
    				low=mid+1;
    		}
    		for(j=i+1;j>low;--j){
    			list[j]=list[j-1];
    		}
    		list[low]=temp;//put temp
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
