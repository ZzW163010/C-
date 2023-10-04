#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = {'s'};
	//初始化键盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	char ret = 0;
	while (1)
	{
		//玩家下棋
		 PlayerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //判断玩家是否赢
		 ret = ISWin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		 //电脑下棋
		 ComputerMove(board, ROW, COL);
		 DisplayBoard(board, ROW, COL);
		 //判断电脑是否赢
		 ret = ISWin(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else 
	{
		printf("平局\n");
	}
}

void meun()
{
	printf("*****************************************************\n");
	printf("****************1 开始游戏  0 退出游戏***************\n");
	printf("*****************************************************\n");


	
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择模式(输入1或0)>>>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n\n");
			break;
		default:
			printf("输入错误，请输入0或1\n\n");
			break;
		}
	} while (input);
}
int main()
{
	test();

	return 0;
}