#include<stdio.h>

void my_gets(char* ps);

int main()
{
	int i = 0;		
	char str[20];	
	char ch;	// �ӽ� ����

	// ���ο��� gets����
	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');	// �Է��� ���ڰ� �����̸� ����

	str[i] = '\0';
	
	//my_gets(str);	//�Լ��� gets����

	printf("��� : %s",str);

	return 0;
}

void my_gets(char* ps)	// ps�� ù��° �迭 ��Ҹ� ����Ų��
{
	char ch;

	while ((ch = getchar()) != '\n')	// �Է��� ���ڰ� ���๮�ڰ� �ƴ� ���� �ݺ�
	{
		*ps = ch;	
		ps++;
	}
	*ps = '\0';
}