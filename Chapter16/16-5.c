#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_str(char** ps);

int main()
{
	char temp[80];
	char* str[21] = { 0 };	// 포인터 배열, 널 포인터로 초기화
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		
		if (strcmp(temp, "end") == 0) 
			break;
		
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	print_str(str);	// 포인터 배열을 매개변수로 넘겨줌 

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);	// 동적 할당 영역 반환
	}

	return 0;
}

void print_str(char** ps)	// 이중 포인터 선언
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);	// ps가 가리키는 것은 포인터 배열의 요소
		ps++;
	}
}
