#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = {'s'};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	char ret = 0;
	while (1)
	{
		//�������
		 PlayerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //�ж�����Ƿ�Ӯ
		 ret = ISWin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		 //��������
		 ComputerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //�жϵ����Ƿ�Ӯ
		 ret = ISWin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else 
	{
		printf("ƽ��\n");
	}
}

void meun()
{
	printf("*****************************************************\n");
	printf("****************1 ��ʼ��Ϸ  0 �˳���Ϸ***************\n");
	printf("*****************************************************\n");


	
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��ģʽ(����1��0)>>>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n\n");
			break;
		default:
			printf("�������������0��1\n\n");
			break;
		}
	} while (input);
}
int main()
{
	test();

	return 0;
}