#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 int main()
{
    int year, month, date;
    printf("�������������");
    scanf("%4d%2d%2d",&year,&month,&date);//%nd����������ʾȡ���ٸ�����
    printf("year=%d\nmonth=%.2d\ndate=%.2d\n", year, month, date);
    return 0;
}