#include<stdio.h>

enum season { SPRING, SUMMER, FALL=100, WINTER };	// ������

int main()
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING :
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);

	printf("%d\n", sizeof ss);	// enum�� ũ��� 4byte�� ����
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);	// ����ȭ

	return 0;
}