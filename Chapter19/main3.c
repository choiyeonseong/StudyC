#include<stdio.h>

int input_data(void);
double average(void);
void print_data(double);
int count = 0;	// 선언
static int total = 0;	// 다른 파일에서 건들 수 없음

int main()
{
	double avg;

	total = input_data();
	avg = average();
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf("입력한 양수의 개수 : %d\n", count);
	printf("전체 합과 평균 : %d, %.1lf\n", total, avg);
}