#include<stdio.h>

/**
 *
 * 从键盘输入10个数，
 * 将其中偶数的平均数计算出来
 * @Auther: zsx
 */

int main() {
    int t=0;//偶数个数
    int i=1, num, sum=0;//循环变量，输入的数，偶数之和。
    
    printf("请输入十个数字\n");
    do{
        scanf("%d", &num);
        if(num%2==0){
            t++;
            sum+=num;
        }
        ++i;
    }while(i<=10);
    
    printf("the average is %f\n",(sum*1.0)/t);
    return 0;
}
