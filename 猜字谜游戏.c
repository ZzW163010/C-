#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

void meum()
{
	printf("*****************************\n");
	printf("****1.��ʼ��Ϸ 2.�˳���Ϸ****\n");
	printf("*****************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int tr = 0;
	
	while (1) 
	{
		printf("��������µ�����(1-100֮��)>>>:");
		scanf("%d", &tr);

		if (tr > ret)
		{
			printf("̫����\n");
		}
		else if (tr < ret)
		{
			printf("̫С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
	
}
int main()
{
	meum();
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		printf("��ѡ��ģʽ>>>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�����");
			break;
		default:
			printf("�����������������:\n");
			break;
		}
	}
	while (input);

	return 0;
}



























//int main()
//{
//	char input[20] = { 0 };
//
//	printf("�����Ҫ��1���������롰�����������򽫻�ػ�\n");
//	system("shutdown -s -t 60");
//again:
//	printf("�����Ҫ��1����������:���������򽫻�ػ�,\n������>>>>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ�����ţ�������");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}