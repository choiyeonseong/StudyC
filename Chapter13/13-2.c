#include<stdio.h>
int main()
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);

	{
		int temp;	// 블록 안 지역변수

		temp = a;
		a = b;
		b = temp;
	}

	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}