#pragma once
#include<string.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo* data;
	int size;
	int capacity;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContract(const struct Contact* ps);
void Modifu_Contract(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContract(struct Contact* ps);