#define _CRT_SECURE_NO_WARNINGS 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
//int add3(int a, int b)
//{
//	return 2*a + b;
//}
//int add2(int a, int b)
//{
//	return 3*a + b;
//}
//int add1(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int(*pa[3])(int, int) = { add1,add2,add3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", pa[i](1, 2));
//	}
//	return 0;
//}
//char* (*pf)(char*, const char* );
//char* (*pf[4])(char*, const char*);

//������(����ָ������)--ת�Ʊ�
//switch+���ú���ָ��
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mui(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int calu(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("�����������>>>:");
//	scanf("%d%d", &x, &y);
//
//	return p(x, y);
//}
//void menu()
//{
//	printf("****************************************\n");
//	printf("**********  1. add   2.sub  ************\n");
//	printf("**********  3. mui   4.div  ************\n");
//	printf("*************    0.exit  ***************\n");
//	printf("****************************************\n");
//}

//void test()
//{
//	int input = 0;
//	do
//	{
//		int (*p[])(int, int) = { 0,add,sub,mui,div };
//		int sz = sizeof(p) / sizeof(p[0]);
//
//		menu();
//		
//		printf("��������������>>>:");
//		scanf("%d", &input);
//
//		if (input >0 && input <sz)
//		{
//			
//			int ret = calu(p[input]);
//			printf("������>>>:%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("���������˳�");
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//
//	} while (input);
//
//	printf("���������˳�");
//	
//}
//void test()
//{
//	int input = 0;
//	int (*p[])(int, int) = { 0,add,sub,mui,div };
//	int sz = sizeof(p) / sizeof(p[0]);
//
//	menu();
//	
//	do
//	{
//		printf("��������������>>>:");
//		scanf("%d", &input);
//
//		if (input > 0 && input < sz)
//		{
//			int x = 0;
//			int y = 0;
//
//			printf("����������������>>>:");
//			scanf("%d%d", &x, &y);
//			printf("������==%d\n", p[input](x, y));
//
//		}
//		else if (input == 0)
//		{
//			printf("���������˳�");
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	} while (input);
//
//	printf("���������˳�");
//	
//}
//int main()
//{
//	test();
//
//	return 0;
//}
//int(*(*p[6])[5])(int, int);		//ָ����ָ�������ָ��
//int*(*p[5])(int, int);		//����ָ���ָ������


// ð������ʵ�ֲ�ͬ���ݵıȽ�

//ʵ��bubble_sort�����ĳ���Ա��֪�����Ƚϵ�����Ԫ�ص�����
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};

int cmp_struct_by_name2(void* e1, void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);

}

test()
{
	//int arr[10] = { 9,3,5,2,7,8,0,6,1,4 };
	struct stu s[3] = { {"zhangsan",30},{"lisi",40},{"wangwu",35} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_by_name2);
}
int main()
{
	test();
}
//void bubble_sort(void* base, int sz, int width ,int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 1; j < sz - i; j++)
//		{
//			if (cmp)
//			{
//				int tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_struct_by_name(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int main()
//{
//	int arr[10] = { 2, 4, 5, 7, 9, 10, 1, 6, 8, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",30},{"lisi",40},{"wangwu",35} };
// 
//	bubble_sort(s, sz,cmp_struct_by_name);
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//return 0;
//}
 
 
//qsort--��������

//int cmp_int(const void* e1, const* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[5] = { 2,7,3,8,1};
//	int sz = sizeof(arr) / arr[arr[0]];
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//}
// 
// 
// 
// 
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",30},{"lisi",40},{"wangwu",35} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ�������Ǵ�������Ԫ�ص�ַ
//	//�ڶ��������Ǵ����������Ԫ�ظ���
//	//�����������Ǵ���������Ԫ���ֽڴ�С
//	//���ĸ������Ǵ���������ȽϷ�ʽ��������������������Ҫ���������Ԫ�ص�ַ
//}
//int main()
//{
//	test2();
//}





//int main()
//{
//	int a = 10;
//	void* pa = &a;
//	int* pc = &a;
//	//void* ���Խ��ܸ������͵�ָ��
//	
//	//*p = 0;
//	//void���͵�ָ�벻�ܽ��н�����
//	//void���͵�ָ�벻�ܽ���+=�����Ĳ���
//
//	//�������ǿ������ת��
//
//	return 0;
//}