#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, grade;

	/*�����Է� �� ���� �Է�*/
	printf("�й� �Է� : ");
	scanf("%d", &num);	
	
	//fflush(stdin);
	getchar();	// ���ۿ� �����ִ� ���๮�� ����
	
	printf("���� �Է� : ");
	grade = getchar();


	/*
	* ���� �Է� �� ���� �Է�
	printf("���� �Է� : ");
	grade = getchar();

	// ���๮�� ���� �ʿ� ����

	printf("�й� �Է� : ");
	scanf("%d", &num);	
	*/

	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}