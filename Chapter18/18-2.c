#include<stdio.h>
int main()
{
	FILE* fp;	// ���� ����ü
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);	// ������ ���Ͽ��� ���� �Է�
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);	// �Է��� ���ڸ� ȭ�鿡 ���
	}
	fclose(fp);

	return 0;
}
