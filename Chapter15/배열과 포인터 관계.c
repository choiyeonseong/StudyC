/*
	title : �迭�� �������� ����
	
*/

#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);

	printf("==============================================\n");

	int ary1[2] = { 1,2 };	// 4byte
	char* pary1 = ary1;		// 1byte	// �ٸ� Ÿ���� �����Ϳ� �ִ°��� ��������� ���� �ּҷ� �Ѿ�� �ּ� ���� ����
	printf("%p %p\n", ary1,pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1);

	printf("==============================================\n");

	char ary2[2] = { 'a','b' };	// 1byte
	int* pary2 = ary2;			// 4byte
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2 + 1, pary2 + 1);

	printf("==============================================\n");

	int ary3[][2] = { {1,2},{3,4} };	// 4byte * 2
	//int* pary3 = ary3;	// 4byte
	int (*pary3)[2] = ary3;	// 4byte * 2		// 2���� �迭�� ������ 1���� �迭
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1);

	printf("==============================================\n");

	char *ary4[2] = { "hi","hello" };	// 4byte	
	//char* pary4 = ary4;	// 1byte
	char* *pary4 = ary4;	// 4byte

	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4+1, pary4+1);

	return 0;
}