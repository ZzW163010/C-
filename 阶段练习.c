#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//字符串的逆序函数
//void rev(char ar[], int sz)
//{
//	assert(ar != NULL);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		char tmp = ar[left];
//		ar[left] = ar[right];
//		ar[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char str[] = "zhang";
//	int sz = strlen(str);
//
//	rev(str,sz);
//
//	printf("%s", str);
//
//	return 0;
//}

//计算求和

int sum5(int a, int n)
{
	int i = 0;
	int sum = 0;
	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	return sum;
}
int main()
{
	int a = 0;
	int n = 0;

	scanf("%d%d", &a, &n);

	int ret = sum5(a,n);

	printf("%d\n", ret);

	return 0;
}
//打印水仙花数
//求0-100000之间的所有水仙花数并输出
//水仙花数是指一个n位数，其各位数字的n次方之和确好等于该数本身,
//如153 = 1^3+5^3+3^3

//int oder(int i, int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return i * oder(i, n - 1);
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int count = 0;
//		int ret = 0;
//		while (tmp > 0)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		
//		tmp = i;
//
//		while (tmp > 9)
//		{
//			tmp = tmp % 10;
//			ret = ret + oder(tmp, count);
//		}
//			
//		if (ret == tmp)
//		{
//			printf("%d ", ret);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i;
//		int count = 0;
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		
//		while (tmp)
//		{
//			sum += oder(tmp % 10, count);
//			tmp /= 10;
//		}
//
//		if (i == sum && i != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//打印菱形
//int main()
//{
//	int i = 1;
//
//	for (i = 1; i <= 7; i++)
//	{
//		int j = 0;
//		for (j = 7; j > i ; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 6; i > 0; i--)
//	{
//		int j = 0;
//		for (j = 7; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//实现一个类型的问题
//循环从0开始，通过第二层循环判断条件(由常变量表达式)来控制输出个数
//其中第一行确定输出行数和充当第二行循环判断条件的变量
// 
// 
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)		//j <= i
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 2 - i) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
