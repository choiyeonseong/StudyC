#include <stdio.h>

int main() 
{
	int a = 20, b = 3;
	double res;

	/*****����ȯ ������*****/
	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	return 0;
}