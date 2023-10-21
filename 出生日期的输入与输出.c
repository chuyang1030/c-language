#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 int main()
{
    int year, month, date;
    printf("请输入出生日期");
    scanf("%4d%2d%2d",&year,&month,&date);//%nd可以用来表示取多少个数字
    printf("year=%d\nmonth=%.2d\ndate=%.2d\n", year, month, date);
    return 0;
}