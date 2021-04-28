/*
	Calculator_v2.c

	Created : 2021-04-28
	Author  : �ֿ���
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

		printf("�� ���� ���ڸ� �Է��ϼ���\n$");
		scanf("%d %d", &a, &b);

		printf("�����ȣ�� �Է��ϼ���(+ - / *)\n$");
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
				printf("�������� 0�� �� �� ����\n");
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
			printf("\n���α׷� ����");
			return 0;
		default:
			printf("\n�����ȣ�� �����ϴ�.\n");
			continue;
		}

		printf("%d %c %d = %d\n\n", a, ch, b, result);
	}

	return 0;
}