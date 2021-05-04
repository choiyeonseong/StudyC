// 소문자 입력 대문자 출력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	대문자 : 65-90
	소문자 : 97-122
	*/
	char a;
	
	while (1)
	{
		printf("문자를 입력하세요:\n$ ");
		a = getchar();
		getchar();	// 개행문자 삭제
		if (a > 64 && a < 91)
		{
			printf("소문자로 변환 : %c\n", a + 32);
		}
		else if (a > 96 && a < 123)
		{
			printf("대문자로 변환 : %c\n", a - 32);
		}
		else {
			printf("문자값이 아닙니다.\n프로그램 종료\n");
			break;
		}
	}
}