#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stddef.h>

//�ṹ�������
// 
//struct tag
//{
//	member - list;
//}variable - list;

struct Stu
{
	char name[20];
	char tel[15];
	char sex[3];
	short age;
}s3,s4;		//ȫ�ֱ���
//typedef struct Stu Stu;
struct Stu s5;		//ȫ�ֱ���

//struct			//�����ṹ��
//{
//	int a;
//}x;
// //struct			
//{
//	int a;
//}* px;
//������pxָ��&x
// 
// 
//int main()
//{
//	struct Stu s1 = { "zhangzhiwei","12345678910","��",20 };
//	struct Stu s2 = { "jiayan","12345678910","Ů",21 };
//
//	return 0;
//}

//�ṹ���������

//struct node
//{
//	int data;
//	struct node* next;
//};

//typedef���¶���ṹ��������

//typedef struct node
//{
//	int a;
//	node* next;
//
//}node;

//�ṹ������Ķ���ͳ�ʼ��

//struct T
//{
//	double w;
//	int h;
//};
//struct S
//{
//	char c;
//	int a;
//	double d;
//	struct T st;
//};
//
//int main()
//{
//	struct S s = { 'e', 100, 3.14, {70.00,180} };	//��ʼ��
//
//	printf("%c %d %lf %d %lf\n", s.c, s.a, s.d,s.st.h,s.st.w);
//
//	return 0;
//}

//�ṹ����ڴ����
//��һ����Ա����ṹ�������ַ����ƫ�ƴ�
//������Ա��ַ����������ı���
//�ṹ�����ʹ�С�����������ı���
//Ƕ�׽ṹ�壬�ȼ����ڲ�ṹ���С���ڲ�ṹ�����Ƕ�׽ṹ���ڲ������������������������ṹ��
//�Ĵ�С���ڲ�ṹ���ڲ����ⲿ������������������
 
//#pragma pack(4)
////ȡ�����õ�Ĭ�϶�����
//
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", (int)sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", (int)sizeof(s2));
//
//	return 0;
//}

//struct S
//{
//	char c;	//0
//	int i;	//4
//	double d;	//8
//};
//int main()
//{
//	printf("%d\n", (int)offsetof(struct S, c));
//	return 0;
//}
//struct S
//{
//	char c;	
//	int i;	
//	double d;
//};
//void Init(struct S* tmp)
//{
//	tmp->c = 'w';
//	tmp->i = 100;
//	tmp->d = 3.14;
//
//}
//void Print(struct S tmp)
//{
//	printf("%c %d %lf", tmp.c, tmp.i, tmp.d);
//}
//int main()
//{
//	struct S s = { 0 };
//	struct S* pf = &s;
//
//	Init(pf);
//	Print(s);
//
//	return 0;
//}

//λ�� - ������λ

//λ�εĳ�Ա������int unsigned int (char short) һ��ֻ����һ������
//��Ա����һ��:������

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}
struct S 
{
	char a : 2;
	char b : 5;
	char c : 4;
	char d : 3;
};

int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}

//λ�εĿ�ƽ̨����

//intλ�α������з��������޷������ǲ�ȷ���ġ�

//λ�������λ����Ŀ���ܵﶨ��16λ�������16��32λ�������32�����27����16λ��
//���������

//λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ���塣

//��һ���ṹ��������λ�εڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��Ӧ��ʣ���λ�ģ���
//����ʣ���λ�������ã����ǲ�ȷ���ġ�

