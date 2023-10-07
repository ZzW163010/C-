#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 2) + Fib(n - 1);
	}
}
int main()
{
	int n = 0;

	scanf("%d", &n);
	int ret = Fib(n);
	printf("ret == %d", ret);

	return 0;
}

//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret == %lf", ret);
//
//	return 0;
//}
//int Digitsum(int a)
//{
//	int sum = 0;
//	if (a > 9)
//	{
//		sum = a % 10 + Digitsum(a / 10);
//	}
//	return sum;
//}
//int main()
//{
//	int a = 1234;
//	int b = Digitsum(a);
//	printf("%d", b);
//
//	return 0;
//}