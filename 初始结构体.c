#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//����һ��ѧ��
//����
//����
//�绰
//�Ա�
//struct �ṹ��ؼ���		Stu-�ṹ���ǩ		struct Stu�ṹ�����

//typedef struct Stu	
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//} Stu;
//
// 
//int main()
//{
//	struct Stu s1 = { "zhangzhiwei",19,"18541689721","��" };
//	Stu s2 = {"wangci",21,"13654235677","����"};
//
//	return 0;
//}
//struct S
//{
//	int a;
//	char b;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello,bit";
//	struct T t = { "zhang",{200,'z',"hello,world",2.14},arr };
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	printf("%s\n", t.s.arr);
//
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//} Stu;
//
//void print2(Stu* tmp)
//{
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//void print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//int main()
//{
//	struct Stu s1 = { "zhangzhiwei",19,"18541689721","��" };
//	print1(s1);
//	print2(&s1);
//	return 0;
//}
//int main()
//{
//	int temp[5] = { 1,2,3,4,5 };
//	int(*p)[5] = &temp;
//	int i = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(*p + i));
//		printf("%d\n", (*p)[i]);
//	}
//}
