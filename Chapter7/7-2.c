#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_num();				// 함수 선언

int main()
{
	int result;

	result = get_num();		// 함수 호출
	printf("반환값 : %d\n", result);

	return 0;
}

/* 함수 정의 */
int get_num()				// 함수 머리 : 입력 출력
{							// 함수 몸체
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}