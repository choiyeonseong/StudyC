#include <stdio.h>

int main()
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);	// ��Ÿ�� �� �� : ���� �ٸ����� ��
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	char ch = 128;
	printf("ch >> 1 : %d", ch >> 1);	//0b 1100 0000 - 2����

	return 0;
}