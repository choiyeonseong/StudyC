#include<stdio.h>

void print_ary(int* pa);

int main()
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);	// �迭�� ��ü�� �ּ��̹Ƿ� �� ���� �Լ��� �μ�(������)�� �ִ°��� ����

	return 0;
}

void print_ary(int* pa)	// �Ű������� ������ ����
{
	for (int i = 0; i < 5; i++)
	{
		printf("�迭 : %d ", pa[i]);	// �����͸� �迭ó�� ���
		printf("������ : %d \n", *(pa++));	// ���� ���� ��� ���
	}
}