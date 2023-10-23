#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	int a = 20;
//	FILE*pf =  fopen("..\\..\\test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		fwrite(&a, 4, 1, pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	
//
//	return 0;
//}

//文件的顺序读写

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite != NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	fputc('z', pfWrite);
//	fputc('h', pfWrite);
//	fputc('a', pfWrite);
//	
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead != NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//
//	return 0;
//	
//}
 
//int main()
//{
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//	//FILE* pf = fopen("test.txt", 'w');
//	//fputc('w', stdout);
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	char arr[20] = {0};
//
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	
//	//fgets(arr, 8, pf);
//	//printf("%s", arr);
//	//fgets(arr, 8, pf);
//	//printf("%s", arr);
//	fputs("zhangzhiwei", pf);
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	fgets(arr, 20, stdin);
//	fputs(arr, stdout);
//	
//	gets(arr);
//	puts(arr);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = {0};
//	
//	sprintf(buf, "%s %d %f", s.arr, s.n, s.score); //将格式化的数据转化为字符串
//	//printf("%s", buf);
//	sscanf(buf, "%s %d %f", &tmp.arr, &tmp.n, &tmp.score);	//从字符串读取格式的数据
//	printf("%s %d %f", tmp.arr, tmp.n, tmp.score);
//
//	return 0;
//}
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fscanf(pf, "%d %s %f", &s.n, &s.arr, &s.score);
//	printf("%d %s %f", s.n, s.arr, s.score);
//	fclose(pf);
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double scorce;
};
//int main()
//{
//	struct S s = { "zhangsan",12,3.18 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s, sizeof(s), 1, pf);
//	pclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fread(&s, sizeof(s), 1, pf);
//
//	pclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//文件的随机读写

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fgetc(pf);
//	fseek(pf, 2, SEEK_CUR);
//	
//	int pos = ftell(pf);
//	int ch = fgetc(pf);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%d\n", pos);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读取文本文件

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	if (ferror(pf))
//	{
//		printf("I/O error when reading");
//	}
//	else if (feof(pf))
//	{
//		printf("End if file reached succesfully");
//	}
//	return 0;
//}

//读取二进制文件

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 0;
//	}
//
//	int ch = 0;
//	while (fread(&ch,sizeof(int),1,pf) == 1)
//	{
//		printf("%c", ch);
//	}
//	if (ferror(pf))
//	{
//		printf("I/O error when reading");
//	}
//	else
//	{
//		printf("file reached successfully");
//	}
//}