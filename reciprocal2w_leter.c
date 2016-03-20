#include<stdio.h>
#include<ctype.h>


int  main(){
    /**
     *仅适用getchar和putchar完成从键盘输入一行英文，求倒数第二个单词的
     * 字母个数
     *
     */

    char c;
    int inWord = 0;
    int sum=0 , t=0;

    while(c=getchar()){
            if(c=='\n') break;
            else if(isalpha(c)){
                    if(!inWord)
                        inWord=1;
                    t++;
                }
            else{
                inWord=0;
                sum=t;
                t=0;
            }
        }

    printf("您输入的这行文字的倒数第二个单词字母为%d\n",sum);

    return 0;
}
