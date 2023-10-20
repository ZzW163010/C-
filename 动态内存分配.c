#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<windows.h>

//1.创建变量
//int a = 10; 局部变量-栈区					栈区：局部变量，函数的形式参数
//int g_a = 10; 全局变量-静态区				堆区：动态内存分配 malloc free calloc realloc
//2.创建数组								静态区：全局变量，静态变量
//局部-栈区
//全局-堆区

//maloc/free


//int main()
//{
	//向内存申请10个整形内存
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i)); 
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//calloc

//int main()
//{
//	int* pi = (int*)calloc(10, sizeof(int));
//
//
//	if (pi == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(pi + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(pi + i));
//		}
//	}
//	free(pi);
//	pi = NULL;
//
//	return 0;
//}

//realloc

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		//假设这里开辟的内存不够了
//		//通过relloc动态调整内存
//
//		int* ptr = realloc(p, 40);
//		if (ptr != NULL)
//		{
//			p = ptr;
//			for (i = 5; i < 10; i++)
//			{
//				*(p + i) = i;
//			}
//
//			for (i = 0; i < 10; i++)
//			{
//				printf("%d ", *(p + i));
//			}
//		}
//		p = NULL;
//		ptr = NULL;
//	}
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 20; i++)
//		{
//			*(p + i) = i;
//		}
//		//int ptr = (int*)realloc(p, 80);
//		/*if (ptr != NULL)
//		{
//			p = ptr;
//			for (i = 10; i < 20; i++)
//			{
//				*(p + i) = i;
//			}
//			for (i = 0; i < 20; i++)
//			{
//				printf("%d ", *(p + i));
//			}
//		}
//		p = NULL;*/
//	}

//常见面试题
//1.描述test()运行后的结果
//void GerMemory(char* p)	//p是GetMemory函数的形参，只能函数内部有效
//{						//等GetMemory函数返回后，动态内存尚未释放(开辟的内存的位置找不到了造成了内存泄漏)
//	p = (char*)malloc(100);	//注意p是形式参数，当函数传值或传指的时候都会开辟一份内存存放变量或地址,此时变量和地址的地址与实参是不同的
//							//要注意要改变的是变量本身还是地址
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "zhangzhi");	//程序崩溃
//	printf(str);
//}
//int main()
//{
//	test();
//
//	return 0;
//}

//2.描述test()运行后的结果

//char* GetMemory(void)
//{
//	char p[] = "zhangzhi";
//	return 0;
//}
//
////地址返回但返回空间以及释放了
////栈空间返回问题
//
//void test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//char* test()
//{
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	char *p = test();
//	printf("%d ", *p);
//	*p = 30;
//	printf("%d ", *p);
//	return 0;
//}c