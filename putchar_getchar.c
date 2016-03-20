#include<stdio.h>

int main(){
    char c;
    
    printf("为了探究getchar和putchar的机制，请输入一行字符：\n");
    c=getchar();
    while(c!='\n'){
         putchar(c);
         printf("--");
         c = getchar();
    }
    
    putchar('\n');
    return 0;
}
