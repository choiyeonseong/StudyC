#include<stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;	// ���� ����� ����ü�� ����� ���
	int id;
	double grade;
};

int main()
{
	struct student seong;

	seong.pf.age = 17;
	seong.pf.height = 164.5;
	seong.id = 315;
	seong.grade = 4.3;

	printf("���� : %d\n", seong.pf.age);
	printf("Ű : %.1lf\n", seong.pf.height);
	printf("�й� : %d\n", seong.id);
	printf("���� : %.1lf\n", seong.grade);

	return 0;
}