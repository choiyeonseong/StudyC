/*
	Calculator_v1.c

	Created : 2021-04-28
	Author  : 최연성
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// 1. 두 값을 입력받는다.
	int a, b;
	printf("숫자를 입력하세요\n$");
	scanf("%d %d", &a, &b);

	// 2. 사칙 연산을 수행한다.
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	double div = (double)a / (double)b;

	// 3. 연산 결과를 출력한다.
	printf("a + b = %d\n",sum);
	printf("a - b = %d\n",sub);
	printf("a * b = %d\n",mul);
	printf("a / b = %.1lf\n",div);

	return 0;
}