#include<stdio.h>

int main()
{
	int a = 1;

	// 조건식과 관계없이 반복할 문장을 최소 한번은 실행
	do {
		a = a * 2;
	} while (a < 10);

	printf("a : %d\n", a);

	return 0;
}