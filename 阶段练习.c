#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//字符串的逆序函数
//void rev(char ar[], int sz)
//{
//	assert(ar != NULL);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		char tmp = ar[left];
//		ar[left] = ar[right];
//		ar[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char str[] = "zhang";
//	int sz = strlen(str);
//
//	rev(str,sz);
//
//	printf("%s", str);
//
//	return 0;
//}

//计算求和

int sum5(int a, int n)
{
	int i = 0;
	int sum = 0;
	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	return sum;
}
int main()
{
	int a = 0;
	int n = 0;

	scanf("%d%d", &a, &n);

	int ret = sum5(a,n);

	printf("%d\n", ret);

	return 0;
}