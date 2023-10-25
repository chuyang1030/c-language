#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * (fac(x - 1));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//} 
//#include <stdio.h>
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}  
#include <stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//对应上面三行代码需要执行的次数
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}