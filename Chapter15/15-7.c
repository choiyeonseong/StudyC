#include<stdio.h>
int sum(int, int);			// �Լ�����

/*
�����Ϳ� �Լ��� �Է�, ��� �ڷ����� �����ؾ���
*/

int main()
{
	int (*fp)(int, int);	// �Լ� ������ ����, �Լ� �̸��� �����ͷ� ��Ÿ��
	int res;

	fp = sum;				// �Լ����� �Լ� �����Ϳ� ����
	res = fp(10, 20);		// �Լ� �����ͷ� �Լ� ȣ��
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}