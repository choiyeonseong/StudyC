#include<stdio.h>

int main(int argc, char* argv[]) // �ü������ �Լ� ���� �Է�
{
	int i;

	printf("�Է� ���� : %d", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("%d��° �Էµ� �� : %s\n", i, argv[i]);
	}

	return 0;
}