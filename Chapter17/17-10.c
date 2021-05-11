#include<stdio.h>
union student
{
	int num;
	double grade;
};	// 두 변수가 하나의 공간을 공유

struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 };
	struct student1 s2;

	/*printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;*/
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);	// 학번의 초깃값이 학점 멤버에 의해서 바뀜
	s1.num = 654;
	printf("학번 : %d\n", s1.num);

	printf("%d\n", sizeof s1);	// 8byte -> 멤버중 크기가 가장 큰 멤버(double)로 결정
	printf("%d\n", sizeof s2);	// 16byte -> padding byte 적용

	return 0;
}