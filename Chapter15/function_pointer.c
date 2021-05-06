/*
	Calculator_v3.c

	Created : 2021-04-29
	Author  : �ֿ���
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
	int (*fp)(int, int);	// �Լ� ������ ����

	int a, b;
	char ch;
	double result;

	char* str = { '0' };

	while (1) {
		a = 0, b = 0;
		result = 0;

		printf("���ڸ� �Է��ϼ���\n$");
		scanf("%d %d", &a, &b);

		printf("�����ȣ�� �Է��ϼ���(+ - / *)\n$");
		scanf(" %c", &ch);

		switch (ch)
		{
		case '+': fp = sum; break;

		case '-': fp = sub; break;

		case '*': fp = mul; break;

		case '/': 
			if (a == 0)
			{
				printf("�������� 0�� �� �� ����\n\n");
				continue;
			}
			else
			{
				result = div(a, b);

				if (isinf(result))
				{
					printf("������ 0�� �� �� ����\n\n");
					continue;
				}
				else
				{
					printf("%d %c %d = %.1f\n\n", a, ch, b, result);
					continue;
				}
			}

		case 'q':
			printf("\n���α׷� ����\n");
			return 0;

		default:
			printf("\n�����ȣ�� �����ϴ�.\n\n");
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