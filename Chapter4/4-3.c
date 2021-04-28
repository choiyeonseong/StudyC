#include<stdio.h>

int main()
{
	int a = 10, b = 10;
	int c = 10, d = 10;

	/*****증감 연산자*****/

	++a;	// 전위
	--b;	// 후위

	c++;	// 후위
	d--;	// 후위

	printf("a : %d\tb : %d\n", a, b);
	printf("c : %d\td : %d\n", c, d);

	return 0;
}