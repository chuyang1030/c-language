#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��ά����
//int main()
//{
//	//int arr1[3][4];//������������ 1 2 3 4
//                            //      2 3 4 5
//                              //    3 4 5 6 
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//�������
//	}
//	return 0;
//}
#include <stdio.h>
void bubble_sort(int arr[],int sz)//ð������
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int  i = 0;
	bubble_sort(arr, sz);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}