#include<stdio.h>

int main()
{
	int a = 30;
	int res;

	/*****�� ������*****/
	res = (a > 10) && (a < 20);	// T && F == F
	printf("(a > 10) && (a < 20) : %d\n", res);

	res = (a < 10) || (a > 20);	// F || T == T
	printf("(a > 10) || (a < 20) : %d\n", res);

	res = !(a >= 30);			// !T == F
	printf("!(a>=30) : %d\n", res);

	return 0;
}