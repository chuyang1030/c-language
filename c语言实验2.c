#define  _CRT_SECURE_NO_WARNINGS 1
//1.#include <stdio.h>
//int main()
//{
//	int x, y;
//	char ch1, ch2, ch3;
//	scanf("%d,%d", &x, &y);
//	getchar();
//	printf("x=%d,y=%d\n", x, y);
//	scanf("%c%c%c",&ch1,&ch2,&ch3);
//	printf("ch1=%c,ch2=%c,ch3=%c\n", ch1, ch2, ch3);
//	return 0;
//}
// 
//2.����һ��Сд��ĸ��ת��Ϊ��Ӧ��д��ĸ
#include<stdio.h>
//int main()
//{
//	int i;
//	printf("������һ��Сд��ĸ��");
//	scanf("%c", &i);
//	i = i - 32;
//	printf("%c", i);
//	return 0;
//} 
//3.���������������߳� ��������
#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	float S,s;
//	printf("�����������ε������߳���");
//	scanf("%d %d %d", &a, &b, &c);
//	s = (a + b + c) / 2;
//	S = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("%f", S);
//	return 0;
//} 
//4.����Բ�������������������
#include <stdio.h>
//int main()
//{
//	char PI = 3.14;
//	int r = 2;
//	int h = 5;
//	double s,S,V;
//	s = PI * r ^ 2;
//	S = 2 * PI * r * h;
//	V = s * h;
//	printf(" Բ�������Ϊ:%.2f\n Բ�������Ϊ:%.2f\nԲ�����Ϊ:%.2f", s, S, V);
//	return 0;
//} 
//4.1��һ����λ������
#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������һ����λ����");
//	scanf("%d", &a);
//	int hundred = a / 100;
//	int ten = (a / 10) - hundred * 10;
//	int one = a - hundred * 100 - ten * 10;
//	printf("%d%d%d",one, ten,hundred);
//	return 0;
//} 
#include <stdio.h>
int main()
{
	int a = 12;
	int b = 6;
	int c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}