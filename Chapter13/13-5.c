#include<stdio.h>
int main()
{
	register int i;	// 레지스터에 값을 저장하면 메인메모리에 접근하는 시간을 줄일수 있다.
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