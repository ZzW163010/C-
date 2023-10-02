#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void print(unsigned n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}

//void my_strlen(char arr[])
//{
//	int a = printf("%s\n", arr);
//	printf("%d", a-1);
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{ 
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "zhang";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//int FAL(int a)
//{
//	if (a > 1)
//	{
//		return a * FAL(a - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数>>>:");
//	scanf("%d", &a);
//	int ret = FAL(a);
//	printf("%d的阶乘==%d", a, ret);
//
//}

//求第n个斐波那契数
//int fib1(int a)
//{
//	int ar[100] = { 1,1 };
//
//	if (a > 2 && a < 100)
//	{
//		int i = 0;
//
//		for (i = 2; i < a; i++)
//		{
//			ar[i] = ar[i - 1] + ar[i - 2];
//		}
//		return ar[i-1];
//	}
//	else if (a == 1)
//	{
//		return 1;
//	}
//	else if (a == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return 0;
//	}
//}

int fib3(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//int fib2(int a)
//{
//	
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib2(a - 1) + fib2(a - 2);
//
//	}
//}
//
int main()
{
	int n = 0;
	printf("请输入一个整数>>>:");
	scanf("%d", &n);
	int ret = fib1(n);
	
	printf("第%d个斐波那契数=%d\n", n, ret);


	return 0;
}