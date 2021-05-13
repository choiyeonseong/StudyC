#include<stdio.h>
#include"user.h"
int main()
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d¿Í %dÀÇ Æò±Õ : %.1lf\n", a, b, avg);

	return 0;
}