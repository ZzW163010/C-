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

//ð������
//void bubble_sort(int arr[], int sz)	//���鴫�δ�������Ԫ�صĵ�ַ
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)	//���ƽ��м���ð������
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)	//ÿ��ð��������м���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;	//������������ݣ���ʵ����ȫ����
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
//	//������������ַ���(������'\0')��strlen()
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
//	//�������ֵ
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	//strlen ���ַ�������-ֻ����ַ�������-�⺯��
//	//sizeof ���������顢������������ռ�ֽ�-������
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}