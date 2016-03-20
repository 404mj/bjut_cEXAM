/**
 * Project Name:   SlowPrint
 * Programmer:     mozhiyan
 * Date:           2014-07-29
 *
 * 带打字效果输出字符串
**/
// #include <windows.h>
#include <stdio.h>

void SlowPrint(char* string, int sleeptime)
{
    int i = 0;
    while(string[i] != '\0')   
    {      
        printf("%c", string[i]);
        Sleep(sleeptime);
        i++;
    }
}

int main()
{
    SlowPrint("Hi, this is a demo. The url is http://see.xidian.edu.cn/cpp/u/xitong/", 50);
    printf("\n");
    Sleep(2000);

    return 0;
}