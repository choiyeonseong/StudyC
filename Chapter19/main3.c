#include<stdio.h>

int input_data(void);
double average(void);
void print_data(double);
int count = 0;	// ����
static int total = 0;	// �ٸ� ���Ͽ��� �ǵ� �� ����

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
	printf("�Է��� ����� ���� : %d\n", count);
	printf("��ü �հ� ��� : %d, %.1lf\n", total, avg);
}