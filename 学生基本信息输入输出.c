#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    scanf("%d;%f,%f,%f", &a, &b, &c, &d);

    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);

    return 0;
}