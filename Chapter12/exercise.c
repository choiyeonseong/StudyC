// �ҹ��� �Է� �빮�� ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	�빮�� : 65-90
	�ҹ��� : 97-122
	*/
	char a;
	
	while (1)
	{
		printf("���ڸ� �Է��ϼ���:\n$ ");
		a = getchar();
		getchar();	// ���๮�� ����
		if (a > 64 && a < 91)
		{
			printf("�ҹ��ڷ� ��ȯ : %c\n", a + 32);
		}
		else if (a > 96 && a < 123)
		{
			printf("�빮�ڷ� ��ȯ : %c\n", a - 32);
		}
		else {
			printf("���ڰ��� �ƴմϴ�.\n���α׷� ����\n");
			break;
		}
	}
}