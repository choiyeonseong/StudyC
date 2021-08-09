#include<stdio.h>

void sum(int a, int b, int* c)
{
	*c = a + b;
}
int main(void)
{
	int a = 2, b = 3;
	int c = 0;
	sum(a, b, &c);

	printf("%d", c);
}