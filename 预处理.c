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
//带有副作用的宏参数
//时刻铭记宏是替换

//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//#define MALLOC(num,type) malloc(num*sizeof(type));
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = (a++) > (b++) ? (a++) : (b++);
//	
//	int fmax = Max(a, b);
//
////条件编译指令
//
//#if 1
//	printf("%d ", fmax);
//#elif 1
//	printf("%d ", max);
//#else
//	printf("%d ", a);
//#endif
//	printf("%d ", b);
//
//	return 0;
//}


int main()
{
	int ar[10] = { 1,2,3,4,5,1,2,3,4,6 };
	
	int sz = sizeof(ar) / sizeof(ar[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if ((ar[j] % 2) != (ar[j + 1] % 2))
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
	int tmp = 1;

	for (i = 0; i < 5; i++)
	{
		tmp = tmp ^ ar[i];
	}
	printf("%d", tmp);

	return 0;
}



//2023.10.25 为期一个月来到了最后一节,让我们一起模拟写下offset,江湖再见吧!!!
//
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//
//	return 0;
//}
