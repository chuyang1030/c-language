#define  _CRT_SECURE_NO_WARNINGS 1
//1.����1/1+1/2-1/3+1/4.....
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flage = 1;//�ı�������
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flage * (1.0 / i);//1/3 ��1.0/3 ���������
//		flage = -flage;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
// 
// 
// 2.���10�������е����ֵ
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	for(i = 1; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d ",max);
	return 0;

}