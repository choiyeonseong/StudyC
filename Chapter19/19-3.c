#include<stdio.h>
#define SUM(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))
#define test(a)	 ((a)*10)	// ��ȣ ����
int main()
{
	int a = 10, b = 20;

	printf("%d", test(a+10));
}