/*
	Calculator_v3.c

	Created : 2021-04-29
	Author  : 최연성
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	while (1) {
		int a, b;
		char ch;
		double result = 0;

		printf("숫자를 입력하세요\n$");
		scanf("%d %d", &a, &b);

		printf("연산기호를 입력하세요(+ - / *)\n$");
		scanf(" %c", &ch);

		switch (ch)
		{
		case '+':
			result = a + b;
			break;

		case '-':
			result = a - b;
			break;

		case '*':
			result = a * b;
			break;

		case '/':
			if (a == 0)
			{
				printf("피제수는 0이 될 수 없음\n\n");
			}
			else
			{
				result = (double)a / (double)b;
				if (isinf(result)) {
					printf("%d %c %d = %s\n\n", a, ch, b, "INFINITY");
				}
				else {
					printf("%d %c %d = %.1f\n\n", a, ch, b, result);
				}
			}
			continue;

		case 'q':
			printf("\n프로그램 종료\n");
			return 0;

		default:
			printf("\n연산기호가 없습니다.\n\n");
			continue;
		}

		printf("%d %c %d = %.0lf\n\n", a, ch, b, result);
	}

	return 0;
}