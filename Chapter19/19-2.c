#include<stdio.h>
#define PI		3.14159
#define LIMIT	100.0
#define MSG		"passed!"
#define ERR_PRN	printf("��� ������ ������ϴ�!\n")
#define SUM(a,b) (a+b)

int main()
{
	double radius, area;

	printf("�������� �Է��ϼ���(10 ����) : ");

	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else printf("���� ���� : %.2lf (%s)\n", area, MSG);
	int a = 4,b=5;

	printf("%d", SUM(a, b));

	return 0;
}