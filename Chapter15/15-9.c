#include<stdio.h>
int main()
{
	int a = 10;
	double b = 3.5;
	void* vp;	// void ������

	vp = &a;
	printf("a : %d\n", *(int*)vp);	// ����ȯ�� �ؼ� ��Ȯ�� ũ�⸦ �����ؾ��Ѵ�.

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}