#include<stdio.h>
int main()
{
	FILE* fp;	// 파일 구조체
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);	// 개방한 파일에서 문자 입력
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);	// 입력한 문자를 화면에 출력
	}
	fclose(fp);

	return 0;
}
