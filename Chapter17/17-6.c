#include<stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main()
{
	struct score me = { 90,80,70 };	// ����ü ���� ����� �ʱ�ȭ
	struct score* ps = &me;			// ����ü �����Ϳ� �ּ� ����

	printf("���� : %d\n", (*ps).kor);	// ����ü �����ͷ� ��� ����
	printf("���� : %d\n", ps->eng);		// -> ������ ���
	printf("���� : %d\n", ps->math);

	return 0;
}