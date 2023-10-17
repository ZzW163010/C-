#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

//memcpy


//void swap(char* p1, char* p2, int ser)
//{
//	int i = 0;
//	for (i = 0; i < ser; i++)
//	{
//		*p1++ = *p2++;
//	}
//}
//void* my_memcpy(void* ar1, void* ar2, int step, int ser)
//{
//	assert(ar1 && ar2);
//	
//	int count = step;
//	int i = 0;
//
//	while (count)
//	{
//		swap((char*)ar1 + i * ser, (char*)ar2 + i * ser, ser);
//		count--;
//		i++;
//	}		
//}
//void* my_memcpy(void* ar1, const void* ar2, int num)
//{
//	void* ret = ar1;
//	while(num--)
//	{
//		*(char*)ar1 = *(char*)ar2;
//		++(char*)ar1;
//		++(char*)ar2;
//	}
//	return ar1;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[6] = { 0 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int ser = sizeof(arr1[0]);
//
//	my_memcpy(arr2, arr1, sz, ser);
//
//	return 0;
//}

//memmove

//void* my_memmove(void* des,  void* scr, int num)
//{
//	char* start = des;
//
//	if (des > scr)
//	{
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)scr + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)des = *(char*)scr;
//			++(char*)des;
//			++(char*)scr;
//		}
//		return start;
//	}
//	
//}
//void* my_memmove(void* des, void* scr, int num)
//{
//	char* start = des;
//
//	if (des < scr || des>(char*)scr + num)
//	{
//		while (num--)
//		{
//			*(char*)des = *(char*)scr;
//			++(char*)des;
//			++(char*)scr;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)scr + num);
//		}
//		return start;
//	}
//
//}
//int main()
//{
//	int arr1[8] = { 1,2,3,4,5,7,8,9 };
//	int arr2[6] = { 0 };
//	
//	my_memmove(arr1, arr1+2, 12);
//
//	return 0;
//}

//memcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,5,6 };
//
//	int ret = memcmp(arr1, arr2, 9);
//	
//	printf("%d", ret);
//
//	return 0;
//}

//memset

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);

	return 0;
}



