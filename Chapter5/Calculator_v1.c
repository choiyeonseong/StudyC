/*
	Calculator_v1.c

	Created : 2021-04-28
	Author  : �ֿ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// 1. �� ���� �Է¹޴´�.
	int a, b;
	printf("���ڸ� �Է��ϼ���\n$");
	scanf("%d %d", &a, &b);

	// 2. ��Ģ ������ �����Ѵ�.
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	double div = (double)a / (double)b;

	// 3. ���� ����� ����Ѵ�.
	printf("a + b = %d\n",sum);
	printf("a - b = %d\n",sub);
	printf("a * b = %d\n",mul);
	printf("a / b = %.1lf\n",div);

	return 0;
}