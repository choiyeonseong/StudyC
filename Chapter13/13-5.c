#include<stdio.h>
int main()
{
	register int i;	// �������Ϳ� ���� �����ϸ� ���θ޸𸮿� �����ϴ� �ð��� ���ϼ� �ִ�.
	auto int sum = 0;

	for (i = 1; i <= 100000; i++)
	{
		for (i = 1; i <= 100000; i++)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return 0;
}