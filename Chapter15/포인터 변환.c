#include<stdio.h>
#include<stdlib.h>

int main()
{
	/* 1. 크기가 큰 메모리 공간을 할당한뒤, 작은 자료형의 포인터로 역참조 */

	int* numPtr = malloc(sizeof(int));	// 4byte만큼 메모리 할당
	char* cPtr;

	*numPtr = 0x12345678;	// 역참조

	cPtr = (char*)numPtr;	// int 포인터 numPtr을 char 포인터로 변환, 메모리 주소만 저장됨

	printf("0x%x\n", *cPtr);	// 0x78 : char 포인터이므로 낮은 자릿수 1byte를 가져오므로 0x78
	// numPtr 이나 cPtr 이나 안에 저장된 메모리 주소는 같지만 자료형에 따라 역참조했을때 값을 가져오는 크기가 결정됨

	printf("int* : %p / char* : %p\n", sizeof numPtr, sizeof cPtr);

	free(numPtr);	// 동적 메모리 해제


	/* 2. 크기가 작은 메모리 공간을 할당한뒤, 큰 자료형의 포인터로 역참조 */

	short* numPtr1 = malloc(sizeof(short));	// 2byte만큼 메모리 할당
	int* numPtr2;

	*numPtr1 = 0x1234;	// 역참조

	numPtr2 = (int*)numPtr1;	// short포인터 numPtr1을 int 포인터로 변환, 메모리 주소만 저장됨

	printf("0x%x\n", *numPtr2);	// 0xfdfd1234 : 옆의 메모리를 침범하여 값을 가져옴
								// 0xfdfd는 상황에 따라서 값이 달라질 수 있음
								// malloc으로 할당되지 않은 공간의 쓰레기값을 출력

	free(numPtr1);	// 동적 메모리 해제
	

	/* 3. 포인터 변환과 컴파일 경고 */

	int* numPtr3 = malloc(sizeof(int));	// 4byte만큼 메모리 할당
	char* cPtr;

	cPtr = numPtr3;	// 에러 : 변환할때 자료형이 달라서 컴파일 경고가 발생

	*numPtr3 = 0x12345678;

	printf("0x%x\n", *(char*)numPtr3);	// 0x78 : numPtr3을 char 포인터로 변환한 뒤 역참조

	free(numPtr3);	// 동적 메모리 해제

	return 0;
}