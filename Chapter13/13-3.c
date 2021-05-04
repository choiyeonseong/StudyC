#include<stdio.h>

void assign10(void);
void assign20(void);

int a;

int main()
{
	printf("함수 호출 전 a값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a값 : %d\n", a);

	return 0;
}

void assign10(void)
{
	a = 10;	// 전역변수 a에 대입
}

void assign20(void)
{
	int a;
	a = 20;	// 지역변수 a에 대입(전역변수 보다 지역변수 우선)
}