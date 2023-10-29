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
//1.利用递归思想，编写函数求一个数的各个位数之和
//#include <stdio.h>
//int Digitsum(unsigned int n)
//{
//	if (n > 9)
//		return Digitsum(n / 10) + n % 10;//运用了递归的思想
//	else                                 //（123）+4
//		return n;                        //（12）+3+4
//}                                      //1+2+3+4  
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = Digitsum(n);
//	printf("%d\n", sum);
//	return 0;
//}
//2.利用递归思想，编写一个函数实现n的k次方
//   n^k==n*n^k-1.....
#include <stdio.h>
double pow(int n, int k)
{
	if (k > 0)
		return n * pow(n,k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = pow(n, k);
	printf("%lf\n", ret);
	return 0;
}