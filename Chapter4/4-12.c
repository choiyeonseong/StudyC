#include<stdio.h>

int main()
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;	// 삼항연산자
	
	printf("큰 값 : %d\n", res);

	return 0;
}