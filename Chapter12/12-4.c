#include<stdio.h>
int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);	// ���๮�ڸ� �������� �ι��ڷ� �ٲ㼭 ����
	printf("�Է��� ���ڿ��� \"%s\"�Դϴ�.", str);

	return 0;
}