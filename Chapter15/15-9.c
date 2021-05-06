#include<stdio.h>
int main()
{
	int a = 10;
	double b = 3.5;
	void* vp;	// void 포인터

	vp = &a;
	printf("a : %d\n", *(int*)vp);	// 형변환을 해서 정확한 크기를 지정해야한다.

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}