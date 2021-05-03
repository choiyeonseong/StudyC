/*
	1. �ζ� ��ȣ�� �����Ҽ� �ִ� �迭 ����
		- lotto[6]
	2. �ζǹ�ȣ �Է�(������ ��ȣ�� �Է½� ���� �޼����� ����ϰ� �ٽ� �Է� �����ÿ�)
		- input_lotto(), print_lotto()
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int input_lotto(int* ary);
void print_lotto(int* ary);

/*�迭 �ϰ� �Է�*/

int main()
{

	while (1) {
		int lotto[6] = { 0 };
	
		printf("lotto��ȣ 6�ڸ��� �Է����ּ��� : \n$");

		int result = input_lotto(lotto);

		if (result < 0)
		{
			printf("�ߺ��� ���ڰ� �����մϴ�.\n");
			continue;
		}
		else
		{
			print_lotto(lotto);
			break;
		}
	}
}

int input_lotto(int* ary) {

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &ary[i]);
	}

	for (int j = 0; j < 6; j++) {
		int tmp = ary[j];
		for (int k = j+1; k < 6; k++) {
			if (tmp == ary[k])
			{
				return -1;
			}
		}
	}
	return 1;
}

void print_lotto(int* ary) {

	for (int i = 0; i < 6; i++) {
		printf("%d ", ary[i]);
	}
}