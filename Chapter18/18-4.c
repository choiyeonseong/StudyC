#include<stdio.h>

//// ǥ�� ����� ��Ʈ�� ���
//int main()
//{
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();	// Ű���忡�� ���� �Է�
//		if (ch == EOF)	// ^Z�� �Է� ����
//		{
//			break;
//		}
//		putchar(ch);	// ȭ�鿡 ���� ���
//	}
//	return 0;
//}

// ������ ������ �������� �ʰ� �ü���� ������ ���� ��Ʈ�� ���
int main()
{
	int ch;

	while (1)
	{
		ch = fgetc(stdin);	// Ű���忡�� ���� �Է�
		if (ch == EOF)		// ^Z�� �Է� ����
		{
			break;
		}
		fputc(ch, stdout);	// ȭ�鿡 ���� ���
	}
	return 0;
}