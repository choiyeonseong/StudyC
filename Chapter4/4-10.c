#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	int res = 2;

	/*****���մ��� ������*****/
	a += 20;
	res *= b + 10;

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}