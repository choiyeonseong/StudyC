#include<stdio.h>

int main()
{
	int ary[3];
	int* pa = ary;	// �����Ϳ� �迭�� ����

	*pa = 10;				// ù��° �迭 ��� *(pa+0)
	
	*(pa + 1) = 20;			// �ι�° �迭 ���
	
	pa[2] = pa[0] + pa[1];	// ����° �迭 ���

	for (int i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}