#include<stdio.h>
int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	/*시작 주소 크기는 4byte로 동일*/
	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	/*포인터도 가리키는 자료형과 상관없이 모두 크기가 같음 4byte*/
	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	/*포인터가 가리키는 변수의 크기 = 변수의 자료형의 크기*/
	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));		// *pc=char ch
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));		// *pi=int in
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));	// *pd=double db

	return 0;
}