#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>


//void add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		add(&num);
//		printf("%d ", num);
//
//	}
//	
//	return 0;
//}

int seek(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��������Ҫ��ѯ������>>>:");
	scanf("%d", &k);
	int ret = seek(arr,k,sz);
	
	if (ret == 1)
	{
		printf("�鲻��\n");
	}
	else
	{
		printf("���==%d", ret);
	}
	return 0;
}



//int lyear(int x)
//{
//	if ((x % 4 == 0 && x % 100!= 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int a = 0;
//	printf("���������>>>:");
//	scanf("%d", &a);
//
//	if (lyear(a))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}



//int jug(int a)
//{
//	int i = 0;
//
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (i > sqrt)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//
//	printf("������һ������>>>");
//	scanf("%d", &a);
//
//	if (jug(a))
//	{
//		printf("����������\n");
//	}
//	else
//	{
//		printf("������������");
//	}
//	return 0;
//}
//void swap2(int* pa, int* pb)	//�β�
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
////������
//void swap(int a, int b)
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = a;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d", a, b);
//	swap2(&a, &b);	//ʵ��
//
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}