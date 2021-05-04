#include <stdio.h>
void auto_func(void);
void static_func(void);

int main()
{
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void) 
{
	auto int a = 0;		// �Լ� �� ��������

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;		// ���� ���� ���� : ���α׷��� ����Ǵ� ���� ��� �����ȴ�

	a++;
	printf("%d\n", a);
}