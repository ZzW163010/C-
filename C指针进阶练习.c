#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	////一维数组
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(a + 0));
//	//printf("%d\n", sizeof(*a));
//	//printf("%d\n", sizeof(a + 1));
//	//printf("%d\n", sizeof(a[1]));
//	//printf("%d\n", sizeof(&a));
//	//printf("%d\n", sizeof(*&a));
//	//printf("%d\n", sizeof(&a + 1));
//	//printf("%d\n", sizeof(&a[0]));
//	//printf("%d\n", sizeof(&a[0] + 1));
//	////字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));	//计算数组大小7
//	//printf("%d\n", sizeof(arr + 0));	//计算地址大小4/8
//	//printf("%d\n", sizeof(*arr));		//计算char类型大小1
//	//printf("%d\n", sizeof(arr[1]));		//计算char类型大小1
//	//printf("%d\n", sizeof(&arr));		//计算数组地址大小4/8
//	//printf("%d\n", sizeof(&arr + 1));	//计算数组地址大小4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//计算数组地址大小4/8
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));	
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));
//	//printf("%d\n", sizeof(p + 1));
//	//printf("%d\n", sizeof(*p));
//	//printf("%d\n", sizeof(p[0]));
//	//printf("%d\n", sizeof(&p));
//	//printf("%d\n", sizeof(&p + 1));
//	//printf("%d\n", sizeof(&p[0] + 1));
//	//printf("%d\n", strlen(p));
//	//printf("%d\n", strlen(p + 1));
//	//printf("%d\n", strlen(*p));
//	//printf("%d\n", strlen(p[0]));
//	//printf("%d\n", strlen(&p));
//	//printf("%d\n", strlen(&p + 1));
//	//printf("%d\n", strlen(&p[0] + 1));
//	
//	//二维数组
////	int a[3][4] = { 0 };
////	printf("%d\n", sizeof(a));
////	printf("%d\n", sizeof(a[0][0]));
////	printf("%d\n", sizeof(a[0]));
////	printf("%d\n", sizeof(a[0] + 1));
////	printf("%d\n", sizeof(*(a[0] + 1)));
////	printf("%d\n", sizeof(a + 1));
////	printf("%d\n", sizeof(*(a + 1)));
////	printf("%d\n", sizeof(&a[0] + 1));
////	printf("%d\n", sizeof(*(&a[0] + 1)));
////	printf("%d\n", sizeof(*a));
////	printf("%d\n", sizeof(a[3]));
////	return 0;
////}

//看代码是代码
//看代码是内存
//看代码是代码

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//} *p;
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%d\n", (unsigned long)p + 0x1);
//	printf("%d\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}
//int main()
//{
//	int p[3][2] = { (0,1),(2,3),(4,5) };
//	int* a;
//	a = (int*)p;	//增加代码的可读性
//	printf("%d %d", *(int*)p[0],a[0]);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr[9] - &arr[0]);
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = (int(*)[4])a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)(*(a + 1));
//
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}
int main()
{
		char* c[] = { "ENTER","NEW","POINT","FIRST" };
		char** cp[] = { c + 3,c + 2,c + 1,c };
		char*** cpp = cp;

		printf("%s\n", **++cpp);
		printf("%s\n", *-- * ++cpp + 3);
		printf("%s\n", *cpp[-2] + 3);
		printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}
