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

//int my_strcmp(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}

//int main()
//{
//	char* ar1 = "zhi";
//	char* ar2 = "zhia";
//	int ret = my_strcmp(ar1, ar2);
//
//	if (ret > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(ret < 0)
//	{
//		printf("p1<p2\n");
//	}
//	else
//	{
//		printf("p1==p2");
//	}
//
//	return 0;
//}

//strncpy

//自行实现

//char* my_strncpy(char* str1, const char* str2, int n)
//{
//	assert(n > 0);
//	assert(str1 && str2);
//	
//	char* start = str1;
//	int len = strlen(str2);
//	int i = 0;
//	if (n <= len)
//	{
//		for (i = 0; i < n; i++)
//		{
//			*str1 = *str2;
//			str1++;
//			str2++;
//		}
//	}
//	else
//	{
//		for (i = 0; i < len; i++)
//		{
//			*str1 = *str2;
//			str1++;
//			str2++;
//		}
//		for (i = 0; i < n - len; i++)
//		{
//			*str1 = '\0';
//			str1++;
//		}
//	}
//	return start;
//}
//char* my_strncpy(char* dest, char* source, int count)
//{
//	char* start = dest;
//
//	while (count && (*dest++ = *source++))
//		count--;
//
//	if (count)
//		while (--count)
//			*dest++ = '\0';
//
//	return start;
//}
//int main()
//{
//	
//	char ar1[30] = "zhang";
//	char ar2[] = "bit";
//	
//	my_strncpy(ar1, ar2, 5);
//
//	return 0;
//}

//int main()
//{
//	char ar1[30] = "zhang";
//	char ar2[] = "ye";
//
//	strncpy(ar1, ar2, 2);
//
//	return 0;
//}

//strncat

//自行实现
//char* my_strncat(char* dest, const char* source, int count)
//{
//	char* start = dest;
//
//	while (*dest++);
//	
//	--dest;
//	
//	while (count && (*dest++ = *source++))
//	{
//		count--;
//	}
//
//	return start;
//}
//char* my_strncat(char* front, const char* back, int count)
//{
//	char* start = front;
//
//	while (*front++);
//
//	front--;
//
//	while (count--)
//		if (!(*front++ = *back++))
//			return start;
//
//	*front = '\0';
//}
//int main()
//{
//	char ar1[30] = "zhang";
//	char* ar2 = "zhi";
//
//	my_strncat(ar1, ar2, 6);
//
//	return 0;
//}

//strncmp

//int my_strncmp(const char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//
//	while (count && (*str1 == *str2))
//	{
//		if (!*str1)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//		count--;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "adcqwer";
//
//	int ret = my_strncmp(p1, p2, 3);
//
//	if (!ret)
//	{
//		printf("p1==p2\n");
//	}
//	else if (ret > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

//strstr

//char* my_strstr(const char* str, const char* pstr)
//{
//	assert(str && pstr);
//	char* des = str;
//	char* p1 = str;
//	char* p2 = pstr;
//
//	if (!*pstr)
//	{
//		return str;
//	}
//	while (*des)
//	{
//		while (*p1 != *p2)
//		{
//			p1++;
//		};
//		des = p1;
//
//		while (*p1 && *p2 && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//			return des;
//		else
//		{
//			des++;
//		}
//	}
//	return NULL;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//
//	if (!*s2)
//		return p1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//
//		while (*s1 & *s2 * (*s1 == *s2))
//			s1++, s2++;
//
//		if (!*s2)
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* cp = (char*)str1;
//	char* s1, * s2;
//
//	if (!str2)
//		return (char*)str1;
//	
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)str2;
//
//		while (*s1 && *s2 && !(*s1 - *s2))
//			s1++, s2++;
//
//		if (!*s2)
//			return cp;
//		if (!*s1)
//			return NULL;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbcdde";
//	char* p2 = "bbc";
//
//	strstr(p1, p2);
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//KMP 算法

//strtok
//自行实现
//int main()
//{
//	char arr[] = "zha@zhi%z)hen$n^ty";
//	char* p = "$^%&)@";
//
//	char* buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	/*printf("%s ", ret);
//
//	while (ret != NULL)
//	{
//		ret = strtok(NULL, p);
//		printf("%s ", ret);
//	}*/
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}
//int main()
//{
	//错误码 错误信息
	//0 no error
	//1 operation not permitted

	//errno 是一个全局的错误码的变量
	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值给errno

	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}*/
	/*char* str = strerror(errno);
	printf("%s\n", str);
	return 0;*/
//}

//字符分类函数

//字符转换函数

int main()
{
	char ch = tolower('q');

	putchar(ch);

	return 0;
}
