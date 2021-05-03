#include<stdio.h>
int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);	// 개행문자를 가져오고 널문자로 바꿔서 저장
	printf("입력한 문자열은 \"%s\"입니다.", str);

	return 0;
}