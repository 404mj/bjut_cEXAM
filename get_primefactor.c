#include<stdio.h>
#define N 20

int isprimenum(int);
void output_arry(int *);

/**
*求指定数的质因子，为了练习，故意复杂化了
*/

int main(void){
  int num,k;
  int result[N]={0};
  int *ptr=result;

  puts("please input a number:");
  scanf("%d",&num);

  for(k=2;k<num;k++){//遍历因子
    if((num%k==0)&&(isprimenum(k))){
      *ptr=k;
      ptr++;
    }
  }
    output_arry(result);
    return 0;
}

//判断是否是质数
int isprimenum(int number){
  int i;
  for(i=2;i<number;++i){
    if(number%i==0) {
      return 0;
    }
  }
  return 1;
}

//输出int数组里的数
void output_arry(int *ap){
  for(;*ap!=0;ap++){
    printf("%d, ", *ap);
  }
  printf("\n");
}
