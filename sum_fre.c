#include<stdio.h>

int main() {
    int sum = 0;
    int i = 0;

    while(sum+i<32767){
        sum+=i;
        ++i;
    }

    printf("\n 1+2+...+%d=%d\n", i-1,sum);
    return 0;

}
