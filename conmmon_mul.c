#include<stdio.h>

int main() {
    int i;
    for(i = 1;i <= 1000; ++i){
        if(i%3 == 0 && i%7 == 0 ){
            printf("%5d", i);
        }
    }

    printf("\n");
    return 0;
}
