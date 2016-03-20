#include<stdio.h>

/**
 *从键盘读入一行英文句子，将每个英文单词首字母大写输出。
 *@Auther: zsx
 * 我思路是使用字符串
 * 答案是先使用的getchar
 *
 */

int main(){
    /*
     *程序的思路是：既然无法使用字符串，就不断的循环来实现输入单词的功能，输入一个字母就进行判断，
     * 如果不是字母就判断是单词之间的隔断
     *循环的输入，一次循环之后就接着输出
     * c=getchar() 在while的条件里面，说明
     *TODO:这里要好好研究一下putchar and getchar 
     * http://zhidao.baidu.com/question/1173901920432137979.html
     * http://blog.sina.com.cn/s/blog_70ec9a6f01014cx7.html
     * 在上边的这两个链接 里终于明白了！ 与getchar缓冲有关，但就算理解了
     * 缓冲，整整理解这个程序还用了一会儿  。
     *
     *写了一个程序解释这个现象～！
     *
     */
    char c;
   char  inWord = 0;//用来记录输入的是否是单词字母
    printf("请输入一段英文句子:\n");
    c=getchar();
    while((c)!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            if(!inWord){//单词的第一个字母
            inWord = 1;
            if(c>='a'&&c<='z')
                c = c - 32;
            }
            
        }
        else{
            inWord = 0;
        }
        putchar(c);
        c = getchar();
    }
    //getchar();
    putchar('\n');
    return 0;
}
