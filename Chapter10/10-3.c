#include<stdio.h>

int main()
{
	/*�����͸� �̿��� �迭�� �� ���*/
	int ary[3] = { 10,20,30 };
	int* pa = ary;

	printf("�迭�� �� : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}