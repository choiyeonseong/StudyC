#include<stdio.h>

int main()
{
	char* dessert = "apple";

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	/*
	* �� �Լ��� ���� ���
	while (*dessert != '\0')
	{
		putchar(*dessert);
		dessert++;
	}
	*/

	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}