#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof a);			// 4 : int
	printf("double�� ������ ũ�� : %d\n", sizeof(b));		// 8 : double
	printf("������ ����� ũ�� : %d\n", sizeof(10));		// 4 : int -> ����� ũ�Ⱑ Ŀ���� 8����Ʈ�� �Ǳ⵵ ��
	printf("������ �ᱣ���� ũ�� : %d\n", sizeof (1.5+3.4));	// 8 : double -> ���� ������̸� 4����Ʈ�� �Ǳ⵵��
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));		// 1 : char

	return 0;
}