#include <stdio.h>

int main() 
{
	char name[30]="�ֿ���";
	int height=159;
	double weight=55;

	printf("���� �̸��� %s�Դϴ�.\nŰ�� %dcm�̰� �����Դ� %.1lfkg�Դϴ�.\n",name,height,weight);

	printf("���� �̸��� %s�Դϴ�.\nŰ�� %dcm�̰� �����Դ� %.1lfkg�Դϴ�.\n", "�ֿ���", 159, 55.0);

	return 0;
}