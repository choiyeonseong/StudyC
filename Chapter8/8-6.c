#include <stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);	// ���ڿ��� Ưȭ�Ǿ��ִ� �Է� �Լ�
	
	puts("�Էµ� ���ڿ� : ");	// ���ڿ� ���
	puts(str);

	return 0;
}