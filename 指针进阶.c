#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);	//һֱ��char*���ͽ����ã�֪������'\0'
//	return 0;
// }
//int main()
//{
//	char* p = "zhangzhiwei";
//	*p = 'w';
//	printf("%c", *p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "zhangzhiwei";
//	char arr2[] = "zhangzhiwei";
//	const char* p1 = "zhangzhiwei";
//	const char* p2 = "zhangzhiwei";
//
//	if (p1 == p2)
//	{
//		printf("haha");
//	}
//	else 
//	{
//		printf("hehe");
//	}
//}
//int main()
//{
//	int ar[12] = { 0 };
//	char ch[3] = { 0 };
//
//	int* pa[2] = {ar,ch};		//���ָ�������
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 30;
//	int d = 40;
//
//	int* pa[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p", pa[i]);
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* pa[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(pa[i] + j));
		}
		printf("\n");
	}

	return 0;
}