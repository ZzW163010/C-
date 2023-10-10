#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	//int* p = NULL;	//整形指针-指向整形的指针-可以存放整形的地址
//	//char* pc = NULL;
//	//数组指针-指向数组的指针
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}

//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i)) + j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//
//	return 0;
//}
//void test(int ar[]);
//void test(int* ar);
//void test(int** ar);
//void test(int* ar[]);
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	int(*p)(int, int) = Add;
//	printf("%d ", (*p)(4, 5));
//
//	return 0;
//}