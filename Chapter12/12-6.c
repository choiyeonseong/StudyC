#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	getchar();		// 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
	//scanf("%*c");	// 버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요없음
	//fgetc(stdin);	// 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}