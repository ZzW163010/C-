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
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);

}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	meun();
	
	do
	{
		printf("请选择游戏模式>>>:");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:

			game();
			break;
		case 0:
			printf("游戏已退出\n");
			break;
		default:
			printf("请输入0或1\n");
			break;
		}

	}while(input);
}

int main()
{

	test();

	return 0;
}
