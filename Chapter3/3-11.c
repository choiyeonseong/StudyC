#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);	// �ּҿ����� &

	printf("�̸� �Է� : ");
	scanf("%s", name);		// �迭 �Է��Ҷ��� & ������� ����, �迭�̸��� �ּ�

	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}