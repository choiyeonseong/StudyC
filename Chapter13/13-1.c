#include<stdio.h>

void assign(void);

int main()
{
	auto int a = 0;

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;		// 메인함수에 있는 변수와 같은 이름의 지역변수, auto 생략

	a = 10;
	printf("assign 함수 a : %d\n", a);
}