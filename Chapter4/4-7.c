#include<stdio.h>

int main()
{
	int a = 10, b = 20, res;

	a + b;			// 연산결과 버려짐
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b;	// 연산 결과 저장
	printf("%d + %d = %d\n", a, b, res);

	return 0;
}