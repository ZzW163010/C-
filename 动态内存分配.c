#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<windows.h>

//1.��������
//int a = 10; �ֲ�����-ջ��					ջ�����ֲ���������������ʽ����
//int g_a = 10; ȫ�ֱ���-��̬��				��������̬�ڴ���� malloc free calloc realloc
//2.��������								��̬����ȫ�ֱ�������̬����
//�ֲ�-ջ��
//ȫ��-����

//maloc/free


//int main()
//{
	//���ڴ�����10�������ڴ�
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
//		//�������￪�ٵ��ڴ治����
//		//ͨ��relloc��̬�����ڴ�
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

//����������
//1.����test()���к�Ľ��
//void GerMemory(char* p)	//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//{						//��GetMemory�������غ󣬶�̬�ڴ���δ�ͷ�(���ٵ��ڴ��λ���Ҳ�����������ڴ�й©)
//	p = (char*)malloc(100);	//ע��p����ʽ��������������ֵ��ָ��ʱ�򶼻Ὺ��һ���ڴ��ű������ַ,��ʱ�����͵�ַ�ĵ�ַ��ʵ���ǲ�ͬ��
//							//Ҫע��Ҫ�ı���Ǳ��������ǵ�ַ
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "zhangzhi");	//�������
//	printf(str);
//}
//int main()
//{
//	test();
//
//	return 0;
//}

//2.����test()���к�Ľ��

//char* GetMemory(void)
//{
//	char p[] = "zhangzhi";
//	return 0;
//}
//
////��ַ���ص����ؿռ��Լ��ͷ���
////ջ�ռ䷵������
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