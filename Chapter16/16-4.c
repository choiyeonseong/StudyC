#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);	// ���ڿ� �Է�
		str[i] = (char *)malloc(strlen(temp) + 1);	// ���ڿ� ũ�⸸ŭ ���� �Ҵ�
		strcpy(str[i], temp);
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	
	for (i = 0; i < 3; i++)
	{
		free(str[i]);	// ���� �Ҵ� ���� ��ȯ
	}

	return 0;
}