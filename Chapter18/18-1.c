#include<stdio.h>
int main()
{
	FILE* fp;	// ���� ����ü

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	printf("������ ���Ƚ��ϴ�.\n");
	fclose(fp);

	return 0;
}