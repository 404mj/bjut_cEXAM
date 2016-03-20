#include<stdio.h>

int main(){
    /**
     *求从键盘输入的两个数的
     *最小公倍数 
     * @Auther: zsx
     */
    int x , y;
    int i,mul;

    printf("请输入想求的两个数字：\n");
    scanf("%d %d",&x,&y );
   /* if(x==y){
        printf("最小公倍数就是：%d\n",x);
        return 0;
    }
    STUPID!
    */
    mul = x*y;
    for(i=x; i<= mul; ++i){
        if(i%x==0 && i%y==0)
            printf("最小公倍数就是：%d\n" , i);
            break;    
    }

    return 0;
}
