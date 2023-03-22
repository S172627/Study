#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;

int main()
{
	stu s1 = { "张三",20,"123456789","男" };
	return 0;
}