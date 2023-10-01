//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<math.h>


//乘法口诀表
//int main()
//{
//	int i, j;
//	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i ; j < 10; j++)
//		{
//			printf("%d ", i * j);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i ,j , i * j);
//		}
//		printf("\n");
//
//	}
//}
//求10个整数中的最大值

//int main()
//{
//	int ar[10] = { 0 };
//	int i, j, k;
//	int tmp = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &ar[i]);
//	}
//
//	for (j = 0; j < 10; j++)
//	{
//		for (k = j + 1; k < 10; k++)
//		{
//			if (ar[j] < ar[k])
//			{
//				tmp = ar[j];
//				ar[j] = ar[k];
//				ar[k] = tmp;
//			}
//		}
//	}
//	printf("最大值==%d", ar[0]);
//
//	return 0;
//}
//int main()
//{
//	int ar[] = { 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10 };
//	int max = ar[0];
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < ar[i])
//		{
//			max = ar[i];
//		}
//	}
//	printf("max==%d", max);
//
//	return 0;
//}
//分数求和
//int main()
//{
//	double in = 0.0, down = 0.0, sum = 0.0;
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			in += 1.0 / i;
//		}
//		if (i % 2 == 0)
//		{
//			down += 1.0 / i;
//		}
//	}
//	sum = in - down;
//	printf("%lf", sum);
//
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}

//数9的个数

//int main()
//{
//	int i = 0, count = 0;
//
//	for (i = 1; i <= 100; i ++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//
//	return 0;
//}
//打印素数
//int main()
//{
//	int i = 0, j = 0;
//
//	for (i = 101; i < 201; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印闰年
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//
//		}
//	}
//	return 0;
//}

//最大公约数

			//int main()
			//{
			//	const num1 = 12;
			//	const num2 = 14;
			//	int i = 0;
			//	int j = 0;
			//	int ar1[15] = { 0 };
			//	int ar2[15] = { 0 };
			//
			//	int ar3[15] = { 0 };
			//	int left = 0;
			//	int right = 2;
			//	int mid = 0, k = 0, m = 0;
			//
			//	int stp;
			//
			//	for (i = 1; i < num1; i++)
			//	{
			//		if (num1 % i == 0)
			//		{
			//			ar1[j] = i;
			//			j++;
			//		}
			//	}
			//	j = 0;
			//	for (i = 1; i < num2; i++)
			//	{
			//		if (num2 % i == 0)
			//		{
			//			ar2[j] = i;
			//			j++;
			//		}
			//	}
			//
			//	for (i = 0; i < 5; i++)
			//	{
			//		while (left <= right)
			//		{
			//			k = ar1[i];
			//			mid = (left + right) / 2;
			//
			//			if (ar2[mid] < k)
			//			{
			//				left = mid + 1;
			//			}
			//			else if (ar2[mid] > k)
			//			{
			//				right = mid - 1;
			//			}
			//			else
			//			{
			//				ar3[m] = ar1[i];
			//				m++;
			//				break;
			//			}
			//		}
			//		left = 0;
			//		right = 2;
			//	}
			//	for (i = 0; i < 2; i++)
			//	{
			//		for (j = i + 1; j < 3; j++)
			//		{
			//			if (ar3[i] < ar3[j])
			//			{
			//				stp = ar3[i];
			//				ar3[i] = ar3[j];
			//				ar3[j] = stp;
			//			}
			//		}
			//
			//	}
			//		
			//	printf("最大公约数==%d", ar3[0]);
			//
			//	return 0;
			//}

//打印3的倍数的数

			//int main()
			//{
			//	int i;
			//
			//	for (i = 1; i < 101; i++)
			//	{
			//		if ((i % 3) == 0)
			//		{
			//			printf("%d ", i);
			//		}
			//	}
			//}

//写代码将三个数按从大到小输出
				
//	//*int main()
//			{
//				int ar[] = { 3,1,8 };
//				
//				int i, j, stp;
//			
//				for (i = 0; i < 3; i++)
//				{
//					for (j = i+1; j < 3; j++)
//					{
//						if (ar[i] < ar[j])
//						{
//							stp = ar[i];
//							ar[i] = ar[j];
//							ar[j] = stp;
//						}
//					}
//						
//				}
//				for (i = 0; i < 3; i++)
//				{
//					printf("%d ", ar[i]);
//			
//				}
//			}*/
//
////答案:
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>

//int main()
//{
//
//	return 0;
//}

			//int main()
			//{
			//	int m = 0;
			//	int n = 0;
			//	int r = 0;
			//	scanf("%d %d", &m, &n);
			//	
			//	if (m < n)
			//	{
			//		int tmp = m;
			//		m = n;
			//		n = tmp;
			//
			//	}
			//	while (r = m % n != 0)
			//	{
			//		m = n;
			//		n = r;
			//	}
			//	printf("最大公约数==%d", r);
			//
			//	return 0;
//}


			//int main()
			//{
			//	int a = 0;
			//	int b = 0;
			//	int c = 0;
			//
			//	scanf("%d %d %d", &a, &b, &c);
			//	if (a < b)
			//	{
			//		int tmp = a;
			//		a = b;
			//		b = tmp;
			//	}
			//	if (a < c)
			//	{
			//		int tmp = a;
			//		a = c;
			//		c = tmp;
			//	}
			//	if (b < c)
			//	{
			//		int tmp = b;
			//		b = c;
			//		c = tmp;
			//	}
			//
			//	printf("%d %d %d", a, b, c);
			//
			//	return 0;
			//}
