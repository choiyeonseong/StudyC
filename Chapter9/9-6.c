#include<stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;	// �ڷ����� �ٸ� �����͸� �����ϴ� ���� ����
	printf("%lf\n", *pd); // �ڷ����� �޶� �Ҵ���� ������ ���

	return 0;
}