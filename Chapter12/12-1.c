#include<stdio.h>
int main()
{
	// ���ڿ��� �ּҴ�!!
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");	// �ּҰ� ���
	printf("�ι�° ������ �ּ� �� : %p\n", "apple"+1);		// �ּҰ� ���
	printf("ù��° ���� : %c\n", *"apple");					// ���� ���� ����
	printf("�ι�° ���� : %c\n", *("apple"+1));				// ������ �����
	printf("�迭�� ǥ���� ����° ���� : %c\n", "apple"[2]);	// �迭 ǥ����

	return 0;
}