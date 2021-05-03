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

/*�迭 �Ѱ��� �Է�*/

int main()
{
	int lotto[6] = { 0 };

	printf("lotto��ȣ 6�ڸ��� �Է����ּ��� : \n$");

	input_lotto(lotto);

	print_lotto(lotto);
}

int input_lotto(int* ary) {

	int flag = 1;	// �ߺ��̸� -1, �ߺ� ������ 1
	int tmp;
	int i = 0;
	while (i < 6)
	{
		scanf("%d", &tmp);

		if (tmp < 0 || tmp > 45)
		{
			printf("!lotto ���� ������ �ƴմϴ�.\n");
			continue;
		}

		if (i == 0)	// ù��° ���� �Է�
		{
			flag = 1;
		}
		else if (i > 0) {	// �ι�° ���ں���
			for (int j = 0; j < i; j++) {	// �ߺ� ���� Ȯ��
				if (tmp == ary[j])
				{
					printf("!�ߺ��� ���ڰ� ����\n");
					flag = -1;	// �ߺ�
					break;
				}
				flag = 1;	// �ߺ� ����
			}
		}

		if (flag > 0) {	// �ߺ��� ������ �迭�� �Է�
			ary[i] = tmp;
			i++;
		}
	}
}

void print_lotto(int* ary) {

	printf("���� ��ȣ :\n$ ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", ary[i]);
	}
}