#include<stdio.h>

char* my_strcpy(char* pd, char* ps);

int main()
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}

char* my_strcpy(char* pd, char* ps)	// 복사 받을 곳 pd, 복사할 곳 ps
{
	char* po = pd;		// pd값을 나중에 반환하기 위해 보관

	while (*ps != '\0')
	{
		*pd = *ps;	// ps가 가리키는 문자를 pd가 가리키는 위치에 대입
		pd++;		// 복사받을 다음 위치로 포인터 증가
		ps++;		// 복사할 다음 문자의 위치로 포인터 증가
	}
	*pd = '\0';		// 복사가 끝난 후 복사받을곳에 null문자로 마무리
	
	return po;		// 복사가 끝난 저장 공간의 시작 주소 반환
}