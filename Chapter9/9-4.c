#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	
	// const : ���ȭ
	// pa�� ����Ű�� ���� a�� pa�� ���������Ͽ� �ٲܼ� ����
	const int* pa = &a; // �����Ͱ� ����Ű�� ���� �����͸� ���ȭ
	
	int* const pb = &b;	// ������ ��ü�� ���ȭ

	printf("���� a �� : %d\n", *pa);

	pa = &b;
	printf("���� b �� : %d\n", *pa);

	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);

	//*pa = 30;	// �Ұ��� : *pa�� ���ؼ� �����Ͱ��� �ǵ帮������
	//printf("���� a �� : %d\n", *pa);

	//pb = &a;	// �Ұ��� : ������ ��ü�� ���ȭ
	*pb = 25;	// ���� : �����Ͱ� �ٲ� �� ����
	printf("���� pb �� : %d\n", *pb);


	return 0;
}