#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);	// 주소연산자 &

	printf("이름 입력 : ");
	scanf("%s", name);		// 배열 입력할때는 & 사용하지 않음, 배열이름이 주소

	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}