#include <stdio.h>
int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	//tax_rate = 0.15;
	income = 456;
	tax = income * tax_rate;
	printf("������ %.1lf�Դϴ�.\n", tax);

	//const int t; // �ʱ�ȭ ���� ������ ���� �ȵ�
	//printf("%d", t);

	return 0;
}