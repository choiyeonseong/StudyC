#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);	// 2���� ���ڸ� ���� �Է�(����, ��, ���๮�ڵ� ���ڷ� �Է�)
	//scanf("%c %c", &ch1, &ch2);	// ������ �����ϰ� �� ���� ���ڸ� �Է�


	printf("[%c%c]", ch1, ch2);	// �Էµ� ���� ���

	return 0;
}