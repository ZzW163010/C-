#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//(*(void(*)())0)()	
// 		
//void(*)()--ָ�򷵻�void�����޲����ĺ���ָ��
//(void(*)())--ǿ������ת��
//(void(*)())0--��0ת����(void(*)())����
//*(void(*)())0()--��0���н����ò����øú���

//void(*signal(int, void(*)(int)))(int)
//signal(int, void(*)(int))--����
//void(*)(int)--��������
//������һ��������Ϊsingal,����void(*)(int)����,��int,void(*)(int)Ϊ�������͵ĺ���

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