#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//����ˮ����
//һƿ1Ԫ,������ƿ��һƿ��20Ԫ���Ժȼ�ƿ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int num = 0;
//	
//	num = money * 2 - 1;
//	
//	printf("%d", num);
//
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	int num = money;
//
//	while (money /= 2)
//	{
//		num = num + money;
//	}
//	//do
//	//{
//	//	num = num + money;
//
//	//} while (money /= 2);
//	
//	printf("%d", num + 1);
//}
//int main()
//{
//	int money = 0;
//	
//	scanf("%d", &money);
//
//	int total = 0;
//	int empty = 0;
//	total = money;
//	empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}

//����������������ż����˳������ǰż�ں�
//void swap(int ar[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{	
//			if ((ar[j] % 2) == 0 && (ar[j + 1] % 2 != 0))
//			{
//				int tmp = ar[j];
//				ar[j] = ar[j + 1];
//				ar[j + 1] = tmp;
//			}
//		}
//	}
//}
//void move(int ar[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	//��ż��
//	while (left < right)
//	{
//		while ((left < right) && (ar[left] % 2 == 1))
//		{
//			left++;
//		}
//		//������
//		while ((left < right) && (ar[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = ar[left];
//			ar[left] = ar[right];
//			ar[right] = tmp;
//		}
//	}
//}
/*
int main()
{
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(ar) / sizeof(ar[0]);

	//swap(ar,sz);
	move(ar, sz);

	return 0;
}
*/

//�ַ�������
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void vert(char ar[], int sz, int n)
//{
//	assert(ar);
//
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//
//	for (i = 0; i < n; i++)
//	{
//		int tmp = ar[left];
//		while (left < right)
//		{
//			ar[left] = ar[left + 1];
//			left++;
//		}
//		ar[right] = tmp;
//		left = 0;
//	}	
//}

//void rev(char* left, char* right)
//{
//	assert(right != NULL);
//	assert(left != NULL);
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* ar, int n)
//{
//	int len = strlen(ar);
//	assert(ar);
//	assert(n <= len);
//
//	rev(ar, ar + n - 1);
//	rev(ar + n, ar + len - 1);
//	rev(ar, ar + len - 1);
//}
//void right_move(char* ar, int n)
//{
//	int len = strlen(ar);
//	assert(ar);
//	assert(n <= len);
//
//	rev(ar + len - n, ar + len - 1);
//	rev(ar, ar + len - n - 1);
//	rev(ar, ar + len - 1);
//
//}
//int juge(char* ar, char* arr, int n)
//{
//	assert(ar != NULL);
//	assert(arr != NULL);
//
//	//�ж��Ƿ��������
//	int len = strlen(ar);
//	int rel = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(ar, 1);
//		if (strcmp(ar, arr) == 0)
//		{
//			rel = 1;
//			break;
//		}
//	}
//	//�ж��Ƿ��������
//	int rer = 0;
//	for (i = 0; i < len; i++)
//	{
//		right_move(ar, 1);
//		if (strcmp(ar, arr) == 0)
//		{
//			 rer = 1;
//			 break;
//		}
//	}
//	if (rel || rer)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	//scanf("%d\n", &n);
//	printf("��������֤�ַ���\n");
//	//char ar[] = { 'A','B','C','D','F','G','H'};
//	//int sz = sizeof(ar) / sizeof(ar[0]);
//	char ar[] = "abcdef";
//	int len = strlen(ar);
//	char arr[] = "fabcde";
//
//	int ret = juge(ar, arr, n);
//
//	if (ret)
//	{
//		printf("���ַ���Ϊ��ת�ַ���\n");
//	}
//	else
//	{
//		printf("���ַ������Ƿ�ת�ַ���\n");
//	}
//
//	return 0;
//}
int is_left_move(char* str1, char* str2)
{
	int len = strlen(str1);
	//1.��str1�ַ�����׷��һ��str1�ַ���
	strncat(str1, str1, 6);
	//2.�����Ƿ�str2����׷�Ӽ��ַ������Ӵ�
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";

	int ret = is_left_move(arr1, arr2);

	if (ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
