#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stddef.h>

//结构体的声明
// 
//struct tag
//{
//	member - list;
//}variable - list;

struct Stu
{
	char name[20];
	char tel[15];
	char sex[3];
	short age;
}s3,s4;		//全局变量
//typedef struct Stu Stu;
struct Stu s5;		//全局变量

//struct			//匿名结构体
//{
//	int a;
//}x;
// //struct			
//{
//	int a;
//}* px;
//不能用px指向&x
// 
// 
//int main()
//{
//	struct Stu s1 = { "zhangzhiwei","12345678910","男",20 };
//	struct Stu s2 = { "jiayan","12345678910","女",21 };
//
//	return 0;
//}

//结构体的自引用

//struct node
//{
//	int data;
//	struct node* next;
//};

//typedef重新定义结构体类型名

//typedef struct node
//{
//	int a;
//	node* next;
//
//}node;

//结构体变量的定义和初始化

//struct T
//{
//	double w;
//	int h;
//};
//struct S
//{
//	char c;
//	int a;
//	double d;
//	struct T st;
//};
//
//int main()
//{
//	struct S s = { 'e', 100, 3.14, {70.00,180} };	//初始化
//
//	printf("%c %d %lf %d %lf\n", s.c, s.a, s.d,s.st.h,s.st.w);
//
//	return 0;
//}

//结构体的内存对齐
//第一个成员在与结构体变量地址的零偏移处
//其他成员地址对齐对齐数的倍数
//结构体类型大小是最大对齐数的倍数
//嵌套结构体，先计算内层结构体大小，内层结构体对齐嵌套结构体内部最大对齐数的整数倍，整个结构体
//的大小是内层结构体内部和外部的最大对齐数的整数倍
 
//#pragma pack(4)
////取消设置的默认对齐数
//
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", (int)sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", (int)sizeof(s2));
//
//	return 0;
//}

//struct S
//{
//	char c;	//0
//	int i;	//4
//	double d;	//8
//};
//int main()
//{
//	printf("%d\n", (int)offsetof(struct S, c));
//	return 0;
//}
//struct S
//{
//	char c;	
//	int i;	
//	double d;
//};
//void Init(struct S* tmp)
//{
//	tmp->c = 'w';
//	tmp->i = 100;
//	tmp->d = 3.14;
//
//}
//void Print(struct S tmp)
//{
//	printf("%c %d %lf", tmp.c, tmp.i, tmp.d);
//}
//int main()
//{
//	struct S s = { 0 };
//	struct S* pf = &s;
//
//	Init(pf);
//	Print(s);
//
//	return 0;
//}

//位段 - 二进制位

//位段的成员必须是int unsigned int (char short) 一般只存在一种类型
//成员后有一个:和整数

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}
struct S 
{
	char a : 2;
	char b : 5;
	char c : 4;
	char d : 3;
};

int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}

//位段的跨平台问题

//int位段被当成有符号数是无符号数是不确定的。

//位段中最大位的数目不能碉定。16位机器最大16，32位机器最大32．与成27，在16位机
//器会出问题

//位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。

//当一个结构包含两个位段第二个位段成员比较大，无法容纳于第一个应段剩余的位的，是
//舍弃剩余的位还是利用，这是不确定的。

