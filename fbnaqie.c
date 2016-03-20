#include<stdio.h>

int main(){
    int i,pre=0,prepre=1,t;
    
    printf("%d,%d",pre,prepre);
    for(i=2;i<20;++i){
        t=pre+prepre;
        printf(",%d",t);
        pre=prepre;
        prepre=t;
    }
putchar('\n');

}
