#include <stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);	// 문자열에 특화되어있는 입력 함수
	
	puts("입력된 문자열 : ");	// 문자열 출력
	puts(str);

	return 0;
}