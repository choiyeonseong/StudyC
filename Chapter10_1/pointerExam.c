/*
pointerExam.c

Date:2021-04-30
Author:ȫ�浿

description :
1. 10 ���� ������ �Է¹޾� �迭�� �����Ѵ�.
2. �迭�� ����Ѵ�.
3. �迭�� ����� ���� 9<->0, 8<->1,7<->2, ... ���·�
����� ���� ��ȯ�Ѵ�.
4. �迭�� ����Ѵ�.

input_ary();
swap_ary();
print_ary();
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(int* ary, int size);		// �Է¹޴� �Լ�
void swap_ary(int* ary, int size);		// ��ȯ �Լ�
void print_ary(int* ary, int size);		// ����ϴ� �Լ�

int main()
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);

	swap_ary(ary, size);

	print_ary(ary, size);
}

/*�迭 ���*/
//void swap_ary(int* ary, int size)
//{
//	for (int i = size - 1; i >= (size / 2); i--)
//	{
//		int j = size - 1 - i;	// i=9, j=0
//
//		int tmp = ary[j];
//		ary[j] = ary[i];
//		ary[i] = tmp;
//	}
//}

/*������ ���*/
void swap_ary(int* ary, int size)
{
	for (int i = 0; i < (size / 2); i++)
	{
		int* first = &ary[0];
		int* last = &ary[9];

		int tmp = *(first + i);
		*(first + i) = *(last - i);
		*(last - i) = tmp;
	}
}

void input_ary(int* ary, int size)
{
	printf("10���� ������ �Է��ϼ��� :\n$");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &ary[i]);
	}
}

void print_ary(int* ary, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
}