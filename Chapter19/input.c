#include<stdio.h>

extern int count;	// main.c�� ����� ���� ����ϰڴ�

int total = 0;

int input_data(void)
{
	int pos;

	while (1)
	{
		printf("��� �Է� : ");
		scanf("%d", &pos);
		if (pos < 0) break;	// ����� �ƴϸ� ����
		count++;
		total += pos;
	}

	return total;
}