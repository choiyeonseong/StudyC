#include <stdio.h>

int main() 
{
	char name[30]="최연성";
	int height=159;
	double weight=55;

	printf("나의 이름은 %s입니다.\n키는 %dcm이고 몸무게는 %.1lfkg입니다.\n",name,height,weight);

	printf("나의 이름은 %s입니다.\n키는 %dcm이고 몸무게는 %.1lfkg입니다.\n", "최연성", 159, 55.0);

	return 0;
}