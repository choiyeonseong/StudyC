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
		printf("문자열을 입력하세요 : ");
		gets(temp);	// 문자열 입력
		str[i] = (char *)malloc(strlen(temp) + 1);	// 문자열 크기만큼 동적 할당
		strcpy(str[i], temp);
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	
	for (i = 0; i < 3; i++)
	{
		free(str[i]);	// 동적 할당 영역 반환
	}

	return 0;
}