#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	getchar();		// ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
	//scanf("%*c");	// ���ۿ��� �ϳ��� ���ڸ� �о ����, ������ �ʿ����
	//fgetc(stdin);	// ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}