#include<stdio.h>
union student
{
	int num;
	double grade;
};	// �� ������ �ϳ��� ������ ����

struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 };
	struct student1 s2;

	/*printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;*/
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);	// �й��� �ʱ갪�� ���� ����� ���ؼ� �ٲ�
	s1.num = 654;
	printf("�й� : %d\n", s1.num);

	printf("%d\n", sizeof s1);	// 8byte -> ����� ũ�Ⱑ ���� ū ���(double)�� ����
	printf("%d\n", sizeof s2);	// 16byte -> padding byte ����

	return 0;
}