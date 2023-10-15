#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen()模拟实现
//1.计数器
//2.递归
//3.指针+-指针
//int my_strlen(const char* ar)
//{
//	if (*ar)
//	{
//		return 1 + my_strlen(ar + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//int main()
//{
//	int *ar = "zhangzhizhen";
//
//	int ret = my_strlen(ar);
//
//	printf("%d", ret);
//}


//strcpy


//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//}

//strcpy()模拟实现

//char* my_strcpy(char* des, const char* scr)
//{
//	assert(des != NULL);
//	assert(scr != NULL);
//
//	while (*des++ = *scr++);
//
//	return des;
//}
//int main()
//{
//	char des[] = "zhangzhi";
//	char scr[] = "zhen";
//
//	my_strcpy(des, scr);
//
//	printf("%s", des);
//}

//strcat

//char* my_strcat(char* des, const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//
//	/*int len = strlen(des);
//	int i = 0;
//
//	while (des[len++] = src[i++]);
//
//	return des;*/
//
//	while (*des != '\0')
//	{
//		des++;
//	}
//	while (*des++ = *src++);
//
//	return des;
//}
//int main()
//{
//	char ar1[30] = "zhang";
//	char ar2[] = "zhi";
//
//	my_strcat(ar1, ar2);
//
//	printf("%s", ar1);
//
//	return 0;
//}

//strcmp

int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
int main()
{
	char* ar1 = "zhi";
	char* ar2 = "zhia";
	int ret = my_strcmp(ar1, ar2);

	if (ret > 0)
	{
		printf("p1>p2\n");
	}
	else if(ret < 0)
	{
		printf("p1<p2\n");
	}
	else
	{
		printf("p1==p2");
	}

	return 0;
}
