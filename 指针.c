#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/

	/*int a = 0x11223344;*/
	//int* pa = &a;
	//*pa = 0;

	/*char* pc = &a;
	*pc = 0;*/

	/*printf("%p\n", pa);
	printf("%p\n", pc);*/
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int* p = &arr;
//	int* pa = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	return 0;
//}
//int main()
//{
//	int a;	//局部变量不初始化，默认为随机值
//	int* p;
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//}
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	p = &a;
//	printf("空指针的值== %d", *p);
//
//	return 0;
////}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	for (i = 0; i < sz; i+=2)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//}
//int main()
//{
//	int arr[5];
//	int* vp = arr;
//	for (vp = &arr[0]; vp < &arr[5];)
//	{
//		printf("%d ", *vp++ = 1);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr[9] - &arr[0]);
//	return 0;
////}
//int main()
//{
//	int arr[10]= {0};
//
//	int(*p)[10] = &arr;
//	int pi = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//
//	return 0;
//}