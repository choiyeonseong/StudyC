#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main() {

	int a;
	char b;

	printf("정수 하나를 입력하세요 : $ ");
	scanf("%d ", &a);
	
	printf("문자 하나를 입력하세요 : $ ");
	getchar();	// 버퍼에 있는 문자를 하나 가져음
	scanf(" %c", &b);
	
	printf("입력된 값은 %d, %c 입니다.", a, b);
	
	return 0;
}