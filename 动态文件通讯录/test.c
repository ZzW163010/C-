#define _CRT_SECURE_NO_WARNINGS 
#include"contract.h"
//1.���1000�û���Ϣ
//���� �绰 �Ա� סַ ����

//2.�����û���Ϣ
//3.ɾ��ָ���û���Ϣ
//4.�����û���Ϣ
//5.�޸��û���Ϣ
//6.��ӡ�û���Ϣ
//7.�����û���Ϣ

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
	struct Contact con;	//����1000��Ԫ�غ�size
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>>>");
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
			printf("����ɹ�\n");
			break;
		case EXIT:
			//����
			SaveContract(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������������!!!\n");
			break;
		}
	} while (input);

	return 0;
}