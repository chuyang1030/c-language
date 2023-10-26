1. 自己想的方法
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	int k =0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d ", a);
		k = 1;
	}
	if (b > a && b > c)
	{
		printf("%d ", b);
		k = 2;
	}
	if (c > a && c > b)
	{
		printf("%d ", c);
		k = 3;
	}
	if (k == 1)
	{
		if (b > c)
			printf("%d %d", b,c);
		else
			printf("%d %d", c,b);
	}
	if (k == 2)
	{
		if (a > c)
			printf("%d %d",a,c);
		else
			printf("%d %d", c,a);
	}
	if (k ==3)
	{
		if (a > b)
			printf("%d %d",a,b);
		else
			printf("%d %d", b,a);
	}
	return 0;
}

2.简化方法
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	scanf("%d %d %d",&a,&b,&c);
	if (a<b)
	{
		i= a;
		a = b;
		b =i;
	}
	if (a < c)
	{
		i = a;
		a = c;
		c = i;
	}
	if (b<c)
	{
		i = b;
		b = c;
		c = i;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}