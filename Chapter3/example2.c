#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
	int a;
	char b;

	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	scanf("%d", &a);
	
	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	scanf(" %c", &b);	// 1) ������ �־���, ���͸� ��Ʈ������ �Է¹����ʰ�

	/*getchar();	// 2) ���ۿ� �ִ� ���ڸ� �ϳ� ������
	scanf("%c", &b);*/
	
	printf("�Էµ� ���� %d, %c �Դϴ�.", a, b);
	
	return 0;
}