#define _CRT_SECURE_NO_WARNINGS 
#include"contract.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，不能增加\n");
	}
	else
	{
		printf("请输入名字:>>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>>");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:>>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");

	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-15s\t%-4s\t%-6s\t%-12s\t%-50s\n", "姓名", "年龄", "性别", "电话", "地址");

		for (i = 0; i < ps->size; i++)
		{
			printf("%-15s\t%-4d\t%-6s\t%-12s\t%-50s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex, 
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
static int Find_By_Name(const struct Contact* ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(name, ps->data[i].name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
	return i;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入您要删除的联系人的名字:>>");
	scanf("%s", name);
	int pos = Find_By_Name(ps, name);
	if (pos == -1)
	{
		printf("未找到该联系\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - pos; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
		
}
void SearchContract(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>>>");
	scanf("%s", name);

	int pos = Find_By_Name(ps, name);
	if (pos == ps->size)
	{
		printf("未找到该联系人\n");
	}
	else
	{
		printf("%-15s\t%-4s\t%-6s\t%-12s\t%-50s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-15s\t%-4d\t%-6s\t%-12s\t%-50s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}
void Modifu_Contract(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>>>");
	scanf("%s", name);
	int pos = Find_By_Name(ps, name);
	
	if (pos == -1)
	{
		printf("未查找到要修改人的名字\n");
	}
	else
	{
		printf("请输入要修改的名字(若不修改则输入原来的):>>");
		scanf("%s", ps->data[pos].name);
		printf("请输入要修改的年龄(若不修改则输入原来的):>>");
		scanf("%d", &ps->data[pos].age);
		printf("请输入要修改的性别(若不修改则输入原来的):>>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入要修改的电话(若不修改则输入原来的):>>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入要修改的地址(若不修改则输入原来的):>>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}
void SortContact(struct Contact* ps)
{
	
}