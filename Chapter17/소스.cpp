#include<stdio.h>

int main()
{
	int arr[300][300];
	int n, m;
	int a, b, c, d;
	int z;
	int sum;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d", &z);
	for (int i = 0; i < z; i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		sum = 0;
		for (int j = a - 1; j <= c - 1; j++)
		{
			for (int k = b - 1; k <= d - 1; k++)
			{
				sum += arr[j][k];
			}
		}
		printf("%d\n", sum);
	}
}
/*
2 3
1 2 4
8 16 32
3
1 1 2 3
1 2 1 2
1 3 2 3
*/
