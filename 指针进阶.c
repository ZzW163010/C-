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
//	printf("%s\n", p);	//一直按char*类型解引用，知道遇到'\0'
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
//	int* pa[2] = {ar,ch};		//存放指针的数组
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
			printf("%d ", *(pa[i] + j));				//p[i]== *(p+i)--找到二维数组中各一维数组的首地址 p是一维数组的地址
		}
		printf("\n");
	}

	return 0;
}
int a[3][4] = { 0 };
//a是二维数组的数组名--满足数组名的条件
	printf("%d\n", sizeof(a)); 	//此时表示整个二维数组
	printf("%d\n", sizeof(a + 1));	//此时表示第二行一维数组的地址
	
//a[0]是第一行一维数组的数组名
	printf("%d\n", sizeof(a[0]));	//此时表示整个一维数组
	printf("%d\n", sizeof(a[0] + 1));//此时表示一维数组中第二个元素的地址

	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
