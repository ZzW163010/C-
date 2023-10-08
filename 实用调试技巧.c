#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
///*int add(int x, int y)
//{
//	return x + y;
//}
//int  main()
//{
//	int x = 0;
//	int y = 1;                                     
//
//	int ret = add(x, y);
//	return 0;
//} */   

//局部变量,自动监视
//反汇编
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}


//调用堆栈
//
//void test3()
//{
//	printf("zhagnzhiwei\n");
//}
//void test2()
//{
//	test3();
//}
//void test()
//{
//	test2();
//}
//int main()
//{
//	test();
//	return 0;
//}

//调试练习
int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		printf("zhang\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//1.栈区的默认使用
//先使用高地址处的空间
//再使用低地址的空间
// 
//2.数组随着下标的增长
//地址是由低到高变化的

//如何写出好的代码，易调试的代码
//1.运行正常
//2.bug少
//3.效率高
//4.可读性高
//5.可维护性高(模块独立)
//6.注释清晰
//7.文档齐全

//常见的coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编码风格
//4.添加必要的注释
//5.避免编码陷阱


//模拟实现strcpy库函数的过程
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}


//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++);
//	}
//}


//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);	//断言
//	assert(src != NULL);	//断言
//	while (*dest++ = *src++);
//}


//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);	//断言
//	assert(src != NULL);	//断言
//	while (*dest++ = *src++);
//}


//最终版本
//char* my_strcpy(char* dest, const char* src)
//{	
//	char* ret = dest;
//	assert(dest != NULL);	//断言
//	assert(src != NULL);	//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);	//保证指针的有效性
//
//	int count = 0;
//	//检索到'\0'结束计数，返回字符数
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "zhangzhiwei";
//	int ret = my_strlen(arr);
//	printf("%d ", ret);
//}
//const关键字的一些简单用法
//int main()
//{
//	int n = 10;
//	int m = 20;
//	const int* const p = &n;
	//const 放在指针变量的*左边时，修饰的是*p,即：*p不能改变，不能通过p改变*p
	//const 放在指针变量的*右边时,修饰的是p,即：p不能被改变,p不能指向其他地址
//	printf("%d\n",*p);
//
//	return 0;
//}
