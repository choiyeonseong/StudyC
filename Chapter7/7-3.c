#include<stdio.h>

void print_char(char, int);			// �Լ� ����

int main()
{
	print_char('@', 5);				// �Լ� ȣ��

	return 0;
}

void print_char(char ch, int count)	// �Ű������� ������ ��ȯ���� ����
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	//return;	// ����� ������ ���� �Ƚᵵ ��
}