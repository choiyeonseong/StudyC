#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main() {

	int a;
	char b;

	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	scanf("%d ", &a);
	
	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	getchar();	// ���ۿ� �ִ� ���ڸ� �ϳ� ������
	scanf(" %c", &b);
	
	printf("�Էµ� ���� %d, %c �Դϴ�.", a, b);
	
	return 0;
}