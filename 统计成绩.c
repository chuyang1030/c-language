#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	float arr[100] = {0};
	int i = 0;
	float sum = 0;
	float ave = 0.0;
	float max = 0.0;
	float min = 100.0;
	for (i = 1; i <= n; i++)
	{
		scanf("%f",&arr[i]);//%f后面不能有空格
		sum+=arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	ave = sum / n;
	printf("%.2f %.2f %.2f\n", max, min, ave);
	return 0;
}