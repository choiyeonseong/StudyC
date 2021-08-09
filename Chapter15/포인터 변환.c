#include<stdio.h>
#include<stdlib.h>

int main()
{
	/* 1. ũ�Ⱑ ū �޸� ������ �Ҵ��ѵ�, ���� �ڷ����� �����ͷ� ������ */

	int* numPtr = malloc(sizeof(int));	// 4byte��ŭ �޸� �Ҵ�
	char* cPtr;

	*numPtr = 0x12345678;	// ������

	cPtr = (char*)numPtr;	// int ������ numPtr�� char �����ͷ� ��ȯ, �޸� �ּҸ� �����

	printf("0x%x\n", *cPtr);	// 0x78 : char �������̹Ƿ� ���� �ڸ��� 1byte�� �������Ƿ� 0x78
	// numPtr �̳� cPtr �̳� �ȿ� ����� �޸� �ּҴ� ������ �ڷ����� ���� ������������ ���� �������� ũ�Ⱑ ������

	printf("int* : %p / char* : %p\n", sizeof numPtr, sizeof cPtr);

	free(numPtr);	// ���� �޸� ����


	/* 2. ũ�Ⱑ ���� �޸� ������ �Ҵ��ѵ�, ū �ڷ����� �����ͷ� ������ */

	short* numPtr1 = malloc(sizeof(short));	// 2byte��ŭ �޸� �Ҵ�
	int* numPtr2;

	*numPtr1 = 0x1234;	// ������

	numPtr2 = (int*)numPtr1;	// short������ numPtr1�� int �����ͷ� ��ȯ, �޸� �ּҸ� �����

	printf("0x%x\n", *numPtr2);	// 0xfdfd1234 : ���� �޸𸮸� ħ���Ͽ� ���� ������
								// 0xfdfd�� ��Ȳ�� ���� ���� �޶��� �� ����
								// malloc���� �Ҵ���� ���� ������ �����Ⱚ�� ���

	free(numPtr1);	// ���� �޸� ����
	

	/* 3. ������ ��ȯ�� ������ ��� */

	int* numPtr3 = malloc(sizeof(int));	// 4byte��ŭ �޸� �Ҵ�
	char* cPtr;

	cPtr = numPtr3;	// ���� : ��ȯ�Ҷ� �ڷ����� �޶� ������ ��� �߻�

	*numPtr3 = 0x12345678;

	printf("0x%x\n", *(char*)numPtr3);	// 0x78 : numPtr3�� char �����ͷ� ��ȯ�� �� ������

	free(numPtr3);	// ���� �޸� ����

	return 0;
}