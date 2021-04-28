#include<stdio.h>

int main()
{
	int a = 10, b = 5;
	int res;

	/*
	*연산자 우선순위와 연산방향*
		단항 > 이항 > 삼항
		산술 > 비트이동 > 관계 > 논리
	*/
	res = a / b * 2;
	printf("res = %d\n", res);
	
	res = ++a * 3;
	printf("res = %d\n", res);
	
	res = a > b && a != 5;
	printf("res = %d\n", res);
	
	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;
}