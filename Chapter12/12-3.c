#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[80];

	// 입력버퍼에 저장되었다가 scanf를 만나면 저장되었던 문자열을 가져온다
	printf("문자열 입력 : ");
	scanf("%s", str);		// 공백 전까지만 입력

	printf("첫번째 단어 : %s\n", str);
	scanf("%s", str);		// 남아있는 단어 입력
	
	printf("버퍼에 남아있는 두번째 단어 : %s\n", str);
	
	return 0;
}