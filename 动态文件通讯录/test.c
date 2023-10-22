#define _CRT_SECURE_NO_WARNINGS 
#include"contract.h"
//1.存放1000用户信息
//名字 电话 性别 住址 年龄

//2.增加用户信息
//3.删除指定用户信息
//4.查找用户信息
//5.修改用户信息
//6.打印用户信息
//7.排序用户信息

void menu()
{
	printf("****************************************************\n");
	printf("**************1.add           2.del*****************\n");
	printf("**************3.search        4.modify**************\n");
	printf("**************5.show          6.sort****************\n");
	printf("**************7.save          0.exit****************\n");
}
int main()
{
	int input = 0;
	struct Contact con;	//包含1000个元素和size
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>>>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContract(&con);
			break;
		case MODIFY:
			Modifu_Contract(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContract(&con);
			printf("保存成功\n");
			break;
		case EXIT:
			//销毁
			SaveContract(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误请重新输入!!!\n");
			break;
		}
	} while (input);

	return 0;
}