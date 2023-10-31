#define  _CRT_SECURE_NO_WARNINGS 1
方法一：#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}
方法二：#include <stdio.h>
//异或^相同为零 相异为一 异或支持交换
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a ^ b;//a^b
	b = a ^ b;//a^b^b=a
	a = a ^ b;//a^b^a=b
	printf("%d %d", a, b);
	return 0;
}