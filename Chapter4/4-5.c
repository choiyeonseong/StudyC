#include<stdio.h>

int main()
{
	int a = 10, b = 20, c = 10;
	int res;	// 결과 - 참이면 1 거짓이면 0

	/****관계 연산자****/
	res = (a > b);
	printf("a > b : %d\n", res);

	res = (a >= b);
	printf("a >= b : %d\n", res);

	res = (a < b);
	printf("a < b : %d\n", res);

	res = (a <= b);
	printf("a <= b : %d\n", res);

	res = (a <= c);
	printf("a <= c : %d\n", res);

	res = (a == b);
	printf("a == b : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;
}