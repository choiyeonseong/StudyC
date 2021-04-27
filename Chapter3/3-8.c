#include <stdio.h>
int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	//tax_rate = 0.15;
	income = 456;
	tax = income * tax_rate;
	printf("세금은 %.1lf입니다.\n", tax);

	//const int t; // 초기화 하지 않으면 빌드 안됨
	//printf("%d", t);

	return 0;
}