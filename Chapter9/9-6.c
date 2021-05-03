#include<stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;	// 자료형이 다른 포인터를 대입하는 것은 가능
	printf("%lf\n", *pd); // 자료형이 달라서 할당되지 않은값 출력

	return 0;
}