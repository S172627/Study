#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;

int main()
{
	stu s1 = { "����",20,"123456789","��" };
	return 0;
}