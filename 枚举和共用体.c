#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//枚举

//枚举的定义
//enum Sex
//{
//	//枚举的可能取值
//	male = 2,	//0
//	female = 3,	//1
//	secret = 4	//2
//};
//
//int main()
//{
//	enum Sex s = male;
//	s = female;
//
//	return 0;
//}

//联合体

//union Un
//{
//	char c;
//	int i;
//
//};
//
//int main()
//{
//	union Un u;
//	printf("%d ", sizeof(u));;;
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 0x01000000;
//	return *(char*) & a;
//}
//int main()
//{
//	
//	int ret = check_sys();
//
//	if (ret)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//
//	return 0;
//}
//int check_sys2()
//{
//	union 
//	{
//		int a;
//		char b;
//	}s;
//
//	s.a = 1;
//	return s.b;
//}
//
//int main()
//{
//	
//
//	int ret = check_sys2();
//	if (ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
