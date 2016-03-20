#include<stdio.h>

int ping_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int run_month[]={31,29,31,30,31,30,31,31,30,31,30,31};

int main(void){
    int week,day,i=1,j,space,end;
    int year,month;

    printf("please input the year and month that you want to show:\n");
    scanf("%d%d",&year,&month);

    if(is_run(year))
        day=run_month[month-1];
    else
        day=ping_month[month-1];
    week=week_day(year,month);
    //控制输出格式
    printf("\n\n\t\t=========%d年%d月=========\t\t\n",year,month);
    printf("\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
    while(i<=day){
      space=week%7;
      end = 6-space+i;
      for(j=1;j<=7;++j){
        if (j<=space) {
          printf("\t   ");
          week=7;
        }
        else if(i<=end&&i<=day){
          printf("\t%d  ", i);
          ++i;
        }
      }
      putchar('\n');
    }
    return 0;
}

//返回指定年月的的1号是周几
//已知1970年1月1日为周四，6月1日为周一
int week_day(int year, int month){
  int week_map[] = {3,4,5,6,7,1,2};
  int days = 1;
  int i,w;
  for (i=1970; i<year; i++) {//求年的天数
    if(is_run(i))
      days+=366;
    else
      days+=365;
  }
    days+=count_day(year,1,month);
  return week_map[days%7];
}

//判断是否是闰年
int is_run(int year){
  if((year%4==0&&year%100!=0)||(year%400==0))
    return 1;
  return 0;
}

//计算某年内from月到to月的天数
count_day(int year,int from , int to){
  int i,d=0;
  for(i=from;i<to;++i){
    d+=ping_month[i-1];
  }
  if(is_run(year))
    d+=1;
  return d;
}
