#include<stdio.h>

int main()
{
	int a = 10, b = 15;
	int total;
	double avg;

	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;	// total = a + b;
	*pg = *pt / 2.0;	// avg = total / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}