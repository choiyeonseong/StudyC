#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_num();				// �Լ� ����

int main()
{
	int result;

	result = get_num();		// �Լ� ȣ��
	printf("��ȯ�� : %d\n", result);

	return 0;
}

/* �Լ� ���� */
int get_num()				// �Լ� �Ӹ� : �Է� ���
{							// �Լ� ��ü
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}