#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[80];

	// �Է¹��ۿ� ����Ǿ��ٰ� scanf�� ������ ����Ǿ��� ���ڿ��� �����´�
	printf("���ڿ� �Է� : ");
	scanf("%s", str);		// ���� �������� �Է�

	printf("ù��° �ܾ� : %s\n", str);
	scanf("%s", str);		// �����ִ� �ܾ� �Է�
	
	printf("���ۿ� �����ִ� �ι�° �ܾ� : %s\n", str);
	
	return 0;
}