#include<stdio.h>
int main()
{
	char str[5];	// �ʱ�ȭ �ϸ� �����Ⱚ �����

	str[0] = '0';
	str[1] = 'K';
	str[2] = '\0';	// null ���� -> ���ڿ� ���·� �ʱ�ȭ ��Ű�� null ���� �ȳ־ ��

	printf("%s\n", str);	// null ���ڰ� ������ �����Ⱚ ���

	return 0;
}