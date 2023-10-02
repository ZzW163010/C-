#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

void meum()
{
	printf("*****************************\n");
	printf("****1.开始游戏 2.退出游戏****\n");
	printf("*****************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int tr = 0;
	
	while (1) 
	{
		printf("请输入你猜的数字(1-100之间)>>>:");
		scanf("%d", &tr);

		if (tr > ret)
		{
			printf("太大了\n");
		}
		else if (tr < ret)
		{
			printf("太小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
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
		printf("请选择模式>>>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出！！");
			break;
		default:
			printf("输入错误，请重新输入:\n");
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
//	printf("你必需要再1分钟内输入“我是猪”，否则将会关机\n");
//	system("shutdown -s -t 60");
//again:
//	printf("你必需要再1分钟内输入:我是猪，否则将会关机,\n请输入>>>>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消，嗯，真听话");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
