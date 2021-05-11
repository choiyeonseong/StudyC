#include<stdio.h>
int main()
{
	FILE* fp;	// 파일 구조체

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	printf("파일이 열렸습니다.\n");
	fclose(fp);

	return 0;
}