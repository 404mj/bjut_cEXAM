#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#define N 20
#define X 10
#define Y 50

//++++++++++++++++pre define function
int ordinary_search(int *,int);
int ordinary_bin(int * ,int, int, int);
int recursive_bin(int *,int,int,int);
//++++++++++++++++

int main(void){
	int list[N];
	int i,len,int_key;
	char key[10];
//===========================================convert
	puts("Please input a key number u want to search:");
	gets(key);
	len=strlen(key);
	char str_key[len+1];
	for(i=0;i<len;++i){
		str_key[i]=key[i];
	}
	int_key=atoi(str_key);
	printf("your key value is:%d\n",int_key );
//=========================================
	// srand(time(NULL));//取消动态的随机数
	for (i = 0; i < N; ++i){
		list[i]=rand()%(Y-X+1)+X;
	}
	printf("ordinary--position--%d\n",ordinary_search(list,int_key));
	printf("recursive--position--%d\n",recursive_bin(list,int_key,0,N-1));
	printf("ordinary_bin--position--%d\n",ordinary_bin(list,int_key,0,N-1));
	//结果不一样因为随机数不是有序的！！

	return 0;
}

int ordinary_search(int list[],int key){
	int i;
	if(key<X||key>Y){
		printf("Invalid Number,Try again\n");
		return 0;
	}
	for(i=N-1;i>=0;--i){
		if(list[i]==key)
			return i;
		/*
		很多种方式:另外的:可以找到后break，然后判断是否为最后的标志值
		或者:哨兵
		或者：用while循环
		*/
	}
	return 0;
}

int ordinary_bin(int list[],int key,int low,int high){
	int mid;

	while(low<=high){
		mid=(high+low)/2;
		if(list[mid]==key) {
			//这里出出口方式有两种，一是这样，而是breake；然后再最后确认break出口。
			return mid;
		}
		else if (list[mid]>key){
			high=mid-1;
		}
		else
			low=mid+1;
	}
	return 0;

}

int recursive_bin(int list[],int key,int low,int high){
	int mid=(high+low)/2;
	if(high<low){
		printf("The position is Invalid,Try again!\n");
		return 0;
	}
	if (list[mid]==key) return mid;
	else if (list[mid]<key){
		low=mid+1;
		return recursive_bin(list,key,low,high);
	}
	else{
		high=mid-1;
		return recursive_bin(list,key,low,high);	
	}
}