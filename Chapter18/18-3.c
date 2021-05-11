#include<stdio.h>
int main()
{
	FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;
	while (str[i]!='\0')
	{
		fputc(str[i], fp);	// 한 문자를 파일로 출력
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}