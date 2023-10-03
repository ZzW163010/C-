#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>


int main()
{
	int arr[2] = { 0,1 };
	printf("%p\n", &arr);
	printf("%p\n", arr);

	return 0;
}

//冒泡排序
//void bubble_sort(int arr[], int sz)	//数组传参传的是首元素的地址
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)	//控制进行几次冒泡排序
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)	//每次冒泡排序进行几趟
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;	//本趟排序的数据，其实不完全有序
//			}
//			if (flag)
//			{
//				break;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4];
//	int arr[3][4] = { {1,2},{3,4} };
//
//	int arr3[][4] = { {1,2,3,4},{1,3,4,5} };
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//
//	//数组个数计算字符串(不考虑'\0')用strlen()
//	//char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	//
//	//int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	//
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	//计算输出值
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	//strlen 求字符串长度-只针对字符串长度-库函数
//	//sizeof 可以求数组、变量、类型所占字节-操作符
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}