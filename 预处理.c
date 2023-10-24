#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d", a);
//
//	return 0;
//}

//写日志文件
// 
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d data:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__,i);
//		printf("%s\n", __FUNCTION__);
//
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//预处理指令

//#define					#pragma 
//#if						#endif
//#ifdef					#line

#define MAX 100
#define STR "zhangzhizhen"
#define reg register
#define do_forever for(;;);
#define SQUARE(x) (x)*(x)	//本质是替换，多用括号
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	printf("%d\n", SQUARE(5+2));
//
//	return 0;
//}

//#

//#define PRINT(x) printf("the value of  "#x" is %d\n",x)
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	PRINT(a);
//	PRINT(b);
//
//	return 0;
//}

//##

//#define CON(x,y) x##y
//
//int main()
//{
//
//	int zhangzhizhen = 19;
//	printf("%d\n", CON(zhangzhi, zhen));
//
//	return 0;
//}