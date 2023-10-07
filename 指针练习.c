#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



//void print(int a)
//{
//	int i = 31;
//	printf("打印偶数位\n");
//	while (i>0)
//	{
//		printf("%d ", (a >> i) & 1);
//		i -= 2;
//	}
//	printf("\n打印奇数位\n");
//	
//	i = 30;
//	while(i>-1)			//直接想最后一个满足的条件
//	{
//		printf("%d ", (a >>i) & 1);
//		i -= 2;
//	}
//}
//int main()
//{
//	int a = 0;
//
//	printf("请输入整数>>>:");
//	scanf("%d", &a);
//	print(a);
//
//	return 0;
//}
//int main()
//{
//	int a = 15;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//交换二进制的奇数位和偶数位
//int main()
//{
//	int a = 1;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		
//	}
//	return 0;
//}

//统计二进制1的个数


//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		int x = a >> i;
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d数的二进制位1有%d个", a, count);
//	return 0;
//}
//
//int main()
//{
//	unsigned int a = 0;
//	int count = 0;
//	printf("请输入要求的整数>>:");
//	scanf("%d", &a);
//
//	while (a)
//	{
//		if (a % 2)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("该数中二进制位为1的位数为%d",count);
//
//	return 0;
//}
// int main()

//求二进制中不同位的个数
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		int x = a;
//		int y = b;
//		x = a >> i;
//		y = b >> i;
//
//		if (x % 2 != y % 2)
//		{
//			count++;
//		}
//		
//	}
//	printf("%d与%d二进制位有%d不同\n", a, b, count);
//
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void exchange(int arr1[], int arr2[], int sz)
//{
//	int i = sz;
//
//	while (i)
//	{
//		int tmp = 0;
//		arr1[i] = tmp;
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		i--;
//	}
//	print(arr1, sz);
//	print(arr2, sz);
//}
//int main()
//{
//	int arr1[3] = { 0,0,0 };
//	int arr2[3] = { 1,2,3 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	exchange(arr1, arr2, sz);
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
	/*int i = 0;
	
	for (i = 0; i <= sz - 1 - i; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;

	}*/
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//
//	return 0;
//}
//int a = 5;
//int b = 6;
//
//int test()
//{
//	a = a + b;
//	b = a;
//}
//int main()
//{
//	test();
//	printf("a == %d\nb == %d", a, b);
//
//	return 0;
//}