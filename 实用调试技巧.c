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

//�ֲ�����,�Զ�����
//�����
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


//���ö�ջ
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

//������ϰ
int main()
{
	int i = 0;
	int sum = 0;//�������ս��
	int n = 0;
	int ret = 1;//����n�Ľ׳�
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