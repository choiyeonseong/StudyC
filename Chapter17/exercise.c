/*
5명의 사원아이디, 사원이름, 한달급여를 입력받아 출력한 뒤
5명 사원의 급여 총액과 급여액을 구하시오.
(이름은 동적 할당에 저장한다.)

입력값:
101 홍길동 1500
102 오길순 2300
103 한신동 1800
104 김길만 4500
105 강호동 2500
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee {
	int id;		// 사원번호
	char* name;	// 사원이름
	int salary;	// 급여
}Employee;

int main()
{
	int N = 5;
	int i, sum = 0;
	char tmp[20];

	Employee* people;
	people = malloc(sizeof(Employee) * N);
	if (people == NULL)
	{
		printf("메모리 부족");
		exit(1);
	}

	for (i = 0; i < N; i++)
	{
		scanf("%d %s %d", &people[i].id, tmp, &people[i].salary);
		
		(people + i)->name = (char *)malloc(strlen(tmp) + 1);	// +1 널문자 자리, 문자열의 길이 : strlen
		if ((people + i)->name == NULL)
		{
			printf("메모리 부족");
			exit(1);
		}
		strcpy((people + i)->name, tmp);
	}

	for (i = 0; i < N; i++)
	{
		printf("사원 아이디 : %d	사원 이름 : %s	급여 : %d\n", (people + i)->id, (*(people + i)).name, people[i].salary);
		sum += (people + i)->salary;
		free(people[i].name);	// 동적 할당 반납
	}

	printf("급여 총액 : %d	평균 급여액 : %.2lf", sum, (double)sum / N);

	return 0;
}