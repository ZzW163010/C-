#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

void meun()
{
	printf("****************************************************\n");
	printf("******************1.play   0.exit*******************\n");
	printf("****************************************************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//����
	FindMine(mine, show, ROW, COL);

}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	meun();
	
	do
	{
		printf("��ѡ����Ϸģʽ>>>:");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:

			game();
			break;
		case 0:
			printf("��Ϸ���˳�\n");
			break;
		default:
			printf("������0��1\n");
			break;
		}

	}while(input);
}

int main()
{

	test();

	return 0;
}
