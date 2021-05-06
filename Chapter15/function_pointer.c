/*
	Calculator_v3.c

	Created : 2021-04-29
	Author  : 최연성
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(int, int);

int main()
{
	int (*fp)(int, int);	// 함수 포인터 선언

	int a, b;
	char ch;
	double result;

	char* str = { '0' };

	while (1) {
		a = 0, b = 0;
		result = 0;

		printf("숫자를 입력하세요\n$");
		scanf("%d %d", &a, &b);

		printf("연산기호를 입력하세요(+ - / *)\n$");
		scanf(" %c", &ch);

		switch (ch)
		{
		case '+': fp = sum; break;

		case '-': fp = sub; break;

		case '*': fp = mul; break;

		case '/': 
			if (a == 0)
			{
				printf("피제수는 0이 될 수 없음\n\n");
				continue;
			}
			else
			{
				result = div(a, b);

				if (isinf(result))
				{
					printf("제수는 0이 될 수 없음\n\n");
					continue;
				}
				else
				{
					printf("%d %c %d = %.1f\n\n", a, ch, b, result);
					continue;
				}
			}

		case 'q':
			printf("\n프로그램 종료\n");
			return 0;

		default:
			printf("\n연산기호가 없습니다.\n\n");
			continue;
		}

		result = fp(a, b);
		printf("%d %c %d = %d\n\n", a, ch, b, (int)result);
	}

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

double div(int a, int b)
{
	return (double)a / (double)b;
}