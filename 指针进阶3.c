#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//(*(void(*)())0)()	
// 		
//void(*)()--指向返回void类型无参数的函数指针
//(void(*)())--强制类型转换
//(void(*)())0--将0转换成(void(*)())类型
//*(void(*)())0()--对0进行解引用并调用该函数

//void(*signal(int, void(*)(int)))(int)
//signal(int, void(*)(int))--函数
//void(*)(int)--函数类型
//即声明一个函数名为singal,返回void(*)(int)类型,以int,void(*)(int)为参数类型的函数

//typedef void(*pfun_t)(int);
//pfun_t singal(int, pfun_t);

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}
int add3(int a, int b)
{
	return 2*a + b;
}
int add2(int a, int b)
{
	return 3*a + b;
}
int add1(int a, int b)
{
	return a + b;
}
int main()
{
	int(*pa[3])(int, int) = { add1,add2,add3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", pa[i](1, 2));
	}
	return 0;
}