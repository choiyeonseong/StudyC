#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);	// 2개의 문자를 연속 입력(공백, 탭, 개행문자도 문자로 입력)
	//scanf("%c %c", &ch1, &ch2);	// 공백을 무시하고 그 외의 문자만 입력


	printf("[%c%c]", ch1, ch2);	// 입력된 문자 출력

	return 0;
}