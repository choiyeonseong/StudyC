#include<stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;	// 먼저 선언된 구조체를 멤버로 사용
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

	printf("나이 : %d\n", seong.pf.age);
	printf("키 : %.1lf\n", seong.pf.height);
	printf("학번 : %d\n", seong.id);
	printf("학점 : %.1lf\n", seong.grade);

	return 0;
}