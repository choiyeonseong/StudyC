#include<stdio.h>
int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	/*���� �ּ� ũ��� 4byte�� ����*/
	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	/*�����͵� ����Ű�� �ڷ����� ������� ��� ũ�Ⱑ ���� 4byte*/
	printf("char * �������� ũ�� : %d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	/*�����Ͱ� ����Ű�� ������ ũ�� = ������ �ڷ����� ũ��*/
	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));		// *pc=char ch
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));		// *pi=int in
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));	// *pd=double db

	return 0;
}